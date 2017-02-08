#ifndef _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_
#define _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_policy_repository_oper {

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


            YLeaf maximum_lines_of_policy; //type: uint32
            YLeaf current_lines_of_policy_limit; //type: uint32
            YLeaf current_lines_of_policy_used; //type: uint32
            YLeaf maximum_number_of_policies; //type: uint32
            YLeaf current_number_of_policies_limit; //type: uint32
            YLeaf current_number_of_policies_used; //type: uint32
            YLeaf compiled_policies_length; //type: uint32



    }; // RoutingPolicy::Limits


    class Policies : public Entity
    {
        public:
            Policies();
            ~Policies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



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


                    YLeaf route_policy_name; //type: string

                class PolicyUses : public Entity
                {
                    public:
                        PolicyUses();
                        ~PolicyUses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class DirectlyUsedPolicies : public Entity
                    {
                        public:
                            DirectlyUsedPolicies();
                            ~DirectlyUsedPolicies();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeafList object; //type: list of  string



                    }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies


                    class AllUsedSets : public Entity
                    {
                        public:
                            AllUsedSets();
                            ~AllUsedSets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



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


                                YLeaf set_domain; //type: string
                                YLeafList set_name; //type: list of  string



                        }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets::Sets> > sets;


                    }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets


                    class DirectlyUsedSets : public Entity
                    {
                        public:
                            DirectlyUsedSets();
                            ~DirectlyUsedSets();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



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


                                YLeaf set_domain; //type: string
                                YLeafList set_name; //type: list of  string



                        }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets::Sets> > sets;


                    }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets


                    class AllUsedPolicies : public Entity
                    {
                        public:
                            AllUsedPolicies();
                            ~AllUsedPolicies();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeafList object; //type: list of  string



                    }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedPolicies> all_used_policies;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::AllUsedSets> all_used_sets;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedPolicies> directly_used_policies;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses::DirectlyUsedSets> directly_used_sets;


                }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses


                class UsedBy : public Entity
                {
                    public:
                        UsedBy();
                        ~UsedBy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Reference : public Entity
                    {
                        public:
                            Reference();
                            ~Reference();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf route_policy_name; //type: string
                            YLeaf used_directly; //type: boolean
                            YLeaf status; //type: ObjectStatusEnum



                    }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference


                        std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy::Reference> > reference;


                }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy


                class Attached : public Entity
                {
                    public:
                        Attached();
                        ~Attached();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Binding : public Entity
                    {
                        public:
                            Binding();
                            ~Binding();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf protocol; //type: string
                            YLeaf vrf_name; //type: string
                            YLeaf proto_instance; //type: string
                            YLeaf af_name; //type: AddressFamilyEnum
                            YLeaf saf_name; //type: SubAddressFamilyEnum
                            YLeaf neighbor_address; //type: string
                            YLeaf neighbor_af_name; //type: AddressFamilyEnum
                            YLeaf group_name; //type: string
                            YLeaf direction; //type: AttachPointDirectionEnum
                            YLeaf group; //type: GroupEnum
                            YLeaf source_protocol; //type: string
                            YLeaf aggregate_network_address; //type: string
                            YLeaf interface_name; //type: string
                            YLeaf instance; //type: string
                            YLeaf area_id; //type: string
                            YLeaf propogate_from; //type: int32
                            YLeaf propogate_to; //type: int32
                            YLeaf route_policy_name; //type: string
                            YLeaf attached_policy; //type: string
                            YLeaf attach_point; //type: string



                    }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding


                        std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached::Binding> > binding;


                }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached


                    std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::Attached> attached;
                    std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::PolicyUses> policy_uses;
                    std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy::UsedBy> used_by;


            }; // RoutingPolicy::Policies::RoutePolicies::RoutePolicy


                std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies::RoutePolicy> > route_policy;


        }; // RoutingPolicy::Policies::RoutePolicies


        class Unused : public Entity
        {
            public:
                Unused();
                ~Unused();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeafList object; //type: list of  string



        }; // RoutingPolicy::Policies::Unused


        class Inactive : public Entity
        {
            public:
                Inactive();
                ~Inactive();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeafList object; //type: list of  string



        }; // RoutingPolicy::Policies::Inactive


        class Active : public Entity
        {
            public:
                Active();
                ~Active();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeafList object; //type: list of  string



        }; // RoutingPolicy::Policies::Active


            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Active> active;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Inactive> inactive;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::RoutePolicies> route_policies;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies::Unused> unused;


    }; // RoutingPolicy::Policies


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



        class OspfArea : public Entity
        {
            public:
                OspfArea();
                ~OspfArea();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::OspfArea::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::OspfArea::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::OspfArea::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::OspfArea::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::OspfArea::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea::Unused> unused;


        }; // RoutingPolicy::Sets::OspfArea


        class ExtendedCommunityOpaque : public Entity
        {
            public:
                ExtendedCommunityOpaque();
                ~ExtendedCommunityOpaque();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityOpaque::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque::Unused> unused;


        }; // RoutingPolicy::Sets::ExtendedCommunityOpaque


        class ExtendedCommunitySegNh : public Entity
        {
            public:
                ExtendedCommunitySegNh();
                ~ExtendedCommunitySegNh();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunitySegNh::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh::Unused> unused;


        }; // RoutingPolicy::Sets::ExtendedCommunitySegNh


        class ExtendedCommunitySoo : public Entity
        {
            public:
                ExtendedCommunitySoo();
                ~ExtendedCommunitySoo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunitySoo::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo::Unused> unused;


        }; // RoutingPolicy::Sets::ExtendedCommunitySoo


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



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::Tag::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::Tag::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::Tag::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Tag::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Tag::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Tag::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag::Unused> unused;


        }; // RoutingPolicy::Sets::Tag


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



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::Prefix::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::Prefix::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::Prefix::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Prefix::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Prefix::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Prefix::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix::Unused> unused;


        }; // RoutingPolicy::Sets::Prefix


        class Community : public Entity
        {
            public:
                Community();
                ~Community();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::Community::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::Community::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::Community::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::Community::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Community::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Community::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Community::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community::Unused> unused;


        }; // RoutingPolicy::Sets::Community


        class AsPath : public Entity
        {
            public:
                AsPath();
                ~AsPath();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::AsPath::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::AsPath::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::AsPath::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::AsPath::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::AsPath::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::AsPath::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath::Unused> unused;


        }; // RoutingPolicy::Sets::AsPath


        class ExtendedCommunityBandwidth : public Entity
        {
            public:
                ExtendedCommunityBandwidth();
                ~ExtendedCommunityBandwidth();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth::Unused> unused;


        }; // RoutingPolicy::Sets::ExtendedCommunityBandwidth


        class ExtendedCommunityRt : public Entity
        {
            public:
                ExtendedCommunityRt();
                ~ExtendedCommunityRt();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::ExtendedCommunityRt::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityRt::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityRt::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityRt::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt::Unused> unused;


        }; // RoutingPolicy::Sets::ExtendedCommunityRt


        class Rd : public Entity
        {
            public:
                Rd();
                ~Rd();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::Rd::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::Rd::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::Rd::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Rd::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Rd::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::Rd::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd::Unused> unused;


        }; // RoutingPolicy::Sets::Rd


        class ExtendedCommunityCost : public Entity
        {
            public:
                ExtendedCommunityCost();
                ~ExtendedCommunityCost();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Sets_ : public Entity
            {
                public:
                    Sets_();
                    ~Sets_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf set_name; //type: string

                    class UsedBy : public Entity
                    {
                        public:
                            UsedBy();
                            ~UsedBy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Reference : public Entity
                        {
                            public:
                                Reference();
                                ~Reference();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf route_policy_name; //type: string
                                YLeaf used_directly; //type: boolean
                                YLeaf status; //type: ObjectStatusEnum



                        }; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy::Reference> > reference;


                    }; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy


                    class Attached : public Entity
                    {
                        public:
                            Attached();
                            ~Attached();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Binding : public Entity
                        {
                            public:
                                Binding();
                                ~Binding();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf protocol; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf proto_instance; //type: string
                                YLeaf af_name; //type: AddressFamilyEnum
                                YLeaf saf_name; //type: SubAddressFamilyEnum
                                YLeaf neighbor_address; //type: string
                                YLeaf neighbor_af_name; //type: AddressFamilyEnum
                                YLeaf group_name; //type: string
                                YLeaf direction; //type: AttachPointDirectionEnum
                                YLeaf group; //type: GroupEnum
                                YLeaf source_protocol; //type: string
                                YLeaf aggregate_network_address; //type: string
                                YLeaf interface_name; //type: string
                                YLeaf instance; //type: string
                                YLeaf area_id; //type: string
                                YLeaf propogate_from; //type: int32
                                YLeaf propogate_to; //type: int32
                                YLeaf route_policy_name; //type: string
                                YLeaf attached_policy; //type: string
                                YLeaf attach_point; //type: string



                        }; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding


                            std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached::Binding> > binding;


                    }; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached


                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::Attached> attached;
                        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set::UsedBy> used_by;


                }; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set


                    std::vector<std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_::Set> > set;


            }; // RoutingPolicy::Sets::ExtendedCommunityCost::Sets_


            class Unused : public Entity
            {
                public:
                    Unused();
                    ~Unused();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityCost::Unused


            class Inactive : public Entity
            {
                public:
                    Inactive();
                    ~Inactive();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityCost::Inactive


            class Active : public Entity
            {
                public:
                    Active();
                    ~Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeafList object; //type: list of  string



            }; // RoutingPolicy::Sets::ExtendedCommunityCost::Active


                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Active> active;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Inactive> inactive;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Sets_> sets;
                std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost::Unused> unused;


        }; // RoutingPolicy::Sets::ExtendedCommunityCost


            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::AsPath> as_path;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Community> community;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityBandwidth> extended_community_bandwidth;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityCost> extended_community_cost;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityOpaque> extended_community_opaque;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunityRt> extended_community_rt;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySegNh> extended_community_seg_nh;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::ExtendedCommunitySoo> extended_community_soo;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::OspfArea> ospf_area;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Prefix> prefix;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Rd> rd;
            std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets::Tag> tag;


    }; // RoutingPolicy::Sets


        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Limits> limits;
        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Policies> policies;
        std::unique_ptr<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy::Sets> sets;


}; // RoutingPolicy


class GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf address_family_group;
        static const Enum::YLeaf session_group;
        static const Enum::YLeaf neighbor_group;
        static const Enum::YLeaf neighbor;
        static const Enum::YLeaf error_group;

};

class AttachPointDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class SubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf label;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf vpn;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf vpls;
        static const Enum::YLeaf rt_constraint;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf flow;
        static const Enum::YLeaf vpn_mcast;
        static const Enum::YLeaf saf_none;
        static const Enum::YLeaf saf_unknown;

};

class AddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf l2vpn;
        static const Enum::YLeaf ls;
        static const Enum::YLeaf af_none;
        static const Enum::YLeaf af_unknown;

};

class ObjectStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf unused;

};


}
}

#endif /* _CISCO_IOS_XR_POLICY_REPOSITORY_OPER_ */

