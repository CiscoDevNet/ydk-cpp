#ifndef _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_
#define _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_telemetry_model_driven_cfg {

class TelemetryModelDriven : public Entity
{
    public:
        TelemetryModelDriven();
        ~TelemetryModelDriven();

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

        YLeaf enable; //type: empty
        class SensorGroups; //type: TelemetryModelDriven::SensorGroups
        class Subscriptions; //type: TelemetryModelDriven::Subscriptions
        class DestinationGroups; //type: TelemetryModelDriven::DestinationGroups

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups> destination_groups;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups> sensor_groups;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions> subscriptions;
        
}; // TelemetryModelDriven


class TelemetryModelDriven::SensorGroups : public Entity
{
    public:
        SensorGroups();
        ~SensorGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SensorGroup; //type: TelemetryModelDriven::SensorGroups::SensorGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup> > sensor_group;
        
}; // TelemetryModelDriven::SensorGroups


class TelemetryModelDriven::SensorGroups::SensorGroup : public Entity
{
    public:
        SensorGroup();
        ~SensorGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sensor_group_identifier; //type: string
        class SensorPaths; //type: TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths> sensor_paths;
        
}; // TelemetryModelDriven::SensorGroups::SensorGroup


class TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths : public Entity
{
    public:
        SensorPaths();
        ~SensorPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SensorPath; //type: TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath> > sensor_path;
        
}; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths


class TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath : public Entity
{
    public:
        SensorPath();
        ~SensorPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf telemetry_sensor_path; //type: string

}; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath


class TelemetryModelDriven::Subscriptions : public Entity
{
    public:
        Subscriptions();
        ~Subscriptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Subscription; //type: TelemetryModelDriven::Subscriptions::Subscription

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription> > subscription;
        
}; // TelemetryModelDriven::Subscriptions


class TelemetryModelDriven::Subscriptions::Subscription : public Entity
{
    public:
        Subscription();
        ~Subscription();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscription_identifier; //type: string
        class SensorProfiles; //type: TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles
        class DestinationProfiles; //type: TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles> destination_profiles;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles> sensor_profiles;
        
}; // TelemetryModelDriven::Subscriptions::Subscription


class TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles : public Entity
{
    public:
        SensorProfiles();
        ~SensorProfiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SensorProfile; //type: TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile> > sensor_profile;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles


class TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile : public Entity
{
    public:
        SensorProfile();
        ~SensorProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sensorgroupid; //type: string
        YLeaf sample_interval; //type: uint32

}; // TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile


class TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles : public Entity
{
    public:
        DestinationProfiles();
        ~DestinationProfiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestinationProfile; //type: TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile> > destination_profile;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles


class TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile : public Entity
{
    public:
        DestinationProfile();
        ~DestinationProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_id; //type: string

}; // TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile


class TelemetryModelDriven::DestinationGroups : public Entity
{
    public:
        DestinationGroups();
        ~DestinationGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DestinationGroup; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup> > destination_group;
        
}; // TelemetryModelDriven::DestinationGroups


class TelemetryModelDriven::DestinationGroups::DestinationGroup : public Entity
{
    public:
        DestinationGroup();
        ~DestinationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_id; //type: string
        class Ipv6Destinations; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations
        class Ipv4Destinations; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations> ipv4_destinations;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations> ipv6_destinations;
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations : public Entity
{
    public:
        Ipv6Destinations();
        ~Ipv6Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Destination; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination> > ipv6_destination;
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination : public Entity
{
    public:
        Ipv6Destination();
        ~Ipv6Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_address; //type: string
        YLeaf destination_port; //type: uint16
        YLeaf encoding; //type: EncodeTypeEnum
        class Protocol; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol> protocol; // presence node
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtoTypeEnum
        YLeaf tls_hostname; //type: string
        YLeaf no_tls; //type: int32

}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations : public Entity
{
    public:
        Ipv4Destinations();
        ~Ipv4Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Destination; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination> > ipv4_destination;
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination : public Entity
{
    public:
        Ipv4Destination();
        ~Ipv4Destination();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_address; //type: string
        YLeaf destination_port; //type: uint16
        YLeaf encoding; //type: EncodeTypeEnum
        class Protocol; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol> protocol; // presence node
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtoTypeEnum
        YLeaf tls_hostname; //type: string
        YLeaf no_tls; //type: int32

}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol

class ProtoTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf grpc;
        static const Enum::YLeaf tcp;

};

class EncodeTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf gpb;
        static const Enum::YLeaf self_describing_gpb;

};


}
}

#endif /* _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_ */

