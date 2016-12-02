#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_CFG_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_cfg {

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
        Value editor; //type: string


    class RoutePolicies : public Entity
    {
        public:
            RoutePolicies();
            ~RoutePolicies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RoutePolicy : public Entity
        {
            public:
                RoutePolicy();
                ~RoutePolicy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value route_policy_name; //type: string
                Value rpl_route_policy; //type: string




        }; // RoutingPolicy::RoutePolicies::RoutePolicy


            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::RoutePolicies::RoutePolicy> > route_policy;


    }; // RoutingPolicy::RoutePolicies


    class Sets : public Entity
    {
        public:
            Sets();
            ~Sets();

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
                    Value set_name; //type: string
                    Value rpl_prefix_set; //type: string




            }; // RoutingPolicy::Sets::PrefixSets::PrefixSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrefixSets::PrefixSet> > prefix_set;


        }; // RoutingPolicy::Sets::PrefixSets


        class ExtendedCommunityOpaqueSets : public Entity
        {
            public:
                ExtendedCommunityOpaqueSets();
                ~ExtendedCommunityOpaqueSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ExtendedCommunityOpaqueSet : public Entity
            {
                public:
                    ExtendedCommunityOpaqueSet();
                    ~ExtendedCommunityOpaqueSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rpl_extended_community_opaque_set; //type: string




            }; // RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityOpaqueSets::ExtendedCommunityOpaqueSet> > extended_community_opaque_set;


        }; // RoutingPolicy::Sets::ExtendedCommunityOpaqueSets


        class OspfAreaSets : public Entity
        {
            public:
                OspfAreaSets();
                ~OspfAreaSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class OspfAreaSet : public Entity
            {
                public:
                    OspfAreaSet();
                    ~OspfAreaSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rplospf_area_set; //type: string




            }; // RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::OspfAreaSets::OspfAreaSet> > ospf_area_set;


        }; // RoutingPolicy::Sets::OspfAreaSets


        class ExtendedCommunityCostSets : public Entity
        {
            public:
                ExtendedCommunityCostSets();
                ~ExtendedCommunityCostSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ExtendedCommunityCostSet : public Entity
            {
                public:
                    ExtendedCommunityCostSet();
                    ~ExtendedCommunityCostSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rpl_extended_community_cost_set; //type: string




            }; // RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityCostSets::ExtendedCommunityCostSet> > extended_community_cost_set;


        }; // RoutingPolicy::Sets::ExtendedCommunityCostSets


        class ExtendedCommunitySooSets : public Entity
        {
            public:
                ExtendedCommunitySooSets();
                ~ExtendedCommunitySooSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ExtendedCommunitySooSet : public Entity
            {
                public:
                    ExtendedCommunitySooSet();
                    ~ExtendedCommunitySooSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rpl_extended_community_soo_set; //type: string




            }; // RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySooSets::ExtendedCommunitySooSet> > extended_community_soo_set;


        }; // RoutingPolicy::Sets::ExtendedCommunitySooSets


        class ExtendedCommunitySegNhSets : public Entity
        {
            public:
                ExtendedCommunitySegNhSets();
                ~ExtendedCommunitySegNhSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ExtendedCommunitySegNhSet : public Entity
            {
                public:
                    ExtendedCommunitySegNhSet();
                    ~ExtendedCommunitySegNhSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rpl_extended_community_seg_nh_set; //type: string




            }; // RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySegNhSets::ExtendedCommunitySegNhSet> > extended_community_seg_nh_set;


        }; // RoutingPolicy::Sets::ExtendedCommunitySegNhSets


        class RdSets : public Entity
        {
            public:
                RdSets();
                ~RdSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class RdSet : public Entity
            {
                public:
                    RdSet();
                    ~RdSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rplrd_set; //type: string




            }; // RoutingPolicy::Sets::RdSets::RdSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RdSets::RdSet> > rd_set;


        }; // RoutingPolicy::Sets::RdSets


        class PolicyGlobalSetTable : public Entity
        {
            public:
                PolicyGlobalSetTable();
                ~PolicyGlobalSetTable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value policy_global_set; //type: string




        }; // RoutingPolicy::Sets::PolicyGlobalSetTable


        class ExtendedCommunityBandwidthSets : public Entity
        {
            public:
                ExtendedCommunityBandwidthSets();
                ~ExtendedCommunityBandwidthSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ExtendedCommunityBandwidthSet : public Entity
            {
                public:
                    ExtendedCommunityBandwidthSet();
                    ~ExtendedCommunityBandwidthSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rpl_extended_community_bandwidth_set; //type: string




            }; // RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityBandwidthSets::ExtendedCommunityBandwidthSet> > extended_community_bandwidth_set;


        }; // RoutingPolicy::Sets::ExtendedCommunityBandwidthSets


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
                    Value set_name; //type: string
                    Value rpl_community_set; //type: string




            }; // RoutingPolicy::Sets::CommunitySets::CommunitySet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::CommunitySets::CommunitySet> > community_set;


        }; // RoutingPolicy::Sets::CommunitySets


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
                    Value set_name; //type: string
                    Value rplas_path_set; //type: string




            }; // RoutingPolicy::Sets::AsPathSets::AsPathSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AsPathSets::AsPathSet> > as_path_set;


        }; // RoutingPolicy::Sets::AsPathSets


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
                    Value set_name; //type: string
                    Value rpl_tag_set; //type: string




            }; // RoutingPolicy::Sets::TagSets::TagSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::TagSets::TagSet> > tag_set;


        }; // RoutingPolicy::Sets::TagSets


        class ExtendedCommunityRtSets : public Entity
        {
            public:
                ExtendedCommunityRtSets();
                ~ExtendedCommunityRtSets();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ExtendedCommunityRtSet : public Entity
            {
                public:
                    ExtendedCommunityRtSet();
                    ~ExtendedCommunityRtSet();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value set_name; //type: string
                    Value rpl_extended_community_rt_set; //type: string




            }; // RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityRtSets::ExtendedCommunityRtSet> > extended_community_rt_set;


        }; // RoutingPolicy::Sets::ExtendedCommunityRtSets


            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::AsPathSets> as_path_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::CommunitySets> community_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityBandwidthSets> extended_community_bandwidth_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityCostSets> extended_community_cost_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityOpaqueSets> extended_community_opaque_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunityRtSets> extended_community_rt_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySegNhSets> extended_community_seg_nh_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::ExtendedCommunitySooSets> extended_community_soo_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::OspfAreaSets> ospf_area_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PolicyGlobalSetTable> policy_global_set_table;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::PrefixSets> prefix_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::RdSets> rd_sets;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets::TagSets> tag_sets;


    }; // RoutingPolicy::Sets


    class Limits : public Entity
    {
        public:
            Limits();
            ~Limits();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value maximum_lines_of_policy; //type: int32
            Value maximum_number_of_policies; //type: int32




    }; // RoutingPolicy::Limits


        std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Limits> limits;
        std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::RoutePolicies> route_policies;
        std::unique_ptr<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy::Sets> sets;


}; // RoutingPolicy



}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_CFG_ */

