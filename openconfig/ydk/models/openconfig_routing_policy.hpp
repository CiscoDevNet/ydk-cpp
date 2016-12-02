#ifndef _OPENCONFIG_ROUTING_POLICY_
#define _OPENCONFIG_ROUTING_POLICY_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "openconfig_bgp_policy.hpp"
#include "openconfig_bgp_types.hpp"
#include "openconfig_policy_types.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class DefinedSets : public Entity
    {
        public:
            DefinedSets();
            ~DefinedSets();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PrefixSets : public Entity
        {
            public:
                PrefixSets();
                ~PrefixSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class PrefixSet : public Entity
            {
                public:
                    PrefixSet();
                    ~PrefixSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value prefix_set_name; //type: string


                class Prefix : public Entity
                {
                    public:
                        Prefix();
                        ~Prefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ip_prefix; //type: string
                        Value masklength_range; //type: string




                }; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::Prefix> > prefix;


            }; // RoutingPolicy::DefinedSets::PrefixSets::PrefixSet


                std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet> > prefix_set;


        }; // RoutingPolicy::DefinedSets::PrefixSets


        class NeighborSets : public Entity
        {
            public:
                NeighborSets();
                ~NeighborSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class NeighborSet : public Entity
            {
                public:
                    NeighborSet();
                    ~NeighborSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value neighbor_set_name; //type: string


                class Neighbor : public Entity
                {
                    public:
                        Neighbor();
                        ~Neighbor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string




                }; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::Neighbor> > neighbor;


            }; // RoutingPolicy::DefinedSets::NeighborSets::NeighborSet


                std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet> > neighbor_set;


        }; // RoutingPolicy::DefinedSets::NeighborSets


        class TagSets : public Entity
        {
            public:
                TagSets();
                ~TagSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class TagSet : public Entity
            {
                public:
                    TagSet();
                    ~TagSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value tag_set_name; //type: string


                class Tag : public Entity
                {
                    public:
                        Tag();
                        ~Tag();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value value_; //type: one of uint32, string




                }; // RoutingPolicy::DefinedSets::TagSets::TagSet::Tag


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::Tag> > tag;


            }; // RoutingPolicy::DefinedSets::TagSets::TagSet


                std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet> > tag_set;


        }; // RoutingPolicy::DefinedSets::TagSets


        class BgpDefinedSets : public Entity
        {
            public:
                BgpDefinedSets();
                ~BgpDefinedSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class CommunitySets : public Entity
            {
                public:
                    CommunitySets();
                    ~CommunitySets();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CommunitySet : public Entity
                {
                    public:
                        CommunitySet();
                        ~CommunitySet();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value community_set_name; //type: string
                        ValueList community_member; //type: list of  one of union, identityref, string




                }; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet> > community_set;


            }; // RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets


            class ExtCommunitySets : public Entity
            {
                public:
                    ExtCommunitySets();
                    ~ExtCommunitySets();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ExtCommunitySet : public Entity
                {
                    public:
                        ExtCommunitySet();
                        ~ExtCommunitySet();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ext_community_set_name; //type: string
                        ValueList ext_community_member; //type: list of  one of union, string




                }; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet> > ext_community_set;


            }; // RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets


            class AsPathSets : public Entity
            {
                public:
                    AsPathSets();
                    ~AsPathSets();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AsPathSet : public Entity
                {
                    public:
                        AsPathSet();
                        ~AsPathSet();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value as_path_set_name; //type: string
                        ValueList as_path_set_member; //type: list of  string




                }; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet> > as_path_set;


            }; // RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets


                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets> as_path_sets;
                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets> community_sets;
                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets> ext_community_sets;


        }; // RoutingPolicy::DefinedSets::BgpDefinedSets


            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets> bgp_defined_sets;
            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets> neighbor_sets;
            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets> prefix_sets;
            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets> tag_sets;


    }; // RoutingPolicy::DefinedSets


    class PolicyDefinitions : public Entity
    {
        public:
            PolicyDefinitions();
            ~PolicyDefinitions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PolicyDefinition : public Entity
        {
            public:
                PolicyDefinition();
                ~PolicyDefinition();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class Statements : public Entity
            {
                public:
                    Statements();
                    ~Statements();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Statement : public Entity
                {
                    public:
                        Statement();
                        ~Statement();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string


                    class Conditions : public Entity
                    {
                        public:
                            Conditions();
                            ~Conditions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                            Value call_policy;
                            Value install_protocol_eq; //type: InstallProtocolTypeIdentity


                        class MatchPrefixSet : public Entity
                        {
                            public:
                                MatchPrefixSet();
                                ~MatchPrefixSet();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::PrefixSets::PrefixSet::prefix_set_name)
                                Value prefix_set;
                                Value match_set_options; //type: MatchSetOptionsRestrictedTypeEnum


                                class MatchSetOptionsRestrictedTypeEnum;


                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet


                        class MatchNeighborSet : public Entity
                        {
                            public:
                                MatchNeighborSet();
                                ~MatchNeighborSet();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::NeighborSets::NeighborSet::neighbor_set_name)
                                Value neighbor_set;
                                Value match_set_options; //type: MatchSetOptionsRestrictedTypeEnum


                                class MatchSetOptionsRestrictedTypeEnum;


                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet


                        class MatchTagSet : public Entity
                        {
                            public:
                                MatchTagSet();
                                ~MatchTagSet();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::TagSets::TagSet::tag_set_name)
                                Value tag_set;
                                Value match_set_options; //type: MatchSetOptionsRestrictedTypeEnum


                                class MatchSetOptionsRestrictedTypeEnum;


                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet


                        class IgpConditions : public Entity
                        {
                            public:
                                IgpConditions();
                                ~IgpConditions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;




                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions


                        class BgpConditions : public Entity
                        {
                            public:
                                BgpConditions();
                                ~BgpConditions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value med_eq; //type: uint32
                                Value origin_eq; //type: BgpOriginAttrTypeEnum
                                Value local_pref_eq; //type: uint32
                                Value route_type; //type: RouteTypeEnum
                                ValueList next_hop_in; //type: list of  string
                                ValueList afi_safi_in; //type: list of  AfiSafiTypeIdentity


                            class MatchCommunitySet : public Entity
                            {
                                public:
                                    MatchCommunitySet();
                                    ~MatchCommunitySet();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
                                    Value community_set;
                                    Value match_set_options; //type: MatchSetOptionsTypeEnum


                                    class MatchSetOptionsTypeEnum;


                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet


                            class MatchExtCommunitySet : public Entity
                            {
                                public:
                                    MatchExtCommunitySet();
                                    ~MatchExtCommunitySet();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
                                    Value ext_community_set;
                                    Value match_set_options; //type: MatchSetOptionsTypeEnum


                                    class MatchSetOptionsTypeEnum;


                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet


                            class MatchAsPathSet : public Entity
                            {
                                public:
                                    MatchAsPathSet();
                                    ~MatchAsPathSet();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::AsPathSets::AsPathSet::as_path_set_name)
                                    Value as_path_set;
                                    Value match_set_options; //type: MatchSetOptionsTypeEnum


                                    class MatchSetOptionsTypeEnum;


                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet


                            class CommunityCount : public Entity
                            {
                                public:
                                    CommunityCount();
                                    ~CommunityCount();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value operator_; //type: AttributeComparisonIdentity
                                    Value value_; //type: uint32




                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount


                            class AsPathLength : public Entity
                            {
                                public:
                                    AsPathLength();
                                    ~AsPathLength();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value operator_; //type: AttributeComparisonIdentity
                                    Value value_; //type: uint32




                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength


                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::AsPathLength> as_path_length; // presence node
                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::CommunityCount> community_count; // presence node
                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchAsPathSet> match_as_path_set; // presence node
                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchCommunitySet> match_community_set; // presence node
                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::MatchExtCommunitySet> match_ext_community_set; // presence node
                                class BgpOriginAttrTypeEnum;
                                class RouteTypeEnum;


                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions


                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions> bgp_conditions;
                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::IgpConditions> igp_conditions;
                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchNeighborSet> match_neighbor_set; // presence node
                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchPrefixSet> match_prefix_set; // presence node
                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::MatchTagSet> match_tag_set; // presence node


                    }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions


                    class Actions : public Entity
                    {
                        public:
                            Actions();
                            ~Actions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value accept_route; //type: empty
                            Value reject_route; //type: empty


                        class IgpActions : public Entity
                        {
                            public:
                                IgpActions();
                                ~IgpActions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value set_tag; //type: one of uint32, string




                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions


                        class BgpActions : public Entity
                        {
                            public:
                                BgpActions();
                                ~BgpActions();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value set_route_origin; //type: BgpOriginAttrTypeEnum
                                Value set_local_pref; //type: uint32
                                Value set_next_hop; //type: one of union, enumeration
                                Value set_med; //type: one of uint32, enumeration, string


                            class SetAsPathPrepend : public Entity
                            {
                                public:
                                    SetAsPathPrepend();
                                    ~SetAsPathPrepend();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value repeat_n; //type: uint8




                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend


                            class SetCommunity : public Entity
                            {
                                public:
                                    SetCommunity();
                                    ~SetCommunity();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::CommunitySets::CommunitySet::community_set_name)
                                    Value community_set_ref;
                                    Value options; //type: BgpSetCommunityOptionTypeEnum
                                    ValueList communities; //type: list of  one of union, identityref


                                    class BgpSetCommunityOptionTypeEnum;


                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity


                            class SetExtCommunity : public Entity
                            {
                                public:
                                    SetExtCommunity();
                                    ~SetExtCommunity();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    //type: string (refers to openconfig_routing_policy::RoutingPolicy::DefinedSets::BgpDefinedSets::ExtCommunitySets::ExtCommunitySet::ext_community_set_name)
                                    Value ext_community_set_ref;
                                    Value options; //type: BgpSetCommunityOptionTypeEnum
                                    ValueList communities; //type: list of  one of union, identityref


                                    class BgpSetCommunityOptionTypeEnum;


                            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity


                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetAsPathPrepend> set_as_path_prepend; // presence node
                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetCommunity> set_community; // presence node
                                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions::SetExtCommunity> set_ext_community; // presence node
                                class BgpSetMedTypeEnum;
                                class BgpNextHopTypeEnum;
                                class BgpOriginAttrTypeEnum;


                        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions


                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::BgpActions> bgp_actions;
                            std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions::IgpActions> igp_actions;


                    }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions


                        std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Actions> actions;
                        std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions> conditions;


                }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement


                    std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement> > statement;


            }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements


                std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements> statements;


        }; // RoutingPolicy::PolicyDefinitions::PolicyDefinition


            std::vector<std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition> > policy_definition;


    }; // RoutingPolicy::PolicyDefinitions


        std::unique_ptr<openconfig_routing_policy::RoutingPolicy::DefinedSets> defined_sets;
        std::unique_ptr<openconfig_routing_policy::RoutingPolicy::PolicyDefinitions> policy_definitions;


}; // RoutingPolicy


class DefaultPolicyTypeEnum : public Enum
{
    public:
        static const Enum::Value ACCEPT_ROUTE;
        static const Enum::Value REJECT_ROUTE;

};

class RoutingPolicy::PolicyDefinitions::PolicyDefinition::Statements::Statement::Conditions::BgpConditions::RouteTypeEnum : public Enum
{
    public:
        static const Enum::Value INTERNAL;
        static const Enum::Value EXTERNAL;

};


}
}

#endif /* _OPENCONFIG_ROUTING_POLICY_ */

