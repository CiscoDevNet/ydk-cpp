#ifndef _OPENCONFIG_ROUTING_POLICY_
#define _OPENCONFIG_ROUTING_POLICY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace openconfig_routing_policy {

class RoutingPolicy : public Entity
{
    public:
        RoutingPolicy();
        ~RoutingPolicy();

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



        class DefinedSets; //type: RoutingPolicy::DefinedSets
        class PolicyDefinitions; //type: RoutingPolicy::PolicyDefinitions

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets> defined_sets;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions> policy_definitions;


}; // RoutingPolicy


class RoutingPolicy::DefinedSets : public Entity
{
    public:
        DefinedSets();
        ~DefinedSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixSets; //type: RoutingPolicy::DefinedSets::PrefixSets
        class NeighborSets; //type: RoutingPolicy::DefinedSets::NeighborSets
        class TagSets; //type: RoutingPolicy::DefinedSets::TagSets
        class BgpDefinedSets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets> bgp_defined_sets;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets> neighbor_sets;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets> prefix_sets;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets> tag_sets;


}; // RoutingPolicy::DefinedSets


class RoutingPolicy::DefinedSets::PrefixSets : public Entity
{
    public:
        PrefixSets();
        ~PrefixSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixSet; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet> > prefix_set;


}; // RoutingPolicy::DefinedSets::PrefixSets


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet : public Entity
{
    public:
        PrefixSet();
        ~PrefixSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_set_name; //type: string

        class Prefix; //type: RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix> > prefix;


}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet


class RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_prefix; //type: string
        YLeaf masklength_range; //type: string



}; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix


class RoutingPolicy::DefinedSets::NeighborSets : public Entity
{
    public:
        NeighborSets();
        ~NeighborSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborSet; //type: RoutingPolicy::DefinedSets::NeighborSets::NeighborSet

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet> > neighbor_set;


}; // RoutingPolicy::DefinedSets::NeighborSets


class RoutingPolicy::DefinedSets::NeighborSets::NeighborSet : public Entity
{
    public:
        NeighborSet();
        ~NeighborSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_set_name; //type: string

        class Neighbor; //type: RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor> > neighbor;


}; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet


class RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor


class RoutingPolicy::DefinedSets::TagSets : public Entity
{
    public:
        TagSets();
        ~TagSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TagSet; //type: RoutingPolicy::DefinedSets::TagSets::TagSet

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet> > tag_set;


}; // RoutingPolicy::DefinedSets::TagSets


class RoutingPolicy::DefinedSets::TagSets::TagSet : public Entity
{
    public:
        TagSet();
        ~TagSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tag_set_name; //type: string

        class Tag; //type: RoutingPolicy::DefinedSets::TagSets::TagSet::Tag

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::Tag> > tag;


}; // RoutingPolicy::DefinedSets::TagSets::TagSet


class RoutingPolicy::DefinedSets::TagSets::TagSet::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: one of uint32, string



}; // RoutingPolicy::DefinedSets::TagSets::TagSet::Tag


class RoutingPolicy::DefinedSets::BgpDefinedSets : public Entity
{
    public:
        BgpDefinedSets();
        ~BgpDefinedSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CommunitySets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets
        class ExtCommunitySets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets
        class AsPathSets; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets> as_path_sets;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets> community_sets;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets> ext_community_sets;


}; // RoutingPolicy::DefinedSets::BgpDefinedSets


class RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets : public Entity
{
    public:
        CommunitySets();
        ~CommunitySets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CommunitySet; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet> > community_set;


}; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets


class RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet : public Entity
{
    public:
        CommunitySet();
        ~CommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf community_set_name; //type: string
        YLeafList community_member; //type: list of  one of union, identityref, string



}; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet


class RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets : public Entity
{
    public:
        ExtCommunitySets();
        ~ExtCommunitySets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExtCommunitySet; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet> > ext_community_set;


}; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets


class RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet : public Entity
{
    public:
        ExtCommunitySet();
        ~ExtCommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ext_community_set_name; //type: string
        YLeafList ext_community_member; //type: list of  one of union, string



}; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet


class RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets : public Entity
{
    public:
        AsPathSets();
        ~AsPathSets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AsPathSet; //type: RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet> > as_path_set;


}; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets


class RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet : public Entity
{
    public:
        AsPathSet();
        ~AsPathSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as_path_set_name; //type: string
        YLeafList as_path_set_member; //type: list of  string



}; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet


class RoutingPolicy::PolicyDefinitions : public Entity
{
    public:
        PolicyDefinitions();
        ~PolicyDefinitions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PolicyDefinition; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition> > policy_definition;


}; // RoutingPolicy::PolicyDefinitions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition : public Entity
{
    public:
        PolicyDefinition();
        ~PolicyDefinition();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Statements; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements> statements;


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements : public Entity
{
    public:
        Statements();
        ~Statements();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Statement; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement

        std::vector<std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement> > statement;


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement : public Entity
{
    public:
        Statement();
        ~Statement();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class Conditions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions
        class Actions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions> actions;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions> conditions;


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions : public Entity
{
    public:
        Conditions();
        ~Conditions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
        YLeaf call_policy;
        YLeaf install_protocol_eq; //type: InstallProtocolTypeIdentity

        class MatchPrefixSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet
        class MatchNeighborSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet
        class MatchTagSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet
        class IgpConditions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions
        class BgpConditions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions> bgp_conditions;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions> igp_conditions;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet> match_neighbor_set; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet> match_prefix_set; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet> match_tag_set; // presence node


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet : public Entity
{
    public:
        MatchPrefixSet();
        ~MatchPrefixSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::prefix_set_name)
        YLeaf prefix_set;
        YLeaf match_set_options; //type: MatchSetOptionsRestrictedTypeEnum



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet : public Entity
{
    public:
        MatchNeighborSet();
        ~MatchNeighborSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::neighbor_set_name)
        YLeaf neighbor_set;
        YLeaf match_set_options; //type: MatchSetOptionsRestrictedTypeEnum



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet : public Entity
{
    public:
        MatchTagSet();
        ~MatchTagSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::tag_set_name)
        YLeaf tag_set;
        YLeaf match_set_options; //type: MatchSetOptionsRestrictedTypeEnum



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions : public Entity
{
    public:
        IgpConditions();
        ~IgpConditions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions : public Entity
{
    public:
        BgpConditions();
        ~BgpConditions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf med_eq; //type: uint32
        YLeaf origin_eq; //type: BgpOriginAttrTypeEnum
        YLeaf local_pref_eq; //type: uint32
        YLeaf route_type; //type: RouteTypeEnum
        YLeafList next_hop_in; //type: list of  string
        YLeafList afi_safi_in; //type: list of  AfiSafiTypeIdentity

        class MatchCommunitySet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet
        class MatchExtCommunitySet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet
        class MatchAsPathSet; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet
        class CommunityCount; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount
        class AsPathLength; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength> as_path_length; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount> community_count; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet> match_as_path_set; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet> match_community_set; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet> match_ext_community_set; // presence node
        class RouteTypeEnum;


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet : public Entity
{
    public:
        MatchCommunitySet();
        ~MatchCommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
        YLeaf community_set;
        YLeaf match_set_options; //type: MatchSetOptionsTypeEnum



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet : public Entity
{
    public:
        MatchExtCommunitySet();
        ~MatchExtCommunitySet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
        YLeaf ext_community_set;
        YLeaf match_set_options; //type: MatchSetOptionsTypeEnum



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet : public Entity
{
    public:
        MatchAsPathSet();
        ~MatchAsPathSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::as_path_set_name)
        YLeaf as_path_set;
        YLeaf match_set_options; //type: MatchSetOptionsTypeEnum



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount : public Entity
{
    public:
        CommunityCount();
        ~CommunityCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operator_; //type: AttributeComparisonIdentity
        YLeaf value_; //type: uint32



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength : public Entity
{
    public:
        AsPathLength();
        ~AsPathLength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf operator_; //type: AttributeComparisonIdentity
        YLeaf value_; //type: uint32



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions : public Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf accept_route; //type: empty
        YLeaf reject_route; //type: empty

        class IgpActions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions
        class BgpActions; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions> bgp_actions;
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions> igp_actions;


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions : public Entity
{
    public:
        IgpActions();
        ~IgpActions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_tag; //type: one of uint32, string



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions : public Entity
{
    public:
        BgpActions();
        ~BgpActions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf set_route_origin; //type: BgpOriginAttrTypeEnum
        YLeaf set_local_pref; //type: uint32
        YLeaf set_next_hop; //type: one of union, enumeration
        YLeaf set_med; //type: one of uint32, enumeration, string

        class SetAsPathPrepend; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend
        class SetCommunity; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity
        class SetExtCommunity; //type: RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity

        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend> set_as_path_prepend; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity> set_community; // presence node
        std::shared_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity> set_ext_community; // presence node


}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend : public Entity
{
    public:
        SetAsPathPrepend();
        ~SetAsPathPrepend();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf repeat_n; //type: uint8



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity : public Entity
{
    public:
        SetCommunity();
        ~SetCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
        YLeaf community_set_ref;
        YLeaf options; //type: BgpSetCommunityOptionTypeEnum
        YLeafList communities; //type: list of  one of union, identityref



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity


class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity : public Entity
{
    public:
        SetExtCommunity();
        ~SetExtCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
        YLeaf ext_community_set_ref;
        YLeaf options; //type: BgpSetCommunityOptionTypeEnum
        YLeafList communities; //type: list of  one of union, identityref



}; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity

class DefaultPolicyTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ACCEPT_ROUTE;
        static const Enum::YLeaf REJECT_ROUTE;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::RouteTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf INTERNAL;
        static const Enum::YLeaf EXTERNAL;

};


}
}

#endif /* _OPENCONFIG_ROUTING_POLICY_ */

