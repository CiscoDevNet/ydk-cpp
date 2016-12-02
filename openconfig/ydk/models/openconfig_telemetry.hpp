#ifndef _OPENCONFIG_TELEMETRY_
#define _OPENCONFIG_TELEMETRY_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_telemetry {

class TelemetrySystem : public Entity
{
    public:
        TelemetrySystem();
        ~TelemetrySystem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class SensorGroups : public Entity
    {
        public:
            SensorGroups();
            ~SensorGroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SensorGroup : public Entity
        {
            public:
                SensorGroup();
                ~SensorGroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                //type: string (refers to openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config::sensor_group_id)
                Value sensor_group_id;


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
                    Value sensor_group_id; //type: string




            }; // TelemetrySystem::SensorGroups::SensorGroup::Config


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
                    Value sensor_group_id; //type: string




            }; // TelemetrySystem::SensorGroups::SensorGroup::State


            class SensorPaths : public Entity
            {
                public:
                    SensorPaths();
                    ~SensorPaths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SensorPath : public Entity
                {
                    public:
                        SensorPath();
                        ~SensorPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: string (refers to openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::path)
                        Value path;


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
                            Value path; //type: string
                            Value exclude_filter; //type: string




                    }; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config


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
                            Value path; //type: string
                            Value exclude_filter; //type: string




                    }; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State


                        std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config> config;
                        std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State> state;


                }; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath


                    std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath> > sensor_path;


            }; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths


                std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config> config;
                std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths> sensor_paths;
                std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::State> state;


        }; // TelemetrySystem::SensorGroups::SensorGroup


            std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup> > sensor_group;


    }; // TelemetrySystem::SensorGroups


    class DestinationGroups : public Entity
    {
        public:
            DestinationGroups();
            ~DestinationGroups();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DestinationGroup : public Entity
        {
            public:
                DestinationGroup();
                ~DestinationGroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                //type: string (refers to openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Config::group_id)
                Value group_id;


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
                    Value group_id; //type: string




            }; // TelemetrySystem::DestinationGroups::DestinationGroup::Config


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
                    Value group_id; //type: string




            }; // TelemetrySystem::DestinationGroups::DestinationGroup::State


            class Destinations : public Entity
            {
                public:
                    Destinations();
                    ~Destinations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Destination : public Entity
                {
                    public:
                        Destination();
                        ~Destination();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        //type: union (refers to openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::destination_address)
                        Value destination_address;
                        //type: uint16 (refers to openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::destination_port)
                        Value destination_port;


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
                            Value destination_address; //type: string
                            Value destination_port; //type: uint16
                            Value destination_protocol; //type: TelemetryStreamProtocolEnum


                            class TelemetryStreamProtocolEnum;


                    }; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config


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
                            Value destination_address; //type: string
                            Value destination_port; //type: uint16
                            Value destination_protocol; //type: TelemetryStreamProtocolEnum


                            class TelemetryStreamProtocolEnum;


                    }; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State


                        std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config> config;
                        std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State> state;


                }; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination


                    std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination> > destination;


            }; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations


                std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Config> config;
                std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations> destinations;
                std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::State> state;


        }; // TelemetrySystem::DestinationGroups::DestinationGroup


            std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup> > destination_group;


    }; // TelemetrySystem::DestinationGroups


    class Subscriptions : public Entity
    {
        public:
            Subscriptions();
            ~Subscriptions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Persistent : public Entity
        {
            public:
                Persistent();
                ~Persistent();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Subscription : public Entity
            {
                public:
                    Subscription();
                    ~Subscription();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    //type: uint64 (refers to openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::Config::subscription_id)
                    Value subscription_id;


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
                        Value subscription_id; //type: uint64
                        Value local_source_address; //type: string
                        Value originated_qos_marking; //type: uint8




                }; // TelemetrySystem::Subscriptions::Persistent::Subscription::Config


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
                        Value subscription_id; //type: uint64
                        Value local_source_address; //type: string
                        Value originated_qos_marking; //type: uint8




                }; // TelemetrySystem::Subscriptions::Persistent::Subscription::State


                class SensorProfiles : public Entity
                {
                    public:
                        SensorProfiles();
                        ~SensorProfiles();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SensorProfile : public Entity
                    {
                        public:
                            SensorProfile();
                            ~SensorProfile();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: leafref (refers to openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::sensor_group)
                            Value sensor_group;


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
                                //type: string (refers to openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config::sensor_group_id)
                                Value sensor_group;
                                Value sample_interval; //type: uint64
                                Value heartbeat_interval; //type: uint64
                                Value suppress_redundant; //type: boolean




                        }; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config


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
                                //type: string (refers to openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config::sensor_group_id)
                                Value sensor_group;
                                Value sample_interval; //type: uint64
                                Value heartbeat_interval; //type: uint64
                                Value suppress_redundant; //type: boolean




                        }; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State


                            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config> config;
                            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State> state;


                    }; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile


                        std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile> > sensor_profile;


                }; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles


                class DestinationGroups : public Entity
                {
                    public:
                        DestinationGroups();
                        ~DestinationGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class DestinationGroup : public Entity
                    {
                        public:
                            DestinationGroup();
                            ~DestinationGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: leafref (refers to openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::group_id)
                            Value group_id;


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
                                //type: leafref (refers to openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::group_id)
                                Value group_id;




                        }; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config


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
                                //type: leafref (refers to openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::group_id)
                                Value group_id;




                        }; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State


                            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config> config;
                            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State> state;


                    }; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup


                        std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup> > destination_group;


                }; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups


                    std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::Config> config;
                    std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups> destination_groups;
                    std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles> sensor_profiles;
                    std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::State> state;


            }; // TelemetrySystem::Subscriptions::Persistent::Subscription


                std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription> > subscription;


        }; // TelemetrySystem::Subscriptions::Persistent


        class Dynamic : public Entity
        {
            public:
                Dynamic();
                ~Dynamic();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Subscription : public Entity
            {
                public:
                    Subscription();
                    ~Subscription();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    //type: uint64 (refers to openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::State::subscription_id)
                    Value subscription_id;


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
                        Value subscription_id; //type: uint64
                        Value destination_address; //type: string
                        Value destination_port; //type: uint16
                        Value destination_protocol; //type: TelemetryStreamProtocolEnum
                        Value sample_interval; //type: uint64
                        Value heartbeat_interval; //type: uint64
                        Value suppress_redundant; //type: boolean
                        Value originated_qos_marking; //type: uint8


                        class TelemetryStreamProtocolEnum;


                }; // TelemetrySystem::Subscriptions::Dynamic::Subscription::State


                class SensorPaths : public Entity
                {
                    public:
                        SensorPaths();
                        ~SensorPaths();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SensorPath : public Entity
                    {
                        public:
                            SensorPath();
                            ~SensorPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            //type: string (refers to openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::path)
                            Value path;


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
                                Value path; //type: string
                                Value exclude_filter; //type: string




                        }; // TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State


                            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State> state;


                    }; // TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath


                        std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath> > sensor_path;


                }; // TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths


                    std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths> sensor_paths;
                    std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::State> state;


            }; // TelemetrySystem::Subscriptions::Dynamic::Subscription


                std::vector<std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription> > subscription;


        }; // TelemetrySystem::Subscriptions::Dynamic


            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic> dynamic;
            std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent> persistent;


    }; // TelemetrySystem::Subscriptions


        std::unique_ptr<openconfig_telemetry::TelemetrySystem::DestinationGroups> destination_groups;
        std::unique_ptr<openconfig_telemetry::TelemetrySystem::SensorGroups> sensor_groups;
        std::unique_ptr<openconfig_telemetry::TelemetrySystem::Subscriptions> subscriptions;


}; // TelemetrySystem


class TelemetryStreamProtocolEnum : public Enum
{
    public:
        static const Enum::Value TCP;
        static const Enum::Value UDP;

};


}
}

#endif /* _OPENCONFIG_TELEMETRY_ */

