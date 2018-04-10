#ifndef _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_
#define _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_telemetry_model_driven_cfg {

class TelemetryModelDriven : public ydk::Entity
{
    public:
        TelemetryModelDriven();
        ~TelemetryModelDriven();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf max_sensor_paths; //type: uint32
        ydk::YLeaf max_containers_per_path; //type: uint32
        ydk::YLeaf tcp_send_timeout; //type: uint32
        class SensorGroups; //type: TelemetryModelDriven::SensorGroups
        class Subscriptions; //type: TelemetryModelDriven::Subscriptions
        class DestinationGroups; //type: TelemetryModelDriven::DestinationGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups> sensor_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions> subscriptions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups> destination_groups;
        
}; // TelemetryModelDriven


class TelemetryModelDriven::SensorGroups : public ydk::Entity
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

        class SensorGroup; //type: TelemetryModelDriven::SensorGroups::SensorGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup> > sensor_group;
        
}; // TelemetryModelDriven::SensorGroups


class TelemetryModelDriven::SensorGroups::SensorGroup : public ydk::Entity
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

        ydk::YLeaf sensor_group_identifier; //type: string
        class SensorPaths; //type: TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths> sensor_paths;
        
}; // TelemetryModelDriven::SensorGroups::SensorGroup


class TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths : public ydk::Entity
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

        class SensorPath; //type: TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath> > sensor_path;
        
}; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths


class TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath : public ydk::Entity
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

        ydk::YLeaf telemetry_sensor_path; //type: string

}; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPaths::SensorPath


class TelemetryModelDriven::Subscriptions : public ydk::Entity
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

        class Subscription; //type: TelemetryModelDriven::Subscriptions::Subscription

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription> > subscription;
        
}; // TelemetryModelDriven::Subscriptions


class TelemetryModelDriven::Subscriptions::Subscription : public ydk::Entity
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

        ydk::YLeaf subscription_identifier; //type: string
        ydk::YLeaf source_qos_marking; //type: MdtDscpValue
        ydk::YLeaf source_interface; //type: string
        class SensorProfiles; //type: TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles
        class DestinationProfiles; //type: TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles> sensor_profiles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles> destination_profiles;
        
}; // TelemetryModelDriven::Subscriptions::Subscription


class TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles : public ydk::Entity
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

        class SensorProfile; //type: TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile> > sensor_profile;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles


class TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile : public ydk::Entity
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

        ydk::YLeaf sensorgroupid; //type: string
        ydk::YLeaf strict_timer; //type: empty
        ydk::YLeaf sample_interval; //type: uint32

}; // TelemetryModelDriven::Subscriptions::Subscription::SensorProfiles::SensorProfile


class TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles : public ydk::Entity
{
    public:
        DestinationProfiles();
        ~DestinationProfiles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestinationProfile; //type: TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile> > destination_profile;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles


class TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile : public ydk::Entity
{
    public:
        DestinationProfile();
        ~DestinationProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_id; //type: string

}; // TelemetryModelDriven::Subscriptions::Subscription::DestinationProfiles::DestinationProfile


class TelemetryModelDriven::DestinationGroups : public ydk::Entity
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

        class DestinationGroup; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup> > destination_group;
        
}; // TelemetryModelDriven::DestinationGroups


class TelemetryModelDriven::DestinationGroups::DestinationGroup : public ydk::Entity
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

        ydk::YLeaf destination_id; //type: string
        ydk::YLeaf vrf; //type: string
        class Ipv6Destinations; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations
        class Ipv4Destinations; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations> ipv6_destinations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations> ipv4_destinations;
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations : public ydk::Entity
{
    public:
        Ipv6Destinations();
        ~Ipv6Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Destination; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination> > ipv6_destination;
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination : public ydk::Entity
{
    public:
        Ipv6Destination();
        ~Ipv6Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf encoding; //type: EncodeType
        class Protocol; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol> protocol; // presence node
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ProtoType
        ydk::YLeaf tls_hostname; //type: string
        ydk::YLeaf no_tls; //type: int32
        ydk::YLeaf packetsize; //type: uint32

}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv6Destinations::Ipv6Destination::Protocol


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations : public ydk::Entity
{
    public:
        Ipv4Destinations();
        ~Ipv4Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Destination; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination> > ipv4_destination;
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination : public ydk::Entity
{
    public:
        Ipv4Destination();
        ~Ipv4Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf destination_port; //type: uint16
        ydk::YLeaf encoding; //type: EncodeType
        class Protocol; //type: TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol> protocol; // presence node
        
}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination


class TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: ProtoType
        ydk::YLeaf tls_hostname; //type: string
        ydk::YLeaf no_tls; //type: int32
        ydk::YLeaf packetsize; //type: uint32

}; // TelemetryModelDriven::DestinationGroups::DestinationGroup::Ipv4Destinations::Ipv4Destination::Protocol

class ProtoType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf grpc;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;

};

class EncodeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gpb;
        static const ydk::Enum::YLeaf self_describing_gpb;
        static const ydk::Enum::YLeaf json;

};

class MdtDscpValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf ef;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;

};


}
}

#endif /* _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_CFG_ */

