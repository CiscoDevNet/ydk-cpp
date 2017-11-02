#ifndef _OPENCONFIG_TELEMETRY_
#define _OPENCONFIG_TELEMETRY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_telemetry {

class TelemetrySystem : public ydk::Entity
{
    public:
        TelemetrySystem();
        ~TelemetrySystem();

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

        class SensorGroups; //type: TelemetrySystem::SensorGroups
        class DestinationGroups; //type: TelemetrySystem::DestinationGroups
        class Subscriptions; //type: TelemetrySystem::Subscriptions

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups> sensor_groups;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups> destination_groups;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions> subscriptions;
        
}; // TelemetrySystem


class TelemetrySystem::SensorGroups : public ydk::Entity
{
    public:
        SensorGroups();
        ~SensorGroups();

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

        class SensorGroup; //type: TelemetrySystem::SensorGroups::SensorGroup

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup> > sensor_group;
        
}; // TelemetrySystem::SensorGroups


class TelemetrySystem::SensorGroups::SensorGroup : public ydk::Entity
{
    public:
        SensorGroup();
        ~SensorGroup();

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

        //type: string (refers to openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config::sensor_group_id)
        ydk::YLeaf sensor_group_id;
        class Config; //type: TelemetrySystem::SensorGroups::SensorGroup::Config
        class State; //type: TelemetrySystem::SensorGroups::SensorGroup::State
        class SensorPaths; //type: TelemetrySystem::SensorGroups::SensorGroup::SensorPaths

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::State> state;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths> sensor_paths;
        
}; // TelemetrySystem::SensorGroups::SensorGroup


class TelemetrySystem::SensorGroups::SensorGroup::Config : public ydk::Entity
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

        ydk::YLeaf sensor_group_id; //type: string

}; // TelemetrySystem::SensorGroups::SensorGroup::Config


class TelemetrySystem::SensorGroups::SensorGroup::State : public ydk::Entity
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

        ydk::YLeaf sensor_group_id; //type: string

}; // TelemetrySystem::SensorGroups::SensorGroup::State


class TelemetrySystem::SensorGroups::SensorGroup::SensorPaths : public ydk::Entity
{
    public:
        SensorPaths();
        ~SensorPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorPath; //type: TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath> > sensor_path;
        
}; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths


class TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath : public ydk::Entity
{
    public:
        SensorPath();
        ~SensorPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config::path)
        ydk::YLeaf path;
        class Config; //type: TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config
        class State; //type: TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State> state;
        
}; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath


class TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config : public ydk::Entity
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

        ydk::YLeaf path; //type: string
        ydk::YLeaf exclude_filter; //type: string

}; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::Config


class TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State : public ydk::Entity
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

        ydk::YLeaf path; //type: string
        ydk::YLeaf exclude_filter; //type: string

}; // TelemetrySystem::SensorGroups::SensorGroup::SensorPaths::SensorPath::State


class TelemetrySystem::DestinationGroups : public ydk::Entity
{
    public:
        DestinationGroups();
        ~DestinationGroups();

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

        class DestinationGroup; //type: TelemetrySystem::DestinationGroups::DestinationGroup

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup> > destination_group;
        
}; // TelemetrySystem::DestinationGroups


class TelemetrySystem::DestinationGroups::DestinationGroup : public ydk::Entity
{
    public:
        DestinationGroup();
        ~DestinationGroup();

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

        //type: string (refers to openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Config::group_id)
        ydk::YLeaf group_id;
        class Config; //type: TelemetrySystem::DestinationGroups::DestinationGroup::Config
        class State; //type: TelemetrySystem::DestinationGroups::DestinationGroup::State
        class Destinations; //type: TelemetrySystem::DestinationGroups::DestinationGroup::Destinations

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::State> state;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations> destinations;
        
}; // TelemetrySystem::DestinationGroups::DestinationGroup


class TelemetrySystem::DestinationGroups::DestinationGroup::Config : public ydk::Entity
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

        ydk::YLeaf group_id; //type: string

}; // TelemetrySystem::DestinationGroups::DestinationGroup::Config


class TelemetrySystem::DestinationGroups::DestinationGroup::State : public ydk::Entity
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

        ydk::YLeaf group_id; //type: string

}; // TelemetrySystem::DestinationGroups::DestinationGroup::State


class TelemetrySystem::DestinationGroups::DestinationGroup::Destinations : public ydk::Entity
{
    public:
        Destinations();
        ~Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination> > destination;
        
}; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations


class TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: union (refers to openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::destination_address)
        ydk::YLeaf destination_address;
        //type: uint16 (refers to openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config::destination_port)
        ydk::YLeaf destination_port;
        class Config; //type: TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config
        class State; //type: TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State> state;
        
}; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination


class TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf destination_protocol; //type: TelemetryStreamProtocol

}; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::Config


class TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State : public ydk::Entity
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

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf destination_protocol; //type: TelemetryStreamProtocol

}; // TelemetrySystem::DestinationGroups::DestinationGroup::Destinations::Destination::State


class TelemetrySystem::Subscriptions : public ydk::Entity
{
    public:
        Subscriptions();
        ~Subscriptions();

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

        class Persistent; //type: TelemetrySystem::Subscriptions::Persistent
        class Dynamic; //type: TelemetrySystem::Subscriptions::Dynamic

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent> persistent;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic> dynamic;
        
}; // TelemetrySystem::Subscriptions


class TelemetrySystem::Subscriptions::Persistent : public ydk::Entity
{
    public:
        Persistent();
        ~Persistent();

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

        class Subscription; //type: TelemetrySystem::Subscriptions::Persistent::Subscription

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription> > subscription;
        
}; // TelemetrySystem::Subscriptions::Persistent


class TelemetrySystem::Subscriptions::Persistent::Subscription : public ydk::Entity
{
    public:
        Subscription();
        ~Subscription();

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

        //type: uint64 (refers to openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::Config::subscription_id)
        ydk::YLeaf subscription_id;
        class Config; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::Config
        class State; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::State
        class SensorProfiles; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles
        class DestinationGroups; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::State> state;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles> sensor_profiles;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups> destination_groups;
        
}; // TelemetrySystem::Subscriptions::Persistent::Subscription


class TelemetrySystem::Subscriptions::Persistent::Subscription::Config : public ydk::Entity
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

        ydk::YLeaf subscription_id; //type: uint64
        ydk::YLeaf local_source_address; //type: string
        ydk::YLeaf originated_qos_marking; //type: uint8

}; // TelemetrySystem::Subscriptions::Persistent::Subscription::Config


class TelemetrySystem::Subscriptions::Persistent::Subscription::State : public ydk::Entity
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

        ydk::YLeaf subscription_id; //type: uint64
        ydk::YLeaf local_source_address; //type: string
        ydk::YLeaf originated_qos_marking; //type: uint8

}; // TelemetrySystem::Subscriptions::Persistent::Subscription::State


class TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles : public ydk::Entity
{
    public:
        SensorProfiles();
        ~SensorProfiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorProfile; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile> > sensor_profile;
        
}; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles


class TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile : public ydk::Entity
{
    public:
        SensorProfile();
        ~SensorProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config::sensor_group)
        ydk::YLeaf sensor_group;
        class Config; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config
        class State; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State> state;
        
}; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile


class TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config::sensor_group_id)
        ydk::YLeaf sensor_group;
        ydk::YLeaf sample_interval; //type: uint64
        ydk::YLeaf heartbeat_interval; //type: uint64
        ydk::YLeaf suppress_redundant; //type: boolean

}; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::Config


class TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_telemetry::TelemetrySystem::SensorGroups::SensorGroup::Config::sensor_group_id)
        ydk::YLeaf sensor_group;
        ydk::YLeaf sample_interval; //type: uint64
        ydk::YLeaf heartbeat_interval; //type: uint64
        ydk::YLeaf suppress_redundant; //type: boolean

}; // TelemetrySystem::Subscriptions::Persistent::Subscription::SensorProfiles::SensorProfile::State


class TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups : public ydk::Entity
{
    public:
        DestinationGroups();
        ~DestinationGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestinationGroup; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup> > destination_group;
        
}; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups


class TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup : public ydk::Entity
{
    public:
        DestinationGroup();
        ~DestinationGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config::group_id)
        ydk::YLeaf group_id;
        class Config; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config
        class State; //type: TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config> config;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State> state;
        
}; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup


class TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::group_id)
        ydk::YLeaf group_id;

}; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::Config


class TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_telemetry::TelemetrySystem::DestinationGroups::DestinationGroup::group_id)
        ydk::YLeaf group_id;

}; // TelemetrySystem::Subscriptions::Persistent::Subscription::DestinationGroups::DestinationGroup::State


class TelemetrySystem::Subscriptions::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

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

        class Subscription; //type: TelemetrySystem::Subscriptions::Dynamic::Subscription

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription> > subscription;
        
}; // TelemetrySystem::Subscriptions::Dynamic


class TelemetrySystem::Subscriptions::Dynamic::Subscription : public ydk::Entity
{
    public:
        Subscription();
        ~Subscription();

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

        //type: uint64 (refers to openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::State::subscription_id)
        ydk::YLeaf subscription_id;
        class State; //type: TelemetrySystem::Subscriptions::Dynamic::Subscription::State
        class SensorPaths; //type: TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::State> state;
        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths> sensor_paths;
        
}; // TelemetrySystem::Subscriptions::Dynamic::Subscription


class TelemetrySystem::Subscriptions::Dynamic::Subscription::State : public ydk::Entity
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

        ydk::YLeaf subscription_id; //type: uint64
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf destination_protocol; //type: TelemetryStreamProtocol
        ydk::YLeaf sample_interval; //type: uint64
        ydk::YLeaf heartbeat_interval; //type: uint64
        ydk::YLeaf suppress_redundant; //type: boolean
        ydk::YLeaf originated_qos_marking; //type: uint8

}; // TelemetrySystem::Subscriptions::Dynamic::Subscription::State


class TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths : public ydk::Entity
{
    public:
        SensorPaths();
        ~SensorPaths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorPath; //type: TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath

        std::vector<std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath> > sensor_path;
        
}; // TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths


class TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath : public ydk::Entity
{
    public:
        SensorPath();
        ~SensorPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State::path)
        ydk::YLeaf path;
        class State; //type: TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State

        std::shared_ptr<openconfig::openconfig_telemetry::TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State> state;
        
}; // TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath


class TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State : public ydk::Entity
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

        ydk::YLeaf path; //type: string
        ydk::YLeaf exclude_filter; //type: string

}; // TelemetrySystem::Subscriptions::Dynamic::Subscription::SensorPaths::SensorPath::State

class TelemetryStreamProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf TCP;
        static const ydk::Enum::YLeaf UDP;

};


}
}

#endif /* _OPENCONFIG_TELEMETRY_ */

