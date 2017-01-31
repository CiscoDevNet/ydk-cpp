#ifndef _OPENCONFIG_BGP_
#define _OPENCONFIG_BGP_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace openconfig_bgp {

class Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Global : public Entity
    {
        public:
            Global();
            ~Global();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Config : public Entity
        {
            public:
                Config();
                ~Config();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf as; //type: uint32
                YLeaf router_id; //type: string



        }; // Bgp::Global::Config


        class State : public Entity
        {
            public:
                State();
                ~State();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf as; //type: uint32
                YLeaf router_id; //type: string
                YLeaf total_paths; //type: uint32
                YLeaf total_prefixes; //type: uint32



        }; // Bgp::Global::State


        class RouteSelectionOptions : public Entity
        {
            public:
                RouteSelectionOptions();
                ~RouteSelectionOptions();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf always_compare_med; //type: boolean
                    YLeaf ignore_as_path_length; //type: boolean
                    YLeaf external_compare_router_id; //type: boolean
                    YLeaf advertise_inactive_routes; //type: boolean
                    YLeaf enable_aigp; //type: boolean
                    YLeaf ignore_next_hop_igp_metric; //type: boolean



            }; // Bgp::Global::RouteSelectionOptions::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf always_compare_med; //type: boolean
                    YLeaf ignore_as_path_length; //type: boolean
                    YLeaf external_compare_router_id; //type: boolean
                    YLeaf advertise_inactive_routes; //type: boolean
                    YLeaf enable_aigp; //type: boolean
                    YLeaf ignore_next_hop_igp_metric; //type: boolean



            }; // Bgp::Global::RouteSelectionOptions::State


                std::unique_ptr<openconfig_bgp::Bgp::Global::RouteSelectionOptions::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Global::RouteSelectionOptions::State> state;


        }; // Bgp::Global::RouteSelectionOptions


        class DefaultRouteDistance : public Entity
        {
            public:
                DefaultRouteDistance();
                ~DefaultRouteDistance();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf external_route_distance; //type: uint8
                    YLeaf internal_route_distance; //type: uint8



            }; // Bgp::Global::DefaultRouteDistance::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf external_route_distance; //type: uint8
                    YLeaf internal_route_distance; //type: uint8



            }; // Bgp::Global::DefaultRouteDistance::State


                std::unique_ptr<openconfig_bgp::Bgp::Global::DefaultRouteDistance::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Global::DefaultRouteDistance::State> state;


        }; // Bgp::Global::DefaultRouteDistance


        class Confederation : public Entity
        {
            public:
                Confederation();
                ~Confederation();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: boolean
                    YLeaf identifier; //type: uint32
                    YLeafList member_as; //type: list of  uint32



            }; // Bgp::Global::Confederation::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: boolean
                    YLeaf identifier; //type: uint32
                    YLeafList member_as; //type: list of  uint32



            }; // Bgp::Global::Confederation::State


                std::unique_ptr<openconfig_bgp::Bgp::Global::Confederation::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Global::Confederation::State> state;


        }; // Bgp::Global::Confederation


        class UseMultiplePaths : public Entity
        {
            public:
                UseMultiplePaths();
                ~UseMultiplePaths();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: boolean



            }; // Bgp::Global::UseMultiplePaths::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: boolean



            }; // Bgp::Global::UseMultiplePaths::State


            class Ebgp : public Entity
            {
                public:
                    Ebgp();
                    ~Ebgp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf allow_multiple_as; //type: boolean
                        YLeaf maximum_paths; //type: uint32



                }; // Bgp::Global::UseMultiplePaths::Ebgp::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf allow_multiple_as; //type: boolean
                        YLeaf maximum_paths; //type: uint32



                }; // Bgp::Global::UseMultiplePaths::Ebgp::State


                    std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp::State> state;


            }; // Bgp::Global::UseMultiplePaths::Ebgp


            class Ibgp : public Entity
            {
                public:
                    Ibgp();
                    ~Ibgp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf maximum_paths; //type: uint32



                }; // Bgp::Global::UseMultiplePaths::Ibgp::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf maximum_paths; //type: uint32



                }; // Bgp::Global::UseMultiplePaths::Ibgp::State


                    std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp::State> state;


            }; // Bgp::Global::UseMultiplePaths::Ibgp


                std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ebgp> ebgp;
                std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::Ibgp> ibgp;
                std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths::State> state;


        }; // Bgp::Global::UseMultiplePaths


        class GracefulRestart : public Entity
        {
            public:
                GracefulRestart();
                ~GracefulRestart();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: boolean
                    YLeaf restart_time; //type: uint16
                    YLeaf stale_routes_time; //type: decimal64
                    YLeaf helper_only; //type: boolean



            }; // Bgp::Global::GracefulRestart::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf enabled; //type: boolean
                    YLeaf restart_time; //type: uint16
                    YLeaf stale_routes_time; //type: decimal64
                    YLeaf helper_only; //type: boolean



            }; // Bgp::Global::GracefulRestart::State


                std::unique_ptr<openconfig_bgp::Bgp::Global::GracefulRestart::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Global::GracefulRestart::State> state;


        }; // Bgp::Global::GracefulRestart


        class AfiSafis : public Entity
        {
            public:
                AfiSafis();
                ~AfiSafis();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AfiSafi : public Entity
            {
                public:
                    AfiSafi();
                    ~AfiSafi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf afi_safi_name; //type: AfiSafiTypeIdentity

                class GracefulRestart : public Entity
                {
                    public:
                        GracefulRestart();
                        ~GracefulRestart();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enabled; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enabled; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State> state;


                }; // Bgp::Global::AfiSafis::AfiSafi::GracefulRestart


                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
                        YLeaf enabled; //type: boolean



                }; // Bgp::Global::AfiSafis::AfiSafi::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
                        YLeaf enabled; //type: boolean
                        YLeaf total_paths; //type: uint32
                        YLeaf total_prefixes; //type: uint32



                }; // Bgp::Global::AfiSafis::AfiSafi::State


                class ApplyPolicy : public Entity
                {
                    public:
                        ApplyPolicy();
                        ~ApplyPolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                            YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                            //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                            YLeafList import_policy;
                            //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                            YLeafList export_policy;



                    }; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                            YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                            //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                            YLeafList import_policy;
                            //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                            YLeafList export_policy;



                    }; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State> state;


                }; // Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy


                class Ipv4Unicast : public Entity
                {
                    public:
                        Ipv4Unicast();
                        ~Ipv4Unicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf send_default_route; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf send_default_route; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State> state;


                }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast


                class Ipv6Unicast : public Entity
                {
                    public:
                        Ipv6Unicast();
                        ~Ipv6Unicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf send_default_route; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf send_default_route; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State> state;


                }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast


                class Ipv4LabelledUnicast : public Entity
                {
                    public:
                        Ipv4LabelledUnicast();
                        ~Ipv4LabelledUnicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast


                class Ipv6LabelledUnicast : public Entity
                {
                    public:
                        Ipv6LabelledUnicast();
                        ~Ipv6LabelledUnicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast


                class L3VpnIpv4Unicast : public Entity
                {
                    public:
                        L3VpnIpv4Unicast();
                        ~L3VpnIpv4Unicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast


                class L3VpnIpv6Unicast : public Entity
                {
                    public:
                        L3VpnIpv6Unicast();
                        ~L3VpnIpv6Unicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast


                class L3VpnIpv4Multicast : public Entity
                {
                    public:
                        L3VpnIpv4Multicast();
                        ~L3VpnIpv4Multicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast


                class L3VpnIpv6Multicast : public Entity
                {
                    public:
                        L3VpnIpv6Multicast();
                        ~L3VpnIpv6Multicast();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast


                class L2VpnVpls : public Entity
                {
                    public:
                        L2VpnVpls();
                        ~L2VpnVpls();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls


                class L2VpnEvpn : public Entity
                {
                    public:
                        L2VpnEvpn();
                        ~L2VpnEvpn();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixLimit : public Entity
                    {
                        public:
                            PrefixLimit();
                            ~PrefixLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf max_prefixes; //type: uint32
                                YLeaf shutdown_threshold_pct; //type: uint8
                                YLeaf restart_timer; //type: decimal64



                        }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;


                }; // Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn


                class RouteSelectionOptions : public Entity
                {
                    public:
                        RouteSelectionOptions();
                        ~RouteSelectionOptions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf always_compare_med; //type: boolean
                            YLeaf ignore_as_path_length; //type: boolean
                            YLeaf external_compare_router_id; //type: boolean
                            YLeaf advertise_inactive_routes; //type: boolean
                            YLeaf enable_aigp; //type: boolean
                            YLeaf ignore_next_hop_igp_metric; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf always_compare_med; //type: boolean
                            YLeaf ignore_as_path_length; //type: boolean
                            YLeaf external_compare_router_id; //type: boolean
                            YLeaf advertise_inactive_routes; //type: boolean
                            YLeaf enable_aigp; //type: boolean
                            YLeaf ignore_next_hop_igp_metric; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;


                }; // Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions


                class UseMultiplePaths : public Entity
                {
                    public:
                        UseMultiplePaths();
                        ~UseMultiplePaths();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enabled; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enabled; //type: boolean



                    }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State


                    class Ebgp : public Entity
                    {
                        public:
                            Ebgp();
                            ~Ebgp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf allow_multiple_as; //type: boolean
                                YLeaf maximum_paths; //type: uint32



                        }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf allow_multiple_as; //type: boolean
                                YLeaf maximum_paths; //type: uint32



                        }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


                    class Ibgp : public Entity
                    {
                        public:
                            Ibgp();
                            ~Ibgp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf maximum_paths; //type: uint32



                        }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf maximum_paths; //type: uint32



                        }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;


                    }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
                        std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State> state;


                }; // Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths


                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::State> state;
                    std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;


            }; // Bgp::Global::AfiSafis::AfiSafi


                std::vector<std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis::AfiSafi> > afi_safi;


        }; // Bgp::Global::AfiSafis


        class ApplyPolicy : public Entity
        {
            public:
                ApplyPolicy();
                ~ApplyPolicy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                    YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                    //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                    YLeafList import_policy;
                    //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                    YLeafList export_policy;



            }; // Bgp::Global::ApplyPolicy::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                    YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                    //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                    YLeafList import_policy;
                    //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                    YLeafList export_policy;



            }; // Bgp::Global::ApplyPolicy::State


                std::unique_ptr<openconfig_bgp::Bgp::Global::ApplyPolicy::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Global::ApplyPolicy::State> state;


        }; // Bgp::Global::ApplyPolicy


            std::unique_ptr<openconfig_bgp::Bgp::Global::AfiSafis> afi_safis;
            std::unique_ptr<openconfig_bgp::Bgp::Global::ApplyPolicy> apply_policy;
            std::unique_ptr<openconfig_bgp::Bgp::Global::Confederation> confederation;
            std::unique_ptr<openconfig_bgp::Bgp::Global::Config> config;
            std::unique_ptr<openconfig_bgp::Bgp::Global::DefaultRouteDistance> default_route_distance;
            std::unique_ptr<openconfig_bgp::Bgp::Global::GracefulRestart> graceful_restart;
            std::unique_ptr<openconfig_bgp::Bgp::Global::RouteSelectionOptions> route_selection_options;
            std::unique_ptr<openconfig_bgp::Bgp::Global::State> state;
            std::unique_ptr<openconfig_bgp::Bgp::Global::UseMultiplePaths> use_multiple_paths;


    }; // Bgp::Global


    class Neighbors : public Entity
    {
        public:
            Neighbors();
            ~Neighbors();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



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


                //type: union (refers to openconfig_bgp::Bgp::Neighbors::Neighbor::Config::neighbor_address)
                YLeaf neighbor_address;

            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


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


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


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

                class Messages : public Entity
                {
                    public:
                        Messages();
                        ~Messages();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Sent : public Entity
                    {
                        public:
                            Sent();
                            ~Sent();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf update; //type: uint64
                            YLeaf notification; //type: uint64



                    }; // Bgp::Neighbors::Neighbor::State::Messages::Sent


                    class Received : public Entity
                    {
                        public:
                            Received();
                            ~Received();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf update; //type: uint64
                            YLeaf notification; //type: uint64



                    }; // Bgp::Neighbors::Neighbor::State::Messages::Received


                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages::Received> received;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages::Sent> sent;


                }; // Bgp::Neighbors::Neighbor::State::Messages


                class Queues : public Entity
                {
                    public:
                        Queues();
                        ~Queues();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input; //type: uint32
                        YLeaf output; //type: uint32



                }; // Bgp::Neighbors::Neighbor::State::Queues


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Messages> messages;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State::Queues> queues;
                    class SessionStateEnum;


            }; // Bgp::Neighbors::Neighbor::State


            class Timers : public Entity
            {
                public:
                    Timers();
                    ~Timers();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf connect_retry; //type: decimal64
                        YLeaf hold_time; //type: decimal64
                        YLeaf keepalive_interval; //type: decimal64
                        YLeaf minimum_advertisement_interval; //type: decimal64



                }; // Bgp::Neighbors::Neighbor::Timers::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf connect_retry; //type: decimal64
                        YLeaf hold_time; //type: decimal64
                        YLeaf keepalive_interval; //type: decimal64
                        YLeaf minimum_advertisement_interval; //type: decimal64
                        YLeaf uptime; //type: uint32
                        YLeaf negotiated_hold_time; //type: decimal64



                }; // Bgp::Neighbors::Neighbor::Timers::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Timers::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Timers::State> state;


            }; // Bgp::Neighbors::Neighbor::Timers


            class Transport : public Entity
            {
                public:
                    Transport();
                    ~Transport();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tcp_mss; //type: uint16
                        YLeaf mtu_discovery; //type: boolean
                        YLeaf passive_mode; //type: boolean
                        YLeaf local_address; //type: one of union, string



                }; // Bgp::Neighbors::Neighbor::Transport::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tcp_mss; //type: uint16
                        YLeaf mtu_discovery; //type: boolean
                        YLeaf passive_mode; //type: boolean
                        YLeaf local_address; //type: one of union, string
                        YLeaf local_port; //type: uint16
                        YLeaf remote_address; //type: string
                        YLeaf remote_port; //type: uint16



                }; // Bgp::Neighbors::Neighbor::Transport::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Transport::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Transport::State> state;


            }; // Bgp::Neighbors::Neighbor::Transport


            class ErrorHandling : public Entity
            {
                public:
                    ErrorHandling();
                    ~ErrorHandling();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf treat_as_withdraw; //type: boolean



                }; // Bgp::Neighbors::Neighbor::ErrorHandling::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf treat_as_withdraw; //type: boolean
                        YLeaf erroneous_update_messages; //type: uint32



                }; // Bgp::Neighbors::Neighbor::ErrorHandling::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling::State> state;


            }; // Bgp::Neighbors::Neighbor::ErrorHandling


            class LoggingOptions : public Entity
            {
                public:
                    LoggingOptions();
                    ~LoggingOptions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf log_neighbor_state_changes; //type: boolean



                }; // Bgp::Neighbors::Neighbor::LoggingOptions::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf log_neighbor_state_changes; //type: boolean



                }; // Bgp::Neighbors::Neighbor::LoggingOptions::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions::State> state;


            }; // Bgp::Neighbors::Neighbor::LoggingOptions


            class EbgpMultihop : public Entity
            {
                public:
                    EbgpMultihop();
                    ~EbgpMultihop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf multihop_ttl; //type: uint8



                }; // Bgp::Neighbors::Neighbor::EbgpMultihop::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf multihop_ttl; //type: uint8



                }; // Bgp::Neighbors::Neighbor::EbgpMultihop::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop::State> state;


            }; // Bgp::Neighbors::Neighbor::EbgpMultihop


            class RouteReflector : public Entity
            {
                public:
                    RouteReflector();
                    ~RouteReflector();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf route_reflector_cluster_id; //type: one of uint32, string
                        YLeaf route_reflector_client; //type: boolean



                }; // Bgp::Neighbors::Neighbor::RouteReflector::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf route_reflector_cluster_id; //type: one of uint32, string
                        YLeaf route_reflector_client; //type: boolean



                }; // Bgp::Neighbors::Neighbor::RouteReflector::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector::State> state;


            }; // Bgp::Neighbors::Neighbor::RouteReflector


            class AsPathOptions : public Entity
            {
                public:
                    AsPathOptions();
                    ~AsPathOptions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf allow_own_as; //type: uint8
                        YLeaf replace_peer_as; //type: boolean



                }; // Bgp::Neighbors::Neighbor::AsPathOptions::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf allow_own_as; //type: uint8
                        YLeaf replace_peer_as; //type: boolean



                }; // Bgp::Neighbors::Neighbor::AsPathOptions::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions::State> state;


            }; // Bgp::Neighbors::Neighbor::AsPathOptions


            class AddPaths : public Entity
            {
                public:
                    AddPaths();
                    ~AddPaths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf receive; //type: boolean
                        YLeaf send_max; //type: uint8



                }; // Bgp::Neighbors::Neighbor::AddPaths::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf receive; //type: boolean
                        YLeaf send_max; //type: uint8



                }; // Bgp::Neighbors::Neighbor::AddPaths::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths::State> state;


            }; // Bgp::Neighbors::Neighbor::AddPaths


            class AfiSafis : public Entity
            {
                public:
                    AfiSafis();
                    ~AfiSafis();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class AfiSafi : public Entity
                {
                    public:
                        AfiSafi();
                        ~AfiSafi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity

                    class GracefulRestart : public Entity
                    {
                        public:
                            GracefulRestart();
                            ~GracefulRestart();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean
                                YLeaf received; //type: boolean
                                YLeaf advertised; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State> state;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
                            YLeaf enabled; //type: boolean



                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
                            YLeaf enabled; //type: boolean
                            YLeaf active; //type: boolean

                        class Prefixes : public Entity
                        {
                            public:
                                Prefixes();
                                ~Prefixes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf received; //type: uint32
                                YLeaf sent; //type: uint32
                                YLeaf installed; //type: uint32



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State::Prefixes> prefixes;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State


                    class ApplyPolicy : public Entity
                    {
                        public:
                            ApplyPolicy();
                            ~ApplyPolicy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                                YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList import_policy;
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList export_policy;



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                                YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList import_policy;
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList export_policy;



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State> state;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy


                    class Ipv4Unicast : public Entity
                    {
                        public:
                            Ipv4Unicast();
                            ~Ipv4Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State> state;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast


                    class Ipv6Unicast : public Entity
                    {
                        public:
                            Ipv6Unicast();
                            ~Ipv6Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State> state;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast


                    class Ipv4LabelledUnicast : public Entity
                    {
                        public:
                            Ipv4LabelledUnicast();
                            ~Ipv4LabelledUnicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast


                    class Ipv6LabelledUnicast : public Entity
                    {
                        public:
                            Ipv6LabelledUnicast();
                            ~Ipv6LabelledUnicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast


                    class L3VpnIpv4Unicast : public Entity
                    {
                        public:
                            L3VpnIpv4Unicast();
                            ~L3VpnIpv4Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast


                    class L3VpnIpv6Unicast : public Entity
                    {
                        public:
                            L3VpnIpv6Unicast();
                            ~L3VpnIpv6Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast


                    class L3VpnIpv4Multicast : public Entity
                    {
                        public:
                            L3VpnIpv4Multicast();
                            ~L3VpnIpv4Multicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast


                    class L3VpnIpv6Multicast : public Entity
                    {
                        public:
                            L3VpnIpv6Multicast();
                            ~L3VpnIpv6Multicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast


                    class L2VpnVpls : public Entity
                    {
                        public:
                            L2VpnVpls();
                            ~L2VpnVpls();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls


                    class L2VpnEvpn : public Entity
                    {
                        public:
                            L2VpnEvpn();
                            ~L2VpnEvpn();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn


                    class UseMultiplePaths : public Entity
                    {
                        public:
                            UseMultiplePaths();
                            ~UseMultiplePaths();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State


                        class Ebgp : public Entity
                        {
                            public:
                                Ebgp();
                                ~Ebgp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf allow_multiple_as; //type: boolean



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf allow_multiple_as; //type: boolean



                            }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;


                        }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
                            std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths::State> state;


                    }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths


                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State> state;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;


                }; // Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi


                    std::vector<std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi> > afi_safi;


            }; // Bgp::Neighbors::Neighbor::AfiSafis


            class GracefulRestart : public Entity
            {
                public:
                    GracefulRestart();
                    ~GracefulRestart();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf restart_time; //type: uint16
                        YLeaf stale_routes_time; //type: decimal64
                        YLeaf helper_only; //type: boolean



                }; // Bgp::Neighbors::Neighbor::GracefulRestart::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf restart_time; //type: uint16
                        YLeaf stale_routes_time; //type: decimal64
                        YLeaf helper_only; //type: boolean
                        YLeaf peer_restart_time; //type: uint16
                        YLeaf peer_restarting; //type: boolean
                        YLeaf local_restarting; //type: boolean
                        YLeaf mode; //type: ModeEnum

                        class ModeEnum;


                }; // Bgp::Neighbors::Neighbor::GracefulRestart::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart::State> state;


            }; // Bgp::Neighbors::Neighbor::GracefulRestart


            class ApplyPolicy : public Entity
            {
                public:
                    ApplyPolicy();
                    ~ApplyPolicy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList import_policy;
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList export_policy;



                }; // Bgp::Neighbors::Neighbor::ApplyPolicy::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList import_policy;
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList export_policy;



                }; // Bgp::Neighbors::Neighbor::ApplyPolicy::State


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy::State> state;


            }; // Bgp::Neighbors::Neighbor::ApplyPolicy


            class UseMultiplePaths : public Entity
            {
                public:
                    UseMultiplePaths();
                    ~UseMultiplePaths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean



                }; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean



                }; // Bgp::Neighbors::Neighbor::UseMultiplePaths::State


                class Ebgp : public Entity
                {
                    public:
                        Ebgp();
                        ~Ebgp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf allow_multiple_as; //type: boolean



                    }; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf allow_multiple_as; //type: boolean



                    }; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State


                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp::State> state;


                }; // Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp


                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::Ebgp> ebgp;
                    std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths::State> state;


            }; // Bgp::Neighbors::Neighbor::UseMultiplePaths


                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AddPaths> add_paths;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AfiSafis> afi_safis;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ApplyPolicy> apply_policy;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::AsPathOptions> as_path_options;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::ErrorHandling> error_handling;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::GracefulRestart> graceful_restart;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::LoggingOptions> logging_options;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::RouteReflector> route_reflector;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::State> state;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Timers> timers;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::Transport> transport;
                std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor::UseMultiplePaths> use_multiple_paths;


        }; // Bgp::Neighbors::Neighbor


            std::vector<std::unique_ptr<openconfig_bgp::Bgp::Neighbors::Neighbor> > neighbor;


    }; // Bgp::Neighbors


    class PeerGroups : public Entity
    {
        public:
            PeerGroups();
            ~PeerGroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class PeerGroup : public Entity
        {
            public:
                PeerGroup();
                ~PeerGroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                //type: string (refers to openconfig_bgp::Bgp::PeerGroups::PeerGroup::Config::peer_group_name)
                YLeaf peer_group_name;

            class Config : public Entity
            {
                public:
                    Config();
                    ~Config();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf peer_as; //type: uint32
                    YLeaf local_as; //type: uint32
                    YLeaf peer_type; //type: PeerTypeEnum
                    YLeaf auth_password; //type: string
                    YLeaf remove_private_as; //type: RemovePrivateAsOptionEnum
                    YLeaf route_flap_damping; //type: boolean
                    YLeaf send_community; //type: CommunityTypeEnum
                    YLeaf description; //type: string
                    YLeaf peer_group_name; //type: string



            }; // Bgp::PeerGroups::PeerGroup::Config


            class State : public Entity
            {
                public:
                    State();
                    ~State();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf peer_as; //type: uint32
                    YLeaf local_as; //type: uint32
                    YLeaf peer_type; //type: PeerTypeEnum
                    YLeaf auth_password; //type: string
                    YLeaf remove_private_as; //type: RemovePrivateAsOptionEnum
                    YLeaf route_flap_damping; //type: boolean
                    YLeaf send_community; //type: CommunityTypeEnum
                    YLeaf description; //type: string
                    YLeaf peer_group_name; //type: string
                    YLeaf total_paths; //type: uint32
                    YLeaf total_prefixes; //type: uint32



            }; // Bgp::PeerGroups::PeerGroup::State


            class Timers : public Entity
            {
                public:
                    Timers();
                    ~Timers();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf connect_retry; //type: decimal64
                        YLeaf hold_time; //type: decimal64
                        YLeaf keepalive_interval; //type: decimal64
                        YLeaf minimum_advertisement_interval; //type: decimal64



                }; // Bgp::PeerGroups::PeerGroup::Timers::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf connect_retry; //type: decimal64
                        YLeaf hold_time; //type: decimal64
                        YLeaf keepalive_interval; //type: decimal64
                        YLeaf minimum_advertisement_interval; //type: decimal64



                }; // Bgp::PeerGroups::PeerGroup::Timers::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers::State> state;


            }; // Bgp::PeerGroups::PeerGroup::Timers


            class Transport : public Entity
            {
                public:
                    Transport();
                    ~Transport();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tcp_mss; //type: uint16
                        YLeaf mtu_discovery; //type: boolean
                        YLeaf passive_mode; //type: boolean
                        YLeaf local_address; //type: one of union, string



                }; // Bgp::PeerGroups::PeerGroup::Transport::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tcp_mss; //type: uint16
                        YLeaf mtu_discovery; //type: boolean
                        YLeaf passive_mode; //type: boolean
                        YLeaf local_address; //type: one of union, string



                }; // Bgp::PeerGroups::PeerGroup::Transport::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport::State> state;


            }; // Bgp::PeerGroups::PeerGroup::Transport


            class ErrorHandling : public Entity
            {
                public:
                    ErrorHandling();
                    ~ErrorHandling();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf treat_as_withdraw; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::ErrorHandling::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf treat_as_withdraw; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::ErrorHandling::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling::State> state;


            }; // Bgp::PeerGroups::PeerGroup::ErrorHandling


            class LoggingOptions : public Entity
            {
                public:
                    LoggingOptions();
                    ~LoggingOptions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf log_neighbor_state_changes; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::LoggingOptions::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf log_neighbor_state_changes; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::LoggingOptions::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions::State> state;


            }; // Bgp::PeerGroups::PeerGroup::LoggingOptions


            class EbgpMultihop : public Entity
            {
                public:
                    EbgpMultihop();
                    ~EbgpMultihop();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf multihop_ttl; //type: uint8



                }; // Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf multihop_ttl; //type: uint8



                }; // Bgp::PeerGroups::PeerGroup::EbgpMultihop::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop::State> state;


            }; // Bgp::PeerGroups::PeerGroup::EbgpMultihop


            class RouteReflector : public Entity
            {
                public:
                    RouteReflector();
                    ~RouteReflector();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf route_reflector_cluster_id; //type: one of uint32, string
                        YLeaf route_reflector_client; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::RouteReflector::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf route_reflector_cluster_id; //type: one of uint32, string
                        YLeaf route_reflector_client; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::RouteReflector::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector::State> state;


            }; // Bgp::PeerGroups::PeerGroup::RouteReflector


            class AsPathOptions : public Entity
            {
                public:
                    AsPathOptions();
                    ~AsPathOptions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf allow_own_as; //type: uint8
                        YLeaf replace_peer_as; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::AsPathOptions::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf allow_own_as; //type: uint8
                        YLeaf replace_peer_as; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::AsPathOptions::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions::State> state;


            }; // Bgp::PeerGroups::PeerGroup::AsPathOptions


            class AddPaths : public Entity
            {
                public:
                    AddPaths();
                    ~AddPaths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf receive; //type: boolean
                        YLeaf send_max; //type: uint8



                }; // Bgp::PeerGroups::PeerGroup::AddPaths::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf receive; //type: boolean
                        YLeaf send_max; //type: uint8



                }; // Bgp::PeerGroups::PeerGroup::AddPaths::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths::State> state;


            }; // Bgp::PeerGroups::PeerGroup::AddPaths


            class AfiSafis : public Entity
            {
                public:
                    AfiSafis();
                    ~AfiSafis();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class AfiSafi : public Entity
                {
                    public:
                        AfiSafi();
                        ~AfiSafi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf afi_safi_name; //type: AfiSafiTypeIdentity

                    class GracefulRestart : public Entity
                    {
                        public:
                            GracefulRestart();
                            ~GracefulRestart();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart::State> state;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart


                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
                            YLeaf enabled; //type: boolean



                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf afi_safi_name; //type: AfiSafiTypeIdentity
                            YLeaf enabled; //type: boolean



                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State


                    class ApplyPolicy : public Entity
                    {
                        public:
                            ApplyPolicy();
                            ~ApplyPolicy();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                                YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList import_policy;
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList export_policy;



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                                YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList import_policy;
                                //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                                YLeafList export_policy;



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy::State> state;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy


                    class Ipv4Unicast : public Entity
                    {
                        public:
                            Ipv4Unicast();
                            ~Ipv4Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast::State> state;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast


                    class Ipv6Unicast : public Entity
                    {
                        public:
                            Ipv6Unicast();
                            ~Ipv6Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit


                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf send_default_route; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit> prefix_limit;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast::State> state;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast


                    class Ipv4LabelledUnicast : public Entity
                    {
                        public:
                            Ipv4LabelledUnicast();
                            ~Ipv4LabelledUnicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast


                    class Ipv6LabelledUnicast : public Entity
                    {
                        public:
                            Ipv6LabelledUnicast();
                            ~Ipv6LabelledUnicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast


                    class L3VpnIpv4Unicast : public Entity
                    {
                        public:
                            L3VpnIpv4Unicast();
                            ~L3VpnIpv4Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast


                    class L3VpnIpv6Unicast : public Entity
                    {
                        public:
                            L3VpnIpv6Unicast();
                            ~L3VpnIpv6Unicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast


                    class L3VpnIpv4Multicast : public Entity
                    {
                        public:
                            L3VpnIpv4Multicast();
                            ~L3VpnIpv4Multicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast


                    class L3VpnIpv6Multicast : public Entity
                    {
                        public:
                            L3VpnIpv6Multicast();
                            ~L3VpnIpv6Multicast();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast


                    class L2VpnVpls : public Entity
                    {
                        public:
                            L2VpnVpls();
                            ~L2VpnVpls();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls


                    class L2VpnEvpn : public Entity
                    {
                        public:
                            L2VpnEvpn();
                            ~L2VpnEvpn();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PrefixLimit : public Entity
                        {
                            public:
                                PrefixLimit();
                                ~PrefixLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf max_prefixes; //type: uint32
                                    YLeaf shutdown_threshold_pct; //type: uint8
                                    YLeaf restart_timer; //type: decimal64



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit> prefix_limit;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn


                    class UseMultiplePaths : public Entity
                    {
                        public:
                            UseMultiplePaths();
                            ~UseMultiplePaths();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enabled; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State


                        class Ebgp : public Entity
                        {
                            public:
                                Ebgp();
                                ~Ebgp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf allow_multiple_as; //type: boolean
                                    YLeaf maximum_paths; //type: uint32



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf allow_multiple_as; //type: boolean
                                    YLeaf maximum_paths; //type: uint32



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp


                        class Ibgp : public Entity
                        {
                            public:
                                Ibgp();
                                ~Ibgp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Config : public Entity
                            {
                                public:
                                    Config();
                                    ~Config();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf maximum_paths; //type: uint32



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config


                            class State : public Entity
                            {
                                public:
                                    State();
                                    ~State();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf maximum_paths; //type: uint32



                            }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State


                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config> config;
                                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State> state;


                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp> ebgp;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp> ibgp;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths::State> state;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths


                    class RouteSelectionOptions : public Entity
                    {
                        public:
                            RouteSelectionOptions();
                            ~RouteSelectionOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Config : public Entity
                        {
                            public:
                                Config();
                                ~Config();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf always_compare_med; //type: boolean
                                YLeaf ignore_as_path_length; //type: boolean
                                YLeaf external_compare_router_id; //type: boolean
                                YLeaf advertise_inactive_routes; //type: boolean
                                YLeaf enable_aigp; //type: boolean
                                YLeaf ignore_next_hop_igp_metric; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config


                        class State : public Entity
                        {
                            public:
                                State();
                                ~State();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf always_compare_med; //type: boolean
                                YLeaf ignore_as_path_length; //type: boolean
                                YLeaf external_compare_router_id; //type: boolean
                                YLeaf advertise_inactive_routes; //type: boolean
                                YLeaf enable_aigp; //type: boolean
                                YLeaf ignore_next_hop_igp_metric; //type: boolean



                        }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State


                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::Config> config;
                            std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions::State> state;


                    }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions


                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::ApplyPolicy> apply_policy;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::GracefulRestart> graceful_restart;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4LabelledUnicast> ipv4_labelled_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv4Unicast> ipv4_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6LabelledUnicast> ipv6_labelled_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::Ipv6Unicast> ipv6_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnEvpn> l2vpn_evpn;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L2VpnVpls> l2vpn_vpls;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Multicast> l3vpn_ipv4_multicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv4Unicast> l3vpn_ipv4_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Multicast> l3vpn_ipv6_multicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::L3VpnIpv6Unicast> l3vpn_ipv6_unicast;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::RouteSelectionOptions> route_selection_options;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::State> state;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi::UseMultiplePaths> use_multiple_paths;


                }; // Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi


                    std::vector<std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis::AfiSafi> > afi_safi;


            }; // Bgp::PeerGroups::PeerGroup::AfiSafis


            class GracefulRestart : public Entity
            {
                public:
                    GracefulRestart();
                    ~GracefulRestart();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf restart_time; //type: uint16
                        YLeaf stale_routes_time; //type: decimal64
                        YLeaf helper_only; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::GracefulRestart::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean
                        YLeaf restart_time; //type: uint16
                        YLeaf stale_routes_time; //type: decimal64
                        YLeaf helper_only; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::GracefulRestart::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart::State> state;


            }; // Bgp::PeerGroups::PeerGroup::GracefulRestart


            class ApplyPolicy : public Entity
            {
                public:
                    ApplyPolicy();
                    ~ApplyPolicy();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList import_policy;
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList export_policy;



                }; // Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf default_import_policy; //type: DefaultPolicyTypeEnum
                        YLeaf default_export_policy; //type: DefaultPolicyTypeEnum
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList import_policy;
                        //type: list of  string (refers to openconfig_routing_policy::RoutingPolicy::PolicyDefinitions::PolicyDefinition::name)
                        YLeafList export_policy;



                }; // Bgp::PeerGroups::PeerGroup::ApplyPolicy::State


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy::State> state;


            }; // Bgp::PeerGroups::PeerGroup::ApplyPolicy


            class UseMultiplePaths : public Entity
            {
                public:
                    UseMultiplePaths();
                    ~UseMultiplePaths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Config : public Entity
                {
                    public:
                        Config();
                        ~Config();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config


                class State : public Entity
                {
                    public:
                        State();
                        ~State();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf enabled; //type: boolean



                }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State


                class Ebgp : public Entity
                {
                    public:
                        Ebgp();
                        ~Ebgp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf allow_multiple_as; //type: boolean
                            YLeaf maximum_paths; //type: uint32



                    }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf allow_multiple_as; //type: boolean
                            YLeaf maximum_paths; //type: uint32



                    }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State


                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp::State> state;


                }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp


                class Ibgp : public Entity
                {
                    public:
                        Ibgp();
                        ~Ibgp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Config : public Entity
                    {
                        public:
                            Config();
                            ~Config();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf maximum_paths; //type: uint32



                    }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config


                    class State : public Entity
                    {
                        public:
                            State();
                            ~State();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf maximum_paths; //type: uint32



                    }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State


                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::Config> config;
                        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp::State> state;


                }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp


                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Config> config;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ebgp> ebgp;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::Ibgp> ibgp;
                    std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths::State> state;


            }; // Bgp::PeerGroups::PeerGroup::UseMultiplePaths


                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AddPaths> add_paths;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AfiSafis> afi_safis;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ApplyPolicy> apply_policy;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::AsPathOptions> as_path_options;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Config> config;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::EbgpMultihop> ebgp_multihop;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::ErrorHandling> error_handling;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::GracefulRestart> graceful_restart;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::LoggingOptions> logging_options;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::RouteReflector> route_reflector;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::State> state;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Timers> timers;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::Transport> transport;
                std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup::UseMultiplePaths> use_multiple_paths;


        }; // Bgp::PeerGroups::PeerGroup


            std::vector<std::unique_ptr<openconfig_bgp::Bgp::PeerGroups::PeerGroup> > peer_group;


    }; // Bgp::PeerGroups


        std::unique_ptr<openconfig_bgp::Bgp::Global> global;
        std::unique_ptr<openconfig_bgp::Bgp::Neighbors> neighbors;
        std::unique_ptr<openconfig_bgp::Bgp::PeerGroups> peer_groups;


}; // Bgp


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

class Bgp::Neighbors::Neighbor::GracefulRestart::State::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf HELPER_ONLY;
        static const Enum::YLeaf BILATERAL;
        static const Enum::YLeaf REMOTE_HELPER;

};


}
}

#endif /* _OPENCONFIG_BGP_ */

