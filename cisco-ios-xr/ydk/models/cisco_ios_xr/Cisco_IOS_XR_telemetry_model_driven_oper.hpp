#ifndef _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_OPER_
#define _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_telemetry_model_driven_oper {

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

        class Destinations; //type: TelemetryModelDriven::Destinations
        class Subscriptions; //type: TelemetryModelDriven::Subscriptions
        class SensorGroups; //type: TelemetryModelDriven::SensorGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations> destinations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::SensorGroups> sensor_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions> subscriptions;
        
}; // TelemetryModelDriven


class TelemetryModelDriven::Destinations : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Destination; //type: TelemetryModelDriven::Destinations::Destination

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination> > destination;
        
}; // TelemetryModelDriven::Destinations


class TelemetryModelDriven::Destinations::Destination : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf destination_id; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf configured; //type: uint32
        class Destination_; //type: TelemetryModelDriven::Destinations::Destination::Destination_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_> > destination;
        
}; // TelemetryModelDriven::Destinations::Destination


class TelemetryModelDriven::Destinations::Destination::Destination_ : public ydk::Entity
{
    public:
        Destination_();
        ~Destination_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination__; //type: TelemetryModelDriven::Destinations::Destination::Destination_::Destination__
        class CollectionGroup; //type: TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup> > collection_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::Destination__> destination;
        
}; // TelemetryModelDriven::Destinations::Destination::Destination_


class TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup : public ydk::Entity
{
    public:
        CollectionGroup();
        ~CollectionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint64
        ydk::YLeaf cadence; //type: uint32
        ydk::YLeaf total_collections; //type: uint32
        ydk::YLeaf encoding; //type: MdtEncodingEnum
        ydk::YLeaf last_collection_start_time; //type: uint64
        ydk::YLeaf last_collection_end_time; //type: uint64
        ydk::YLeaf max_collection_time; //type: uint32
        ydk::YLeaf min_collection_time; //type: uint32
        ydk::YLeaf min_total_time; //type: uint32
        ydk::YLeaf max_total_time; //type: uint32
        ydk::YLeaf avg_total_time; //type: uint32
        ydk::YLeaf total_other_errors; //type: uint32
        ydk::YLeaf total_on_data_instances; //type: uint32
        ydk::YLeaf total_not_ready; //type: uint32
        ydk::YLeaf total_send_errors; //type: uint32
        ydk::YLeaf total_send_drops; //type: uint32
        class CollectionPath; //type: TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath
        class InternalCollectionGroup; //type: TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath> > collection_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup> > internal_collection_group;
        
}; // TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup


class TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath : public ydk::Entity
{
    public:
        CollectionPath();
        ~CollectionPath();

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
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf status_str; //type: string

}; // TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath


class TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup : public ydk::Entity
{
    public:
        InternalCollectionGroup();
        ~InternalCollectionGroup();

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
        ydk::YLeaf cadence; //type: uint64
        ydk::YLeaf total_get_count; //type: uint64
        ydk::YLeaf total_list_count; //type: uint64
        ydk::YLeaf total_datalist_count; //type: uint64
        ydk::YLeaf total_finddata_count; //type: uint64
        ydk::YLeaf total_get_bulk_count; //type: uint64
        ydk::YLeaf total_item_count; //type: uint64
        ydk::YLeaf total_get_errors; //type: uint64
        ydk::YLeaf total_list_errors; //type: uint64
        ydk::YLeaf total_datalist_errors; //type: uint64
        ydk::YLeaf total_finddata_errors; //type: uint64
        ydk::YLeaf total_get_bulk_errors; //type: uint64
        ydk::YLeaf total_encode_errors; //type: uint64
        ydk::YLeaf total_encode_notready; //type: uint64
        ydk::YLeaf total_send_errors; //type: uint64
        ydk::YLeaf total_send_drops; //type: uint64
        ydk::YLeaf total_sent_bytes; //type: uint64
        ydk::YLeaf total_send_packets; //type: uint64
        ydk::YLeaf total_send_bytes_dropped; //type: uint64
        ydk::YLeaf total_collections; //type: uint64
        ydk::YLeaf total_collections_missed; //type: uint64
        ydk::YLeaf max_collection_time; //type: uint64
        ydk::YLeaf min_collection_time; //type: uint64
        ydk::YLeaf avg_collection_time; //type: uint64
        ydk::YLeaf collection_method; //type: uint64
        ydk::YLeaf status; //type: MdtInternalPathStatus

}; // TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup


class TelemetryModelDriven::Destinations::Destination::Destination_::Destination__ : public ydk::Entity
{
    public:
        Destination__();
        ~Destination__();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf sub_id_str; //type: string
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf encoding; //type: MdtEncodingEnum
        ydk::YLeaf transport; //type: MdtTransportEnum
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf state; //type: MdtDestStateEnum
        ydk::YLeaf udp_mtu; //type: uint32
        ydk::YLeaf tls; //type: uint32
        ydk::YLeaf tls_host; //type: string
        ydk::YLeaf total_num_of_packets_sent; //type: uint64
        ydk::YLeaf total_num_of_bytes_sent; //type: uint64
        ydk::YLeaf last_collection_time; //type: uint64
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeafList sub_id; //type: list of  uint64
        class DestIpAddress; //type: TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress> dest_ip_address;
        
}; // TelemetryModelDriven::Destinations::Destination::Destination_::Destination__


class TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress : public ydk::Entity
{
    public:
        DestIpAddress();
        ~DestIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_type; //type: MdtIp
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::SensorGroups::SensorGroup> > sensor_group;
        
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

        ydk::YLeaf sensor_group_id; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf configured; //type: uint32
        class SensorPath; //type: TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath> > sensor_path;
        
}; // TelemetryModelDriven::SensorGroups::SensorGroup


class TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath : public ydk::Entity
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

        ydk::YLeaf path; //type: string
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf status_str; //type: string

}; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription> > subscription;
        
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

        ydk::YLeaf subscription_id; //type: string
        class Subscription_; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_
        class CollectionGroup; //type: TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup> > collection_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_> subscription;
        
}; // TelemetryModelDriven::Subscriptions::Subscription


class TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup : public ydk::Entity
{
    public:
        CollectionGroup();
        ~CollectionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint64
        ydk::YLeaf cadence; //type: uint32
        ydk::YLeaf total_collections; //type: uint32
        ydk::YLeaf encoding; //type: MdtEncodingEnum
        ydk::YLeaf last_collection_start_time; //type: uint64
        ydk::YLeaf last_collection_end_time; //type: uint64
        ydk::YLeaf max_collection_time; //type: uint32
        ydk::YLeaf min_collection_time; //type: uint32
        ydk::YLeaf min_total_time; //type: uint32
        ydk::YLeaf max_total_time; //type: uint32
        ydk::YLeaf avg_total_time; //type: uint32
        ydk::YLeaf total_other_errors; //type: uint32
        ydk::YLeaf total_on_data_instances; //type: uint32
        ydk::YLeaf total_not_ready; //type: uint32
        ydk::YLeaf total_send_errors; //type: uint32
        ydk::YLeaf total_send_drops; //type: uint32
        class CollectionPath; //type: TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath
        class InternalCollectionGroup; //type: TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath> > collection_path;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup> > internal_collection_group;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup


class TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath : public ydk::Entity
{
    public:
        CollectionPath();
        ~CollectionPath();

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
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf status_str; //type: string

}; // TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath


class TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup : public ydk::Entity
{
    public:
        InternalCollectionGroup();
        ~InternalCollectionGroup();

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
        ydk::YLeaf cadence; //type: uint64
        ydk::YLeaf total_get_count; //type: uint64
        ydk::YLeaf total_list_count; //type: uint64
        ydk::YLeaf total_datalist_count; //type: uint64
        ydk::YLeaf total_finddata_count; //type: uint64
        ydk::YLeaf total_get_bulk_count; //type: uint64
        ydk::YLeaf total_item_count; //type: uint64
        ydk::YLeaf total_get_errors; //type: uint64
        ydk::YLeaf total_list_errors; //type: uint64
        ydk::YLeaf total_datalist_errors; //type: uint64
        ydk::YLeaf total_finddata_errors; //type: uint64
        ydk::YLeaf total_get_bulk_errors; //type: uint64
        ydk::YLeaf total_encode_errors; //type: uint64
        ydk::YLeaf total_encode_notready; //type: uint64
        ydk::YLeaf total_send_errors; //type: uint64
        ydk::YLeaf total_send_drops; //type: uint64
        ydk::YLeaf total_sent_bytes; //type: uint64
        ydk::YLeaf total_send_packets; //type: uint64
        ydk::YLeaf total_send_bytes_dropped; //type: uint64
        ydk::YLeaf total_collections; //type: uint64
        ydk::YLeaf total_collections_missed; //type: uint64
        ydk::YLeaf max_collection_time; //type: uint64
        ydk::YLeaf min_collection_time; //type: uint64
        ydk::YLeaf avg_collection_time; //type: uint64
        ydk::YLeaf collection_method; //type: uint64
        ydk::YLeaf status; //type: MdtInternalPathStatus

}; // TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_ : public ydk::Entity
{
    public:
        Subscription_();
        ~Subscription_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf state; //type: MdtSubsStateEnum
        ydk::YLeaf source_qos_marking; //type: MdtSourceQosMarking
        class SourceInterface; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface
        class SensorProfile; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile
        class DestinationGrp; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp> > destination_grp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile> > sensor_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface> source_interface;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp : public ydk::Entity
{
    public:
        DestinationGrp();
        ~DestinationGrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf configured; //type: uint32
        class Destination; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination> > destination;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf sub_id_str; //type: string
        ydk::YLeaf dest_port; //type: uint16
        ydk::YLeaf encoding; //type: MdtEncodingEnum
        ydk::YLeaf transport; //type: MdtTransportEnum
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf state; //type: MdtDestStateEnum
        ydk::YLeaf udp_mtu; //type: uint32
        ydk::YLeaf tls; //type: uint32
        ydk::YLeaf tls_host; //type: string
        ydk::YLeaf total_num_of_packets_sent; //type: uint64
        ydk::YLeaf total_num_of_bytes_sent; //type: uint64
        ydk::YLeaf last_collection_time; //type: uint64
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeafList sub_id; //type: list of  uint64
        class DestIpAddress; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress> dest_ip_address;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress : public ydk::Entity
{
    public:
        DestIpAddress();
        ~DestIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_type; //type: MdtIp
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile : public ydk::Entity
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

        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf heartbeat_interval; //type: uint32
        ydk::YLeaf suppress_redundant; //type: boolean
        class SensorGroup; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup> sensor_group;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf configured; //type: uint32
        class SensorPath; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath> > sensor_path;
        
}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath : public ydk::Entity
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

        ydk::YLeaf path; //type: string
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf status_str; //type: string

}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf state; //type: boolean
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf vrf_id; //type: uint32

}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SourceInterface

class MdtTransportEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf grpc;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf dialin;

};

class MdtInternalPathStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf internal_err;
        static const ydk::Enum::YLeaf plugin_active;
        static const ydk::Enum::YLeaf plugin_not_initialized;
        static const ydk::Enum::YLeaf plugin_invalid_cadence;
        static const ydk::Enum::YLeaf plugin_err;
        static const ydk::Enum::YLeaf filter_err;
        static const ydk::Enum::YLeaf paused;
        static const ydk::Enum::YLeaf event_ing_active;
        static const ydk::Enum::YLeaf event_ing_not_active;
        static const ydk::Enum::YLeaf event_ing_err;

};

class MdtDestStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dest_not_active;
        static const ydk::Enum::YLeaf dest_active;
        static const ydk::Enum::YLeaf dest_asking_pause;
        static const ydk::Enum::YLeaf dest_paused;
        static const ydk::Enum::YLeaf dest_resuming;
        static const ydk::Enum::YLeaf dest_channel_not_found;

};

class MdtEncodingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf gpb;
        static const ydk::Enum::YLeaf self_describing_gpb;
        static const ydk::Enum::YLeaf json;

};

class MdtSourceQosMarking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dscp_default;
        static const ydk::Enum::YLeaf dscp_cs1;
        static const ydk::Enum::YLeaf dscp_af11;
        static const ydk::Enum::YLeaf dscp_af12;
        static const ydk::Enum::YLeaf dscp_af13;
        static const ydk::Enum::YLeaf dscp_cs2;
        static const ydk::Enum::YLeaf dscp_af21;
        static const ydk::Enum::YLeaf dscp_af22;
        static const ydk::Enum::YLeaf dscp_af23;
        static const ydk::Enum::YLeaf dscp_cs3;
        static const ydk::Enum::YLeaf dscp_af31;
        static const ydk::Enum::YLeaf dscp_af32;
        static const ydk::Enum::YLeaf dscp_af33;
        static const ydk::Enum::YLeaf dscp_cs4;
        static const ydk::Enum::YLeaf dscp_af41;
        static const ydk::Enum::YLeaf dscp_af42;
        static const ydk::Enum::YLeaf dscp_af43;
        static const ydk::Enum::YLeaf dscp_cs5;
        static const ydk::Enum::YLeaf dscp_ef;
        static const ydk::Enum::YLeaf dscp_cs6;
        static const ydk::Enum::YLeaf dscp_cs7;

};

class MdtSubsStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_active;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf paused;

};

class MdtIp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_OPER_ */

