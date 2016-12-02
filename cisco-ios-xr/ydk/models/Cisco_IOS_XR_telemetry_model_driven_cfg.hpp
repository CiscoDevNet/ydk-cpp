#ifndef _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_
#define _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_telemetry_model_driven_cfg {

class TelemetryModelDriven : public Entity
{
    public:
        TelemetryModelDriven();
        ~TelemetryModelDriven();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable; //type: empty


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
                Value sensor_group_identifier; //type: string


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
                        Value telemetry_sensor_path; //type: string




                }; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath


                    std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath> > sensor_path;


            }; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths


                std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths> sensor_paths;


        }; // TelemetryModelDriven::SensorGroups::SensorGroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup> > sensor_group;


    }; // TelemetryModelDriven::SensorGroups


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
                Value subscription_identifier; //type: string


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
                        Value sensorgroupid; //type: string
                        Value sample_interval; //type: uint32




                }; // TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile


                    std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile> > sensor_profile;


            }; // TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles


            class DestinationProfiles : public Entity
            {
                public:
                    DestinationProfiles();
                    ~DestinationProfiles();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class DestinationProfile : public Entity
                {
                    public:
                        DestinationProfile();
                        ~DestinationProfile();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value destination_id; //type: string




                }; // TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile


                    std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile> > destination_profile;


            }; // TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles


                std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles> destination_profiles;
                std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles> sensor_profiles;


        }; // TelemetryModelDriven::Subscriptions::Subscription


            std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription> > subscription;


    }; // TelemetryModelDriven::Subscriptions


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
                Value destination_id; //type: string


            class Ipv6Destinations : public Entity
            {
                public:
                    Ipv6Destinations();
                    ~Ipv6Destinations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ipv6Destination : public Entity
                {
                    public:
                        Ipv6Destination();
                        ~Ipv6Destination();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv6_address; //type: string
                        Value destination_port; //type: uint16
                        Value encoding; //type: EncodeTypeEnum


                    class Protocol : public Entity
                    {
                        public:
                            Protocol();
                            ~Protocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value protocol; //type: ProtoTypeEnum
                            Value tls_hostname; //type: string
                            Value no_tls; //type: int32


                            class ProtoTypeEnum;


                    }; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol


                        std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol> protocol; // presence node
                        class EncodeTypeEnum;


                }; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination


                    std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination> > ipv6_destination;


            }; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations


            class Ipv4Destinations : public Entity
            {
                public:
                    Ipv4Destinations();
                    ~Ipv4Destinations();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ipv4Destination : public Entity
                {
                    public:
                        Ipv4Destination();
                        ~Ipv4Destination();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value ipv4_address; //type: string
                        Value destination_port; //type: uint16
                        Value encoding; //type: EncodeTypeEnum


                    class Protocol : public Entity
                    {
                        public:
                            Protocol();
                            ~Protocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value protocol; //type: ProtoTypeEnum
                            Value tls_hostname; //type: string
                            Value no_tls; //type: int32


                            class ProtoTypeEnum;


                    }; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol


                        std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol> protocol; // presence node
                        class EncodeTypeEnum;


                }; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination


                    std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination> > ipv4_destination;


            }; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations


                std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations> ipv4_destinations;
                std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations> ipv6_destinations;


        }; // TelemetryModelDriven::DestinationGroups::DestinationGroup


            std::vector<std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup> > destination_group;


    }; // TelemetryModelDriven::DestinationGroups


        std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups> destination_groups;
        std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups> sensor_groups;
        std::unique_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions> subscriptions;


}; // TelemetryModelDriven


class ProtoTypeEnum : public Enum
{
    public:
        static const Enum::Value grpc;
        static const Enum::Value tcp;

};

class EncodeTypeEnum : public Enum
{
    public:
        static const Enum::Value gpb;
        static const Enum::Value self_describing_gpb;

};


}
}

#endif /* _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_ */

