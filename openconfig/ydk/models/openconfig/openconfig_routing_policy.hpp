#ifndef _OPENCONFIG_ROUTING_POLICY_
#define _OPENCONFIG_ROUTING_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_routing_policy {

class RoutingPolicy : public ydk::Entity
{
    public:
        RoutingPolicy();
        ~RoutingPolicy();

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

        class DefinedSets; //type: RoutingPolicy::DefinedSets
        class PolicyDefinitions; //type: RoutingPolicy::PolicyDefinitions

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets> defined_sets;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions> policy_definitions;
        
}; // RoutingPolicy


class RoutingPolicy::DefinedSets : public ydk::Entity
{
    public:
        DefinedSets();
        ~DefinedSets();

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

        class PrefixSets; //type: RoutingPolicy::DefinedSets::PrefixSets
        class NeighborSets; //type: RoutingPolicy::DefinedSets::NeighborSets
        class TagSets; //type: RoutingPolicy::DefinedSets::TagSets
        class BgpDefinedSets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets> prefix_sets;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets> neighbor_sets;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets> tag_sets;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets> bgp_defined_sets;
        
}; // RoutingPolicy::DefinedSets


class RoutingPolicy::DefinedSets::PrefixSets : public ydk::Entity
{
    public:
        PrefixSets();
        ~PrefixSets();

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

        class PrefixSet; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet> > prefix_set;
        
}; // RoutingPolicy::DefinedSets::PrefixSets


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet : public ydk::Entity
{
    public:
        PrefixSet();
        ~PrefixSet();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config::prefix_set_name)
        ydk::YLeaf prefix_set_name;
        class Config; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config
        class State; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State
        class Prefixes; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes> prefixes;
        
}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config : public ydk::Entity
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

        ydk::YLeaf prefix_set_name; //type: string

}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Config


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State : public ydk::Entity
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

        ydk::YLeaf prefix_set_name; //type: string

}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::State


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes : public ydk::Entity
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

        class Prefix; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix> > prefix;
        
}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::ip_prefix)
        ydk::YLeaf ip_prefix;
        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config::masklength_range)
        ydk::YLeaf masklength_range;
        class Config; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config
        class State; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State> state;
        
}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config : public ydk::Entity
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

        ydk::YLeaf ip_prefix; //type: string
        ydk::YLeaf masklength_range; //type: string

}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::Config


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State : public ydk::Entity
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

        ydk::YLeaf ip_prefix; //type: string
        ydk::YLeaf masklength_range; //type: string

}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefixes::Prefix::State


class RoutingPolicy::DefinedSets::NeighborSets : public ydk::Entity
{
    public:
        NeighborSets();
        ~NeighborSets();

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

        class NeighborSet; //type: RoutingPolicy::DefinedSets::NeighborSets::NeighborSet

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet> > neighbor_set;
        
}; // RoutingPolicy::DefinedSets::NeighborSets


class RoutingPolicy::DefinedSets::NeighborSets::NeighborSet : public ydk::Entity
{
    public:
        NeighborSet();
        ~NeighborSet();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config::neighbor_set_name)
        ydk::YLeaf neighbor_set_name;
        class Config; //type: RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config
        class State; //type: RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State> state;
        
}; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet


class RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config : public ydk::Entity
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

        ydk::YLeaf neighbor_set_name; //type: string
        ydk::YLeafList address; //type: list of  string

}; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Config


class RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State : public ydk::Entity
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

        ydk::YLeaf neighbor_set_name; //type: string
        ydk::YLeafList address; //type: list of  string

}; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::State


class RoutingPolicy::DefinedSets::TagSets : public ydk::Entity
{
    public:
        TagSets();
        ~TagSets();

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

        class TagSet; //type: RoutingPolicy::DefinedSets::TagSets::TagSet

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet> > tag_set;
        
}; // RoutingPolicy::DefinedSets::TagSets


class RoutingPolicy::DefinedSets::TagSets::TagSet : public ydk::Entity
{
    public:
        TagSet();
        ~TagSet();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::Config::tag_set_name)
        ydk::YLeaf tag_set_name;
        class Config; //type: RoutingPolicy::DefinedSets::TagSets::TagSet::Config
        class State; //type: RoutingPolicy::DefinedSets::TagSets::TagSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::State> state;
        
}; // RoutingPolicy::DefinedSets::TagSets::TagSet


class RoutingPolicy::DefinedSets::TagSets::TagSet::Config : public ydk::Entity
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

        ydk::YLeaf tag_set_name; //type: string
        ydk::YLeafList tag_value; //type: list of  one of string, uint32

}; // RoutingPolicy::DefinedSets::TagSets::TagSet::Config


class RoutingPolicy::DefinedSets::TagSets::TagSet::State : public ydk::Entity
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

        ydk::YLeaf tag_set_name; //type: string
        ydk::YLeafList tag_value; //type: list of  one of string, uint32

}; // RoutingPolicy::DefinedSets::TagSets::TagSet::State


class RoutingPolicy::DefinedSets::BgpDefinedSets : public ydk::Entity
{
    public:
        BgpDefinedSets();
        ~BgpDefinedSets();

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

        class CommunitySets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets
        class ExtCommunitySets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets
        class AsPathSets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets> community_sets;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets> ext_community_sets;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets> as_path_sets;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets


class RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets : public ydk::Entity
{
    public:
        CommunitySets();
        ~CommunitySets();

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

        class CommunitySet; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet> > community_set;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets


class RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet : public ydk::Entity
{
    public:
        CommunitySet();
        ~CommunitySet();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config::community_set_name)
        ydk::YLeaf community_set_name;
        class Config; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config
        class State; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State> state;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet


class RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config : public ydk::Entity
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

        ydk::YLeaf community_set_name; //type: string
        ydk::YLeafList community_member; //type: list of  one of union, identityref, string

}; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::Config


class RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State : public ydk::Entity
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

        ydk::YLeaf community_set_name; //type: string
        ydk::YLeafList community_member; //type: list of  one of union, identityref, string

}; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::State


class RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets : public ydk::Entity
{
    public:
        ExtCommunitySets();
        ~ExtCommunitySets();

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

        class ExtCommunitySet; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet> > ext_community_set;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets


class RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet : public ydk::Entity
{
    public:
        ExtCommunitySet();
        ~ExtCommunitySet();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config::ext_community_set_name)
        ydk::YLeaf ext_community_set_name;
        class Config; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config
        class State; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State> state;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet


class RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config : public ydk::Entity
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

        ydk::YLeaf ext_community_set_name; //type: string
        ydk::YLeafList ext_community_member; //type: list of  one of union, string

}; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::Config


class RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State : public ydk::Entity
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

        ydk::YLeaf ext_community_set_name; //type: string
        ydk::YLeafList ext_community_member; //type: list of  one of union, string

}; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::State


class RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets : public ydk::Entity
{
    public:
        AsPathSets();
        ~AsPathSets();

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

        class AsPathSet; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet> > as_path_set;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets


class RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet : public ydk::Entity
{
    public:
        AsPathSet();
        ~AsPathSet();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config::as_path_set_name)
        ydk::YLeaf as_path_set_name;
        class Config; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config
        class State; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State> state;
        
}; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet


class RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config : public ydk::Entity
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

        ydk::YLeaf as_path_set_name; //type: string
        ydk::YLeafList as_path_set_member; //type: list of  string

}; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::Config


class RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State : public ydk::Entity
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

        ydk::YLeaf as_path_set_name; //type: string
        ydk::YLeafList as_path_set_member; //type: list of  string

}; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::State


class RoutingPolicy::PolicyDefinitions : public ydk::Entity
{
    public:
        PolicyDefinitions();
        ~PolicyDefinitions();

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

        class PolicyDefinition; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition> > policy_definition;
        
}; // RoutingPolicy::PolicyDefinitions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition : public ydk::Entity
{
    public:
        PolicyDefinition();
        ~PolicyDefinition();

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

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config::name)
        ydk::YLeaf name;
        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::State
        class Statements; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements> statements;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements : public ydk::Entity
{
    public:
        Statements();
        ~Statements();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Statement; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement

        std::vector<std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement> > statement;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement : public ydk::Entity
{
    public:
        Statement();
        ~Statement();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config::name)
        ydk::YLeaf name;
        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State
        class Conditions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions
        class Actions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions> conditions;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions> actions;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions : public ydk::Entity
{
    public:
        Conditions();
        ~Conditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State
        class MatchInterface; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface
        class MatchPrefixSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet
        class MatchNeighborSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet
        class MatchTagSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet
        class IgpConditions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions
        class BgpConditions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface> match_interface;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet> match_prefix_set;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet> match_neighbor_set;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet> match_tag_set;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions> igp_conditions;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions> bgp_conditions;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf call_policy;
        ydk::YLeaf install_protocol_eq; //type: INSTALLPROTOCOLTYPE

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        ydk::YLeaf call_policy;
        ydk::YLeaf install_protocol_eq; //type: INSTALLPROTOCOLTYPE

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface : public ydk::Entity
{
    public:
        MatchInterface();
        ~MatchInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchInterface::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet : public ydk::Entity
{
    public:
        MatchPrefixSet();
        ~MatchPrefixSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::prefix_set_name)
        ydk::YLeaf prefix_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsRestrictedType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::prefix_set_name)
        ydk::YLeaf prefix_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsRestrictedType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet : public ydk::Entity
{
    public:
        MatchNeighborSet();
        ~MatchNeighborSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::neighbor_set_name)
        ydk::YLeaf neighbor_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsRestrictedType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::neighbor_set_name)
        ydk::YLeaf neighbor_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsRestrictedType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet : public ydk::Entity
{
    public:
        MatchTagSet();
        ~MatchTagSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::tag_set_name)
        ydk::YLeaf tag_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsRestrictedType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::tag_set_name)
        ydk::YLeaf tag_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsRestrictedType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions : public ydk::Entity
{
    public:
        IgpConditions();
        ~IgpConditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions : public ydk::Entity
{
    public:
        BgpConditions();
        ~BgpConditions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State
        class CommunityCount; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount
        class AsPathLength; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength
        class MatchCommunitySet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet
        class MatchExtCommunitySet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet
        class MatchAsPathSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount> community_count;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength> as_path_length;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet> match_community_set;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet> match_ext_community_set;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet> match_as_path_set;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config : public ydk::Entity
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

        ydk::YLeaf med_eq; //type: uint32
        ydk::YLeaf origin_eq; //type: BgpOriginAttrType
        ydk::YLeaf local_pref_eq; //type: uint32
        ydk::YLeaf route_type; //type: RouteType
        ydk::YLeafList next_hop_in; //type: list of  string
        ydk::YLeafList afi_safi_in; //type: list of  AFISAFITYPE
        class RouteType;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State : public ydk::Entity
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

        ydk::YLeaf med_eq; //type: uint32
        ydk::YLeaf origin_eq; //type: BgpOriginAttrType
        ydk::YLeaf local_pref_eq; //type: uint32
        ydk::YLeaf route_type; //type: RouteType
        ydk::YLeafList next_hop_in; //type: list of  string
        ydk::YLeafList afi_safi_in; //type: list of  AFISAFITYPE
        class RouteType;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount : public ydk::Entity
{
    public:
        CommunityCount();
        ~CommunityCount();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config : public ydk::Entity
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

        ydk::YLeaf operator_; //type: ATTRIBUTECOMPARISON
        ydk::YLeaf value_; //type: uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State : public ydk::Entity
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

        ydk::YLeaf operator_; //type: ATTRIBUTECOMPARISON
        ydk::YLeaf value_; //type: uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength : public ydk::Entity
{
    public:
        AsPathLength();
        ~AsPathLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config : public ydk::Entity
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

        ydk::YLeaf operator_; //type: ATTRIBUTECOMPARISON
        ydk::YLeaf value_; //type: uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State : public ydk::Entity
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

        ydk::YLeaf operator_; //type: ATTRIBUTECOMPARISON
        ydk::YLeaf value_; //type: uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet : public ydk::Entity
{
    public:
        MatchCommunitySet();
        ~MatchCommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
        ydk::YLeaf community_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
        ydk::YLeaf community_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet : public ydk::Entity
{
    public:
        MatchExtCommunitySet();
        ~MatchExtCommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
        ydk::YLeaf ext_community_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
        ydk::YLeaf ext_community_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet : public ydk::Entity
{
    public:
        MatchAsPathSet();
        ~MatchAsPathSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::as_path_set_name)
        ydk::YLeaf as_path_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::as_path_set_name)
        ydk::YLeaf as_path_set;
        ydk::YLeaf match_set_options; //type: MatchSetOptionsType

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions : public ydk::Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State
        class IgpActions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions
        class BgpActions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions> igp_actions;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions> bgp_actions;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config : public ydk::Entity
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

        ydk::YLeaf accept_route; //type: empty
        ydk::YLeaf reject_route; //type: empty

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State : public ydk::Entity
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

        ydk::YLeaf accept_route; //type: empty
        ydk::YLeaf reject_route; //type: empty

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions : public ydk::Entity
{
    public:
        IgpActions();
        ~IgpActions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config : public ydk::Entity
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

        ydk::YLeaf set_tag; //type: one of string, uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State : public ydk::Entity
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

        ydk::YLeaf set_tag; //type: one of string, uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions : public ydk::Entity
{
    public:
        BgpActions();
        ~BgpActions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State
        class SetAsPathPrepend; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend
        class SetCommunity; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity
        class SetExtCommunity; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend> set_as_path_prepend;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity> set_community;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity> set_ext_community;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config : public ydk::Entity
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

        ydk::YLeaf set_route_origin; //type: BgpOriginAttrType
        ydk::YLeaf set_local_pref; //type: uint32
        ydk::YLeaf set_next_hop; //type: one of union, enumeration
        ydk::YLeaf set_med; //type: one of enumeration, string, uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State : public ydk::Entity
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

        ydk::YLeaf set_route_origin; //type: BgpOriginAttrType
        ydk::YLeaf set_local_pref; //type: uint32
        ydk::YLeaf set_next_hop; //type: one of union, enumeration
        ydk::YLeaf set_med; //type: one of enumeration, string, uint32

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend : public ydk::Entity
{
    public:
        SetAsPathPrepend();
        ~SetAsPathPrepend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config : public ydk::Entity
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

        ydk::YLeaf repeat_n; //type: uint8

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State : public ydk::Entity
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

        ydk::YLeaf repeat_n; //type: uint8

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity : public ydk::Entity
{
    public:
        SetCommunity();
        ~SetCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State
        class Inline; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline
        class Reference; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline> inline_;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference> reference;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config : public ydk::Entity
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

        ydk::YLeaf method; //type: Method
        ydk::YLeaf options; //type: BgpSetCommunityOptionType
        class Method;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State : public ydk::Entity
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

        ydk::YLeaf method; //type: Method
        ydk::YLeaf options; //type: BgpSetCommunityOptionType
        class Method;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline : public ydk::Entity
{
    public:
        Inline();
        ~Inline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::Config : public ydk::Entity
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

        ydk::YLeafList communities; //type: list of  one of union, identityref

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::State : public ydk::Entity
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

        ydk::YLeafList communities; //type: list of  one of union, identityref

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Inline::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
        ydk::YLeaf community_set_ref;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
        ydk::YLeaf community_set_ref;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Reference::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity : public ydk::Entity
{
    public:
        SetExtCommunity();
        ~SetExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State
        class Inline; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline
        class Reference; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State> state;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline> inline_;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference> reference;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config : public ydk::Entity
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

        ydk::YLeaf method; //type: Method
        ydk::YLeaf options; //type: BgpSetCommunityOptionType
        class Method;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State : public ydk::Entity
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

        ydk::YLeaf method; //type: Method
        ydk::YLeaf options; //type: BgpSetCommunityOptionType
        class Method;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline : public ydk::Entity
{
    public:
        Inline();
        ~Inline();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::Config : public ydk::Entity
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

        ydk::YLeafList communities; //type: list of  one of union, identityref

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::State : public ydk::Entity
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

        ydk::YLeafList communities; //type: list of  one of union, identityref

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Inline::State


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference : public ydk::Entity
{
    public:
        Reference();
        ~Reference();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config
        class State; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State

        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config> config;
        std::shared_ptr<openconfig::openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State> state;
        
}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
        ydk::YLeaf ext_community_set_ref;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::Config


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
        ydk::YLeaf ext_community_set_ref;

}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Reference::State

class DefaultPolicyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ACCEPT_ROUTE;
        static const ydk::Enum::YLeaf REJECT_ROUTE;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::Config::RouteType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INTERNAL;
        static const ydk::Enum::YLeaf EXTERNAL;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::State::RouteType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INTERNAL;
        static const ydk::Enum::YLeaf EXTERNAL;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::Config::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INLINE;
        static const ydk::Enum::YLeaf REFERENCE;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity::State::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INLINE;
        static const ydk::Enum::YLeaf REFERENCE;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::Config::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INLINE;
        static const ydk::Enum::YLeaf REFERENCE;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity::State::Method : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INLINE;
        static const ydk::Enum::YLeaf REFERENCE;

};


}
}

#endif /* _OPENCONFIG_ROUTING_POLICY_ */

