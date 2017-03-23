#ifndef _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_OPER_
#define _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_telemetry_model_driven_oper {

class TelemetryModelDriven : public Entity
{
    public:
        TelemetryModelDriven();
        ~TelemetryModelDriven();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Destinations; //type: TelemetryModelDriven::Destinations
        class Subscriptions; //type: TelemetryModelDriven::Subscriptions
        class SensorGroups; //type: TelemetryModelDriven::SensorGroups

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations> destinations;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::SensorGroups> sensor_groups;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions> subscriptions;


}; // TelemetryModelDriven


class TelemetryModelDriven::Destinations : public Entity
{
    public:
        Destinations();
        ~Destinations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Destination; //type: TelemetryModelDriven::Destinations::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination> > destination;


}; // TelemetryModelDriven::Destinations


class TelemetryModelDriven::Destinations::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf destination_id; //type: string
        YLeaf id; //type: string
        YLeaf configured; //type: uint32

        class Destination_; //type: TelemetryModelDriven::Destinations::Destination::Destination_

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_> > destination;


}; // TelemetryModelDriven::Destinations::Destination


class TelemetryModelDriven::Destinations::Destination::Destination_ : public Entity
{
    public:
        Destination_();
        ~Destination_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Destination__; //type: TelemetryModelDriven::Destinations::Destination::Destination_::Destination__
        class CollectionGroup; //type: TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup> > collection_group;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::Destination__> destination;


}; // TelemetryModelDriven::Destinations::Destination::Destination_


class TelemetryModelDriven::Destinations::Destination::Destination_::Destination__ : public Entity
{
    public:
        Destination__();
        ~Destination__();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf sub_id_str; //type: string
        YLeaf dest_port; //type: uint16
        YLeaf encoding; //type: MdtEncodingEnumEnum
        YLeaf transport; //type: MdtTransportEnumEnum
        YLeaf state; //type: uint32
        YLeaf tls; //type: uint32
        YLeaf tls_host; //type: string
        YLeaf total_num_of_packets_sent; //type: uint64
        YLeaf total_num_of_bytes_sent; //type: uint64
        YLeaf last_collection_time; //type: uint64
        YLeafList sub_id; //type: list of  uint64

        class DestIpAddress; //type: TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress> dest_ip_address;


}; // TelemetryModelDriven::Destinations::Destination::Destination_::Destination__


class TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress : public Entity
{
    public:
        DestIpAddress();
        ~DestIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_type; //type: MdtIpEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TelemetryModelDriven::Destinations::Destination::Destination_::Destination__::DestIpAddress


class TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup : public Entity
{
    public:
        CollectionGroup();
        ~CollectionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: uint64
        YLeaf cadence; //type: uint32
        YLeaf total_collections; //type: uint32
        YLeaf encoding; //type: MdtEncodingEnumEnum
        YLeaf last_collection_start_time; //type: uint64
        YLeaf last_collection_end_time; //type: uint64
        YLeaf max_collection_time; //type: uint32
        YLeaf min_collection_time; //type: uint32
        YLeaf min_total_time; //type: uint32
        YLeaf max_total_time; //type: uint32
        YLeaf avg_total_time; //type: uint32
        YLeaf total_other_errors; //type: uint32
        YLeaf total_not_ready; //type: uint32
        YLeaf total_send_errors; //type: uint32
        YLeaf total_send_drops; //type: uint32

        class CollectionPath; //type: TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath
        class InternalCollectionGroup; //type: TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath> > collection_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup> > internal_collection_group;


}; // TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup


class TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath : public Entity
{
    public:
        CollectionPath();
        ~CollectionPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string
        YLeaf state; //type: uint32
        YLeaf status_str; //type: string



}; // TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::CollectionPath


class TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup : public Entity
{
    public:
        InternalCollectionGroup();
        ~InternalCollectionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string
        YLeaf cadence; //type: uint64
        YLeaf total_get_count; //type: uint64
        YLeaf total_list_count; //type: uint64
        YLeaf total_datalist_count; //type: uint64
        YLeaf total_finddata_count; //type: uint64
        YLeaf total_get_bulk_count; //type: uint64
        YLeaf total_item_count; //type: uint64
        YLeaf total_get_errors; //type: uint64
        YLeaf total_list_errors; //type: uint64
        YLeaf total_datalist_errors; //type: uint64
        YLeaf total_finddata_errors; //type: uint64
        YLeaf total_get_bulk_errors; //type: uint64
        YLeaf total_encode_errors; //type: uint64
        YLeaf total_encode_notready; //type: uint64
        YLeaf total_send_errors; //type: uint64
        YLeaf total_send_drops; //type: uint64
        YLeaf total_sent_bytes; //type: uint64
        YLeaf total_send_packets; //type: uint64
        YLeaf total_send_bytes_dropped; //type: uint64
        YLeaf total_collections; //type: uint64
        YLeaf total_collections_missed; //type: uint64
        YLeaf max_collection_time; //type: uint64
        YLeaf min_collection_time; //type: uint64
        YLeaf avg_collection_time; //type: uint64
        YLeaf collection_method; //type: uint64
        YLeaf status; //type: MdtInternalPathStatusEnum



}; // TelemetryModelDriven::Destinations::Destination::Destination_::CollectionGroup::InternalCollectionGroup


class TelemetryModelDriven::Subscriptions : public Entity
{
    public:
        Subscriptions();
        ~Subscriptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Subscription; //type: TelemetryModelDriven::Subscriptions::Subscription

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription> > subscription;


}; // TelemetryModelDriven::Subscriptions


class TelemetryModelDriven::Subscriptions::Subscription : public Entity
{
    public:
        Subscription();
        ~Subscription();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf subscription_id; //type: string
        YLeaf total_num_of_packets_sent; //type: uint64
        YLeaf total_num_of_bytes_sent; //type: uint64

        class Subscription_; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_
        class CollectionGroup; //type: TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup> > collection_group;
        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_> subscription;


}; // TelemetryModelDriven::Subscriptions::Subscription


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_ : public Entity
{
    public:
        Subscription_();
        ~Subscription_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf state; //type: uint32

        class SensorProfile; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile
        class DestinationGrp; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp> > destination_grp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile> > sensor_profile;


}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile : public Entity
{
    public:
        SensorProfile();
        ~SensorProfile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sample_interval; //type: uint32
        YLeaf heartbeat_interval; //type: uint32
        YLeaf suppress_redundant; //type: boolean

        class SensorGroup; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup> sensor_group;


}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup : public Entity
{
    public:
        SensorGroup();
        ~SensorGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf configured; //type: uint32

        class SensorPath; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath> > sensor_path;


}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath : public Entity
{
    public:
        SensorPath();
        ~SensorPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string
        YLeaf state; //type: uint32
        YLeaf status_str; //type: string



}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::SensorProfile::SensorGroup::SensorPath


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp : public Entity
{
    public:
        DestinationGrp();
        ~DestinationGrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf configured; //type: uint32

        class Destination; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination> > destination;


}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination : public Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: string
        YLeaf sub_id_str; //type: string
        YLeaf dest_port; //type: uint16
        YLeaf encoding; //type: MdtEncodingEnumEnum
        YLeaf transport; //type: MdtTransportEnumEnum
        YLeaf state; //type: uint32
        YLeaf tls; //type: uint32
        YLeaf tls_host; //type: string
        YLeaf total_num_of_packets_sent; //type: uint64
        YLeaf total_num_of_bytes_sent; //type: uint64
        YLeaf last_collection_time; //type: uint64
        YLeafList sub_id; //type: list of  uint64

        class DestIpAddress; //type: TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress

        std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress> dest_ip_address;


}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination


class TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress : public Entity
{
    public:
        DestIpAddress();
        ~DestIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_type; //type: MdtIpEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // TelemetryModelDriven::Subscriptions::Subscription::Subscription_::DestinationGrp::Destination::DestIpAddress


class TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup : public Entity
{
    public:
        CollectionGroup();
        ~CollectionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf id; //type: uint64
        YLeaf cadence; //type: uint32
        YLeaf total_collections; //type: uint32
        YLeaf encoding; //type: MdtEncodingEnumEnum
        YLeaf last_collection_start_time; //type: uint64
        YLeaf last_collection_end_time; //type: uint64
        YLeaf max_collection_time; //type: uint32
        YLeaf min_collection_time; //type: uint32
        YLeaf min_total_time; //type: uint32
        YLeaf max_total_time; //type: uint32
        YLeaf avg_total_time; //type: uint32
        YLeaf total_other_errors; //type: uint32
        YLeaf total_not_ready; //type: uint32
        YLeaf total_send_errors; //type: uint32
        YLeaf total_send_drops; //type: uint32

        class CollectionPath; //type: TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath
        class InternalCollectionGroup; //type: TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath> > collection_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup> > internal_collection_group;


}; // TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup


class TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath : public Entity
{
    public:
        CollectionPath();
        ~CollectionPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string
        YLeaf state; //type: uint32
        YLeaf status_str; //type: string



}; // TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::CollectionPath


class TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup : public Entity
{
    public:
        InternalCollectionGroup();
        ~InternalCollectionGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string
        YLeaf cadence; //type: uint64
        YLeaf total_get_count; //type: uint64
        YLeaf total_list_count; //type: uint64
        YLeaf total_datalist_count; //type: uint64
        YLeaf total_finddata_count; //type: uint64
        YLeaf total_get_bulk_count; //type: uint64
        YLeaf total_item_count; //type: uint64
        YLeaf total_get_errors; //type: uint64
        YLeaf total_list_errors; //type: uint64
        YLeaf total_datalist_errors; //type: uint64
        YLeaf total_finddata_errors; //type: uint64
        YLeaf total_get_bulk_errors; //type: uint64
        YLeaf total_encode_errors; //type: uint64
        YLeaf total_encode_notready; //type: uint64
        YLeaf total_send_errors; //type: uint64
        YLeaf total_send_drops; //type: uint64
        YLeaf total_sent_bytes; //type: uint64
        YLeaf total_send_packets; //type: uint64
        YLeaf total_send_bytes_dropped; //type: uint64
        YLeaf total_collections; //type: uint64
        YLeaf total_collections_missed; //type: uint64
        YLeaf max_collection_time; //type: uint64
        YLeaf min_collection_time; //type: uint64
        YLeaf avg_collection_time; //type: uint64
        YLeaf collection_method; //type: uint64
        YLeaf status; //type: MdtInternalPathStatusEnum



}; // TelemetryModelDriven::Subscriptions::Subscription::CollectionGroup::InternalCollectionGroup


class TelemetryModelDriven::SensorGroups : public Entity
{
    public:
        SensorGroups();
        ~SensorGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SensorGroup; //type: TelemetryModelDriven::SensorGroups::SensorGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::SensorGroups::SensorGroup> > sensor_group;


}; // TelemetryModelDriven::SensorGroups


class TelemetryModelDriven::SensorGroups::SensorGroup : public Entity
{
    public:
        SensorGroup();
        ~SensorGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sensor_group_id; //type: string
        YLeaf id; //type: string
        YLeaf configured; //type: uint32

        class SensorPath; //type: TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath> > sensor_path;


}; // TelemetryModelDriven::SensorGroups::SensorGroup


class TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath : public Entity
{
    public:
        SensorPath();
        ~SensorPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf path; //type: string
        YLeaf state; //type: uint32
        YLeaf status_str; //type: string



}; // TelemetryModelDriven::SensorGroups::SensorGroup::SensorPath

class MdtInternalPathStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf internal_err;
        static const Enum::YLeaf plugin_active;
        static const Enum::YLeaf plugin_not_initialized;
        static const Enum::YLeaf plugin_invalid_cadence;
        static const Enum::YLeaf plugin_err;
        static const Enum::YLeaf filter_err;

};

class MdtTransportEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf grpc;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf dialin;

};

class MdtEncodingEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf gpb;
        static const Enum::YLeaf self_describing_gpb;
        static const Enum::YLeaf json;

};

class MdtIpEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_TELEMETRY_MODEL_DRIVEN_OPER_ */

