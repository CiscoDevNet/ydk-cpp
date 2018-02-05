#ifndef _OPENCONFIG_BGP_
#define _OPENCONFIG_BGP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_bgp {

class Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

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

        class Global; //type: Bgp::Global
        class Neighbors; //type: Bgp::Neighbors
        class PeerGroups; //type: Bgp::PeerGroups

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global> global;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors> neighbors;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups> peer_groups;
        
}; // Bgp


class Bgp::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        class Config; //type: Bgp::Global::Config
        class State; //type: Bgp::Global::State
        class DefaultRouteDistance; //type: Bgp::Global::DefaultRouteDistance
        class Confederation; //type: Bgp::Global::Confederation
        class GracefulRestart; //type: Bgp::Global::GracefulRestart
        class UseMultiplePaths; //type: Bgp::Global::UseMultiplePaths
        class RouteSelectionOptions; //type: Bgp::Global::RouteSelectionOptions
        class AfiSafis; //type: Bgp::Global::AfiSafis
        class ApplyPolicy; //type: Bgp::Global::ApplyPolicy

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::DefaultRouteDistance> default_route_distance;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::Confederation> confederation;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis> afi_safis;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::ApplyPolicy> apply_policy;
        
}; // Bgp::Global


class Bgp::Global::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf router_id; //type: string

}; // Bgp::Global::Config


class Bgp::Global::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_prefixes; //type: uint32

}; // Bgp::Global::State


class Bgp::Global::DefaultRouteDistance : public ydk::Entity
{
    public:
        DefaultRouteDistance();
        ~DefaultRouteDistance();

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

        class Config; //type: Bgp::Global::DefaultRouteDistance::Config
        class State; //type: Bgp::Global::DefaultRouteDistance::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::DefaultRouteDistance::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::DefaultRouteDistance::State> state;
        
}; // Bgp::Global::DefaultRouteDistance


class Bgp::Global::DefaultRouteDistance::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf external_route_distance; //type: uint8
        ydk::YLeaf internal_route_distance; //type: uint8

}; // Bgp::Global::DefaultRouteDistance::Config


class Bgp::Global::DefaultRouteDistance::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf external_route_distance; //type: uint8
        ydk::YLeaf internal_route_distance; //type: uint8

}; // Bgp::Global::DefaultRouteDistance::State


class Bgp::Global::Confederation : public ydk::Entity
{
    public:
        Confederation();
        ~Confederation();

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

        class Config; //type: Bgp::Global::Confederation::Config
        class State; //type: Bgp::Global::Confederation::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::Confederation::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::Confederation::State> state;
        
}; // Bgp::Global::Confederation


class Bgp::Global::Confederation::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf identifier; //type: uint32
        ydk::YLeafList member_as; //type: list of  uint32

}; // Bgp::Global::Confederation::Config


class Bgp::Global::Confederation::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf identifier; //type: uint32
        ydk::YLeafList member_as; //type: list of  uint32

}; // Bgp::Global::Confederation::State


class Bgp::Global::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

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

        class Config; //type: Bgp::Global::GracefulRestart::Config
        class State; //type: Bgp::Global::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::GracefulRestart::State> state;
        
}; // Bgp::Global::GracefulRestart


class Bgp::Global::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // Bgp::Global::GracefulRestart::Config


class Bgp::Global::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // Bgp::Global::GracefulRestart::State


class Bgp::Global::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

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

        class Config; //type: Bgp::Global::UseMultiplePaths::Config
        class State; //type: Bgp::Global::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Global::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::Global::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp> ibgp;
        
}; // Bgp::Global::UseMultiplePaths


class Bgp::Global::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::UseMultiplePaths::Config


class Bgp::Global::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::UseMultiplePaths::State


class Bgp::Global::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

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

        class Config; //type: Bgp::Global::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Global::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::Global::UseMultiplePaths::Ebgp


class Bgp::Global::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ebgp::Config


class Bgp::Global::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ebgp::State


class Bgp::Global::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

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

        class Config; //type: Bgp::Global::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::Global::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp::State> state;
        
}; // Bgp::Global::UseMultiplePaths::Ibgp


class Bgp::Global::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ibgp::Config


class Bgp::Global::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::UseMultiplePaths::Ibgp::State


class Bgp::Global::RouteSelectionOptions : public ydk::Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

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

        class Config; //type: Bgp::Global::RouteSelectionOptions::Config
        class State; //type: Bgp::Global::RouteSelectionOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::RouteSelectionOptions::State> state;
        
}; // Bgp::Global::RouteSelectionOptions


class Bgp::Global::RouteSelectionOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::RouteSelectionOptions::Config


class Bgp::Global::RouteSelectionOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::RouteSelectionOptions::State


class Bgp::Global::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

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

        class AfiSafi; //type: Bgp::Global::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi> > afi_safi;
        
}; // Bgp::Global::AfiSafis


class Bgp::Global::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

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

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::State
        class GracefulRestart; //type: Bgp::Global::AfiSafis::AfiSafi::GracefulRestart
        class RouteSelectionOptions; //type: Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions
        class UseMultiplePaths; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths
        class ApplyPolicy; //type: Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3VpnIpv4Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        
}; // Bgp::Global::AfiSafis::AfiSafi


class Bgp::Global::AfiSafis::AfiSafi::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Config


class Bgp::Global::AfiSafis::AfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_prefixes; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::State


class Bgp::Global::AfiSafis::AfiSafi::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart


class Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config


class Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State


class Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions : public ydk::Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions


class Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config


class Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
        
}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy


class Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config


class Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public ydk::Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public ydk::Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public ydk::Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public ydk::Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls : public ydk::Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn : public ydk::Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class Bgp::Global::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

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

        class Config; //type: Bgp::Global::ApplyPolicy::Config
        class State; //type: Bgp::Global::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Global::ApplyPolicy::State> state;
        
}; // Bgp::Global::ApplyPolicy


class Bgp::Global::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Global::ApplyPolicy::Config


class Bgp::Global::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Global::ApplyPolicy::State


class Bgp::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Bgp::Neighbors::Neighbor

        std::vector<std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor> > neighbor;
        
}; // Bgp::Neighbors


class Bgp::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        //type: union (refers to openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Config::neighbor_address)
        ydk::YLeaf neighbor_address;
        class Config; //type: Bgp::Neighbors::Neighbor::Config
        class State; //type: Bgp::Neighbors::Neighbor::State
        class Timers; //type: Bgp::Neighbors::Neighbor::Timers
        class Transport; //type: Bgp::Neighbors::Neighbor::Transport
        class ErrorHandling; //type: Bgp::Neighbors::Neighbor::ErrorHandling
        class GracefulRestart; //type: Bgp::Neighbors::Neighbor::GracefulRestart
        class LoggingOptions; //type: Bgp::Neighbors::Neighbor::LoggingOptions
        class EbgpMultihop; //type: Bgp::Neighbors::Neighbor::EbgpMultihop
        class RouteReflector; //type: Bgp::Neighbors::Neighbor::RouteReflector
        class AsPathOptions; //type: Bgp::Neighbors::Neighbor::AsPathOptions
        class AddPaths; //type: Bgp::Neighbors::Neighbor::AddPaths
        class UseMultiplePaths; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths
        class ApplyPolicy; //type: Bgp::Neighbors::Neighbor::ApplyPolicy
        class AfiSafis; //type: Bgp::Neighbors::Neighbor::AfiSafis

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Timers> timers;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Transport> transport;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling> error_handling;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions> logging_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector> route_reflector;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths> add_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis> afi_safis;
        
}; // Bgp::Neighbors::Neighbor


class Bgp::Neighbors::Neighbor::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::peer_group_name)
        ydk::YLeaf peer_group;
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string

}; // Bgp::Neighbors::Neighbor::Config


class Bgp::Neighbors::Neighbor::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::peer_group_name)
        ydk::YLeaf peer_group;
        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string
        ydk::YLeaf session_state; //type: SessionState
        ydk::YLeaf last_established; //type: uint64
        ydk::YLeaf established_transitions; //type: uint64
        ydk::YLeafList supported_capabilities; //type: list of  BGPCAPABILITY
        class Messages; //type: Bgp::Neighbors::Neighbor::State::Messages
        class Queues; //type: Bgp::Neighbors::Neighbor::State::Queues

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages> messages;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::State::Queues> queues;
                class SessionState;

}; // Bgp::Neighbors::Neighbor::State


class Bgp::Neighbors::Neighbor::State::Messages : public ydk::Entity
{
    public:
        Messages();
        ~Messages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sent; //type: Bgp::Neighbors::Neighbor::State::Messages::Sent
        class Received; //type: Bgp::Neighbors::Neighbor::State::Messages::Received

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages::Sent> sent;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages::Received> received;
        
}; // Bgp::Neighbors::Neighbor::State::Messages


class Bgp::Neighbors::Neighbor::State::Messages::Sent : public ydk::Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: uint64
        ydk::YLeaf notification; //type: uint64

}; // Bgp::Neighbors::Neighbor::State::Messages::Sent


class Bgp::Neighbors::Neighbor::State::Messages::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update; //type: uint64
        ydk::YLeaf notification; //type: uint64

}; // Bgp::Neighbors::Neighbor::State::Messages::Received


class Bgp::Neighbors::Neighbor::State::Queues : public ydk::Entity
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

        ydk::YLeaf input; //type: uint32
        ydk::YLeaf output; //type: uint32

}; // Bgp::Neighbors::Neighbor::State::Queues


class Bgp::Neighbors::Neighbor::Timers : public ydk::Entity
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

        class Config; //type: Bgp::Neighbors::Neighbor::Timers::Config
        class State; //type: Bgp::Neighbors::Neighbor::Timers::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Timers::State> state;
        
}; // Bgp::Neighbors::Neighbor::Timers


class Bgp::Neighbors::Neighbor::Timers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // Bgp::Neighbors::Neighbor::Timers::Config


class Bgp::Neighbors::Neighbor::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64
        ydk::YLeaf negotiated_hold_time; //type: decimal64

}; // Bgp::Neighbors::Neighbor::Timers::State


class Bgp::Neighbors::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::Transport::Config
        class State; //type: Bgp::Neighbors::Neighbor::Transport::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Transport::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::Transport::State> state;
        
}; // Bgp::Neighbors::Neighbor::Transport


class Bgp::Neighbors::Neighbor::Transport::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of union, string

}; // Bgp::Neighbors::Neighbor::Transport::Config


class Bgp::Neighbors::Neighbor::Transport::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of union, string
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf remote_port; //type: uint16

}; // Bgp::Neighbors::Neighbor::Transport::State


class Bgp::Neighbors::Neighbor::ErrorHandling : public ydk::Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::ErrorHandling::Config
        class State; //type: Bgp::Neighbors::Neighbor::ErrorHandling::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling::State> state;
        
}; // Bgp::Neighbors::Neighbor::ErrorHandling


class Bgp::Neighbors::Neighbor::ErrorHandling::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // Bgp::Neighbors::Neighbor::ErrorHandling::Config


class Bgp::Neighbors::Neighbor::ErrorHandling::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean
        ydk::YLeaf erroneous_update_messages; //type: uint32

}; // Bgp::Neighbors::Neighbor::ErrorHandling::State


class Bgp::Neighbors::Neighbor::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::GracefulRestart::Config
        class State; //type: Bgp::Neighbors::Neighbor::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart::State> state;
        
}; // Bgp::Neighbors::Neighbor::GracefulRestart


class Bgp::Neighbors::Neighbor::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // Bgp::Neighbors::Neighbor::GracefulRestart::Config


class Bgp::Neighbors::Neighbor::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean
        ydk::YLeaf peer_restart_time; //type: uint16
        ydk::YLeaf peer_restarting; //type: boolean
        ydk::YLeaf local_restarting; //type: boolean
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Bgp::Neighbors::Neighbor::GracefulRestart::State


class Bgp::Neighbors::Neighbor::LoggingOptions : public ydk::Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::LoggingOptions::Config
        class State; //type: Bgp::Neighbors::Neighbor::LoggingOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions::State> state;
        
}; // Bgp::Neighbors::Neighbor::LoggingOptions


class Bgp::Neighbors::Neighbor::LoggingOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // Bgp::Neighbors::Neighbor::LoggingOptions::Config


class Bgp::Neighbors::Neighbor::LoggingOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // Bgp::Neighbors::Neighbor::LoggingOptions::State


class Bgp::Neighbors::Neighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::EbgpMultihop::Config
        class State; //type: Bgp::Neighbors::Neighbor::EbgpMultihop::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop::State> state;
        
}; // Bgp::Neighbors::Neighbor::EbgpMultihop


class Bgp::Neighbors::Neighbor::EbgpMultihop::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // Bgp::Neighbors::Neighbor::EbgpMultihop::Config


class Bgp::Neighbors::Neighbor::EbgpMultihop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // Bgp::Neighbors::Neighbor::EbgpMultihop::State


class Bgp::Neighbors::Neighbor::RouteReflector : public ydk::Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::RouteReflector::Config
        class State; //type: Bgp::Neighbors::Neighbor::RouteReflector::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector::State> state;
        
}; // Bgp::Neighbors::Neighbor::RouteReflector


class Bgp::Neighbors::Neighbor::RouteReflector::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // Bgp::Neighbors::Neighbor::RouteReflector::Config


class Bgp::Neighbors::Neighbor::RouteReflector::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // Bgp::Neighbors::Neighbor::RouteReflector::State


class Bgp::Neighbors::Neighbor::AsPathOptions : public ydk::Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AsPathOptions::Config
        class State; //type: Bgp::Neighbors::Neighbor::AsPathOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions::State> state;
        
}; // Bgp::Neighbors::Neighbor::AsPathOptions


class Bgp::Neighbors::Neighbor::AsPathOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::AsPathOptions::Config


class Bgp::Neighbors::Neighbor::AsPathOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::AsPathOptions::State


class Bgp::Neighbors::Neighbor::AddPaths : public ydk::Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AddPaths::Config
        class State; //type: Bgp::Neighbors::Neighbor::AddPaths::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths::State> state;
        
}; // Bgp::Neighbors::Neighbor::AddPaths


class Bgp::Neighbors::Neighbor::AddPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // Bgp::Neighbors::Neighbor::AddPaths::Config


class Bgp::Neighbors::Neighbor::AddPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // Bgp::Neighbors::Neighbor::AddPaths::State


class Bgp::Neighbors::Neighbor::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Config
        class State; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp> ebgp;
        
}; // Bgp::Neighbors::Neighbor::UseMultiplePaths


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Config


class Bgp::Neighbors::Neighbor::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::State


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config


class Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State


class Bgp::Neighbors::Neighbor::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::ApplyPolicy::Config
        class State; //type: Bgp::Neighbors::Neighbor::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy::State> state;
        
}; // Bgp::Neighbors::Neighbor::ApplyPolicy


class Bgp::Neighbors::Neighbor::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Neighbors::Neighbor::ApplyPolicy::Config


class Bgp::Neighbors::Neighbor::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Neighbors::Neighbor::ApplyPolicy::State


class Bgp::Neighbors::Neighbor::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafi; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi> > afi_safi;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State
        class GracefulRestart; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart
        class ApplyPolicy; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3VpnIpv4Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn
        class UseMultiplePaths; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf active; //type: boolean
        class Prefixes; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes> prefixes;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf received; //type: uint32
        ydk::YLeaf sent; //type: uint32
        ydk::YLeaf installed; //type: uint32

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf received; //type: boolean
        ydk::YLeaf advertised; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public ydk::Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public ydk::Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public ydk::Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public ydk::Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls : public ydk::Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn : public ydk::Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean

}; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class Bgp::PeerGroups : public ydk::Entity
{
    public:
        PeerGroups();
        ~PeerGroups();

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

        class PeerGroup; //type: Bgp::PeerGroups::PeerGroup

        std::vector<std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup> > peer_group;
        
}; // Bgp::PeerGroups


class Bgp::PeerGroups::PeerGroup : public ydk::Entity
{
    public:
        PeerGroup();
        ~PeerGroup();

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

        //type: string (refers to openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Config::peer_group_name)
        ydk::YLeaf peer_group_name;
        class Config; //type: Bgp::PeerGroups::PeerGroup::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::State
        class Timers; //type: Bgp::PeerGroups::PeerGroup::Timers
        class Transport; //type: Bgp::PeerGroups::PeerGroup::Transport
        class ErrorHandling; //type: Bgp::PeerGroups::PeerGroup::ErrorHandling
        class GracefulRestart; //type: Bgp::PeerGroups::PeerGroup::GracefulRestart
        class LoggingOptions; //type: Bgp::PeerGroups::PeerGroup::LoggingOptions
        class EbgpMultihop; //type: Bgp::PeerGroups::PeerGroup::EbgpMultihop
        class RouteReflector; //type: Bgp::PeerGroups::PeerGroup::RouteReflector
        class AsPathOptions; //type: Bgp::PeerGroups::PeerGroup::AsPathOptions
        class AddPaths; //type: Bgp::PeerGroups::PeerGroup::AddPaths
        class UseMultiplePaths; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths
        class ApplyPolicy; //type: Bgp::PeerGroups::PeerGroup::ApplyPolicy
        class AfiSafis; //type: Bgp::PeerGroups::PeerGroup::AfiSafis

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers> timers;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport> transport;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling> error_handling;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions> logging_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop> ebgp_multihop;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector> route_reflector;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions> as_path_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths> add_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis> afi_safis;
        
}; // Bgp::PeerGroups::PeerGroup


class Bgp::PeerGroups::PeerGroup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string

}; // Bgp::PeerGroups::PeerGroup::Config


class Bgp::PeerGroups::PeerGroup::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_group_name; //type: string
        ydk::YLeaf peer_as; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf peer_type; //type: PeerType
        ydk::YLeaf auth_password; //type: string
        ydk::YLeaf remove_private_as; //type: REMOVEPRIVATEASOPTION
        ydk::YLeaf route_flap_damping; //type: boolean
        ydk::YLeaf send_community; //type: CommunityType
        ydk::YLeaf description; //type: string
        ydk::YLeaf total_paths; //type: uint32
        ydk::YLeaf total_prefixes; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::State


class Bgp::PeerGroups::PeerGroup::Timers : public ydk::Entity
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

        class Config; //type: Bgp::PeerGroups::PeerGroup::Timers::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::Timers::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::Timers


class Bgp::PeerGroups::PeerGroup::Timers::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::Timers::Config


class Bgp::PeerGroups::PeerGroup::Timers::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_retry; //type: decimal64
        ydk::YLeaf hold_time; //type: decimal64
        ydk::YLeaf keepalive_interval; //type: decimal64
        ydk::YLeaf minimum_advertisement_interval; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::Timers::State


class Bgp::PeerGroups::PeerGroup::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::Transport::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::Transport::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::Transport


class Bgp::PeerGroups::PeerGroup::Transport::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of union, string

}; // Bgp::PeerGroups::PeerGroup::Transport::Config


class Bgp::PeerGroups::PeerGroup::Transport::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_mss; //type: uint16
        ydk::YLeaf mtu_discovery; //type: boolean
        ydk::YLeaf passive_mode; //type: boolean
        ydk::YLeaf local_address; //type: one of union, string

}; // Bgp::PeerGroups::PeerGroup::Transport::State


class Bgp::PeerGroups::PeerGroup::ErrorHandling : public ydk::Entity
{
    public:
        ErrorHandling();
        ~ErrorHandling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::ErrorHandling::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::ErrorHandling::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::ErrorHandling


class Bgp::PeerGroups::PeerGroup::ErrorHandling::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::ErrorHandling::Config


class Bgp::PeerGroups::PeerGroup::ErrorHandling::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf treat_as_withdraw; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::ErrorHandling::State


class Bgp::PeerGroups::PeerGroup::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::GracefulRestart::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::GracefulRestart


class Bgp::PeerGroups::PeerGroup::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::GracefulRestart::Config


class Bgp::PeerGroups::PeerGroup::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf restart_time; //type: uint16
        ydk::YLeaf stale_routes_time; //type: decimal64
        ydk::YLeaf helper_only; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::GracefulRestart::State


class Bgp::PeerGroups::PeerGroup::LoggingOptions : public ydk::Entity
{
    public:
        LoggingOptions();
        ~LoggingOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::LoggingOptions::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::LoggingOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::LoggingOptions


class Bgp::PeerGroups::PeerGroup::LoggingOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::LoggingOptions::Config


class Bgp::PeerGroups::PeerGroup::LoggingOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_neighbor_state_changes; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::LoggingOptions::State


class Bgp::PeerGroups::PeerGroup::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::EbgpMultihop::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::EbgpMultihop


class Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config


class Bgp::PeerGroups::PeerGroup::EbgpMultihop::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf multihop_ttl; //type: uint8

}; // Bgp::PeerGroups::PeerGroup::EbgpMultihop::State


class Bgp::PeerGroups::PeerGroup::RouteReflector : public ydk::Entity
{
    public:
        RouteReflector();
        ~RouteReflector();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::RouteReflector::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::RouteReflector::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::RouteReflector


class Bgp::PeerGroups::PeerGroup::RouteReflector::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::RouteReflector::Config


class Bgp::PeerGroups::PeerGroup::RouteReflector::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf route_reflector_client; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::RouteReflector::State


class Bgp::PeerGroups::PeerGroup::AsPathOptions : public ydk::Entity
{
    public:
        AsPathOptions();
        ~AsPathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AsPathOptions::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AsPathOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AsPathOptions


class Bgp::PeerGroups::PeerGroup::AsPathOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AsPathOptions::Config


class Bgp::PeerGroups::PeerGroup::AsPathOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_own_as; //type: uint8
        ydk::YLeaf replace_peer_as; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AsPathOptions::State


class Bgp::PeerGroups::PeerGroup::AddPaths : public ydk::Entity
{
    public:
        AddPaths();
        ~AddPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AddPaths::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AddPaths::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AddPaths


class Bgp::PeerGroups::PeerGroup::AddPaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // Bgp::PeerGroups::PeerGroup::AddPaths::Config


class Bgp::PeerGroups::PeerGroup::AddPaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf send_max; //type: uint8
        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf eligible_prefix_policy;

}; // Bgp::PeerGroups::PeerGroup::AddPaths::State


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State
        class Ebgp; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp> ibgp;
        
}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config


class Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State


class Bgp::PeerGroups::PeerGroup::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::ApplyPolicy


class Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config


class Bgp::PeerGroups::PeerGroup::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::PeerGroups::PeerGroup::ApplyPolicy::State


class Bgp::PeerGroups::PeerGroup::AfiSafis : public ydk::Entity
{
    public:
        AfiSafis();
        ~AfiSafis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AfiSafi; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi

        std::vector<std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi> > afi_safi;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi : public ydk::Entity
{
    public:
        AfiSafi();
        ~AfiSafi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State
        class GracefulRestart; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart
        class RouteSelectionOptions; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions
        class UseMultiplePaths; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths
        class ApplyPolicy; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy
        class Ipv4Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast
        class Ipv6Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast
        class Ipv4LabeledUnicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast
        class Ipv6LabeledUnicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast
        class L3VpnIpv4Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast
        class L3VpnIpv6Unicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast
        class L3VpnIpv4Multicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast
        class L3VpnIpv6Multicast; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast
        class L2VpnVpls; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls
        class L2VpnEvpn; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast> ipv4_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast> ipv6_labeled_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi_safi_name; //type: AFISAFITYPE
        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions : public ydk::Entity
{
    public:
        RouteSelectionOptions();
        ~RouteSelectionOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always_compare_med; //type: boolean
        ydk::YLeaf ignore_as_path_length; //type: boolean
        ydk::YLeaf external_compare_router_id; //type: boolean
        ydk::YLeaf advertise_inactive_routes; //type: boolean
        ydk::YLeaf enable_aigp; //type: boolean
        ydk::YLeaf ignore_next_hop_igp_metric; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths : public ydk::Entity
{
    public:
        UseMultiplePaths();
        ~UseMultiplePaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State
        class Ebgp; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp
        class Ibgp; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State> state;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp : public ydk::Entity
{
    public:
        Ebgp();
        ~Ebgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_multiple_as; //type: boolean
        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp : public ydk::Entity
{
    public:
        Ibgp();
        ~Ibgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_paths; //type: uint32

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy : public ydk::Entity
{
    public:
        ApplyPolicy();
        ~ApplyPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_import_policy; //type: DefaultPolicyType
        ydk::YLeaf default_export_policy; //type: DefaultPolicyType
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList import_policy;
        //type: list of  leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeafList export_policy;

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast : public ydk::Entity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit
        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast : public ydk::Entity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit
        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_default_route; //type: boolean

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast : public ydk::Entity
{
    public:
        Ipv4LabeledUnicast();
        ~Ipv4LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast : public ydk::Entity
{
    public:
        Ipv6LabeledUnicast();
        ~Ipv6LabeledUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast : public ydk::Entity
{
    public:
        L3VpnIpv4Unicast();
        ~L3VpnIpv4Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast : public ydk::Entity
{
    public:
        L3VpnIpv6Unicast();
        ~L3VpnIpv6Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast : public ydk::Entity
{
    public:
        L3VpnIpv4Multicast();
        ~L3VpnIpv4Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast : public ydk::Entity
{
    public:
        L3VpnIpv6Multicast();
        ~L3VpnIpv6Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls : public ydk::Entity
{
    public:
        L2VpnVpls();
        ~L2VpnVpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn : public ydk::Entity
{
    public:
        L2VpnEvpn();
        ~L2VpnEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixLimit; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit : public ydk::Entity
{
    public:
        PrefixLimit();
        ~PrefixLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config
        class State; //type: Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
        std::shared_ptr<openconfig::openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;
        
}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


class Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_prefixes; //type: uint32
        ydk::YLeaf shutdown_threshold_pct; //type: uint8
        ydk::YLeaf restart_timer; //type: decimal64

}; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State

class Bgp::Neighbors::Neighbor::State::SessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IDLE;
        static const ydk::Enum::YLeaf CONNECT;
        static const ydk::Enum::YLeaf ACTIVE;
        static const ydk::Enum::YLeaf OPENSENT;
        static const ydk::Enum::YLeaf OPENCONFIRM;
        static const ydk::Enum::YLeaf ESTABLISHED;

};

class Bgp::Neighbors::Neighbor::GracefulRestart::State::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf HELPER_ONLY;
        static const ydk::Enum::YLeaf BILATERAL;
        static const ydk::Enum::YLeaf REMOTE_HELPER;

};


}
}

#endif /* _OPENCONFIG_BGP_ */

