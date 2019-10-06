#ifndef _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_OPER_
#define _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_object_tracking_oper {

class ObjectTracking : public ydk::Entity
{
    public:
        ObjectTracking();
        ~ObjectTracking();

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

        class TrackTypeInterface; //type: ObjectTracking::TrackTypeInterface
        class TrackBriefs; //type: ObjectTracking::TrackBriefs
        class TrackTypeRtrReachability; //type: ObjectTracking::TrackTypeRtrReachability
        class TrackTypeRtrReachabilityBrief; //type: ObjectTracking::TrackTypeRtrReachabilityBrief
        class Tracks; //type: ObjectTracking::Tracks
        class TrackTypeIpv4RouteBrief; //type: ObjectTracking::TrackTypeIpv4RouteBrief
        class TrackTypeIpv4Route; //type: ObjectTracking::TrackTypeIpv4Route
        class TrackTypeInterfaceBrief; //type: ObjectTracking::TrackTypeInterfaceBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface> track_type_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs> track_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability> track_type_rtr_reachability;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief> track_type_rtr_reachability_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks> tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief> track_type_ipv4_route_brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route> track_type_ipv4_route;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief> track_type_interface_brief;
        
}; // ObjectTracking


class ObjectTracking::TrackTypeInterface : public ydk::Entity
{
    public:
        TrackTypeInterface();
        ~TrackTypeInterface();

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

        class TrackInfo; //type: ObjectTracking::TrackTypeInterface::TrackInfo

        ydk::YList track_info;
        
}; // ObjectTracking::TrackTypeInterface


class ObjectTracking::TrackTypeInterface::TrackInfo : public ydk::Entity
{
    public:
        TrackInfo();
        ~TrackInfo();

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

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf state_change_counter; //type: uint32
        ydk::YLeaf seconds_last_change; //type: uint64
        ydk::YLeaf threshold_up; //type: uint32
        ydk::YLeaf threshold_down; //type: uint32
        class TrackTypeInfo; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo
        class BoolTracks; //type: ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks
        class ThresholdTracks; //type: ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks
        class TrackingInteraces; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces
        class Delayed; //type: ObjectTracking::TrackTypeInterface::TrackInfo::Delayed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo> track_type_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks> bool_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks> threshold_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces> tracking_interaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::Delayed> delayed;
        
}; // ObjectTracking::TrackTypeInterface::TrackInfo


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

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

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

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

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

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

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks


class ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks : public ydk::Entity
{
    public:
        BoolTracks();
        ~BoolTracks();

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

        class BoolTrackInfo; //type: ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo

        ydk::YList bool_track_info;
        
}; // ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks


class ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo : public ydk::Entity
{
    public:
        BoolTrackInfo();
        ~BoolTrackInfo();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf with_not; //type: boolean

}; // ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo


class ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks : public ydk::Entity
{
    public:
        ThresholdTracks();
        ~ThresholdTracks();

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

        class ThresholdTrackInfo; //type: ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo

        ydk::YList threshold_track_info;
        
}; // ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks


class ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo : public ydk::Entity
{
    public:
        ThresholdTrackInfo();
        ~ThresholdTrackInfo();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf weight; //type: uint32

}; // ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces : public ydk::Entity
{
    public:
        TrackingInteraces();
        ~TrackingInteraces();

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

        class InterfaceTrackingInfo; //type: ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo

        ydk::YList interface_tracking_info;
        
}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces


class ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo : public ydk::Entity
{
    public:
        InterfaceTrackingInfo();
        ~InterfaceTrackingInfo();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


class ObjectTracking::TrackTypeInterface::TrackInfo::Delayed : public ydk::Entity
{
    public:
        Delayed();
        ~Delayed();

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

        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf track_state; //type: boolean

}; // ObjectTracking::TrackTypeInterface::TrackInfo::Delayed


class ObjectTracking::TrackBriefs : public ydk::Entity
{
    public:
        TrackBriefs();
        ~TrackBriefs();

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

        class TrackBrief; //type: ObjectTracking::TrackBriefs::TrackBrief

        ydk::YList track_brief;
        
}; // ObjectTracking::TrackBriefs


class ObjectTracking::TrackBriefs::TrackBrief : public ydk::Entity
{
    public:
        TrackBrief();
        ~TrackBrief();

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

        ydk::YLeaf track_name; //type: string
        class TrackInfoBrief; //type: ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief

        ydk::YList track_info_brief;
        
}; // ObjectTracking::TrackBriefs::TrackBrief


class ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief : public ydk::Entity
{
    public:
        TrackInfoBrief();
        ~TrackInfoBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        class TrackTypeInfo; //type: ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;
        
}; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief


class ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo


class ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

}; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


class ObjectTracking::TrackTypeRtrReachability : public ydk::Entity
{
    public:
        TrackTypeRtrReachability();
        ~TrackTypeRtrReachability();

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

        class TrackInfo; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo

        ydk::YList track_info;
        
}; // ObjectTracking::TrackTypeRtrReachability


class ObjectTracking::TrackTypeRtrReachability::TrackInfo : public ydk::Entity
{
    public:
        TrackInfo();
        ~TrackInfo();

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

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf state_change_counter; //type: uint32
        ydk::YLeaf seconds_last_change; //type: uint64
        ydk::YLeaf threshold_up; //type: uint32
        ydk::YLeaf threshold_down; //type: uint32
        class TrackTypeInfo; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo
        class BoolTracks; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks
        class ThresholdTracks; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks
        class TrackingInteraces; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces
        class Delayed; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo> track_type_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks> bool_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks> threshold_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces> tracking_interaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed> delayed;
        
}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

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

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

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

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

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

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks : public ydk::Entity
{
    public:
        BoolTracks();
        ~BoolTracks();

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

        class BoolTrackInfo; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo

        ydk::YList bool_track_info;
        
}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo : public ydk::Entity
{
    public:
        BoolTrackInfo();
        ~BoolTrackInfo();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf with_not; //type: boolean

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks : public ydk::Entity
{
    public:
        ThresholdTracks();
        ~ThresholdTracks();

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

        class ThresholdTrackInfo; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo

        ydk::YList threshold_track_info;
        
}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo : public ydk::Entity
{
    public:
        ThresholdTrackInfo();
        ~ThresholdTrackInfo();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf weight; //type: uint32

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces : public ydk::Entity
{
    public:
        TrackingInteraces();
        ~TrackingInteraces();

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

        class InterfaceTrackingInfo; //type: ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo

        ydk::YList interface_tracking_info;
        
}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo : public ydk::Entity
{
    public:
        InterfaceTrackingInfo();
        ~InterfaceTrackingInfo();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


class ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed : public ydk::Entity
{
    public:
        Delayed();
        ~Delayed();

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

        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf track_state; //type: boolean

}; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed


class ObjectTracking::TrackTypeRtrReachabilityBrief : public ydk::Entity
{
    public:
        TrackTypeRtrReachabilityBrief();
        ~TrackTypeRtrReachabilityBrief();

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

        class TrackInfoBrief; //type: ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief

        ydk::YList track_info_brief;
        
}; // ObjectTracking::TrackTypeRtrReachabilityBrief


class ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief : public ydk::Entity
{
    public:
        TrackInfoBrief();
        ~TrackInfoBrief();

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

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        class TrackTypeInfo; //type: ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;
        
}; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief


class ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

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

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo


class ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

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

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

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

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


class ObjectTracking::Tracks : public ydk::Entity
{
    public:
        Tracks();
        ~Tracks();

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

        class Track; //type: ObjectTracking::Tracks::Track

        ydk::YList track;
        
}; // ObjectTracking::Tracks


class ObjectTracking::Tracks::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

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

        ydk::YLeaf track_name; //type: string
        class TrackInfo; //type: ObjectTracking::Tracks::Track::TrackInfo

        ydk::YList track_info;
        
}; // ObjectTracking::Tracks::Track


class ObjectTracking::Tracks::Track::TrackInfo : public ydk::Entity
{
    public:
        TrackInfo();
        ~TrackInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf state_change_counter; //type: uint32
        ydk::YLeaf seconds_last_change; //type: uint64
        ydk::YLeaf threshold_up; //type: uint32
        ydk::YLeaf threshold_down; //type: uint32
        class TrackTypeInfo; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo
        class BoolTracks; //type: ObjectTracking::Tracks::Track::TrackInfo::BoolTracks
        class ThresholdTracks; //type: ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks
        class TrackingInteraces; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces
        class Delayed; //type: ObjectTracking::Tracks::Track::TrackInfo::Delayed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo> track_type_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::BoolTracks> bool_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks> threshold_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces> tracking_interaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::Delayed> delayed;
        
}; // ObjectTracking::Tracks::Track::TrackInfo


class ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo


class ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

}; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks


class ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks


class ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks


class ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks


class ObjectTracking::Tracks::Track::TrackInfo::BoolTracks : public ydk::Entity
{
    public:
        BoolTracks();
        ~BoolTracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BoolTrackInfo; //type: ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo

        ydk::YList bool_track_info;
        
}; // ObjectTracking::Tracks::Track::TrackInfo::BoolTracks


class ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo : public ydk::Entity
{
    public:
        BoolTrackInfo();
        ~BoolTrackInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf with_not; //type: boolean

}; // ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo


class ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks : public ydk::Entity
{
    public:
        ThresholdTracks();
        ~ThresholdTracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThresholdTrackInfo; //type: ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo

        ydk::YList threshold_track_info;
        
}; // ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks


class ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo : public ydk::Entity
{
    public:
        ThresholdTrackInfo();
        ~ThresholdTrackInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf weight; //type: uint32

}; // ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo


class ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces : public ydk::Entity
{
    public:
        TrackingInteraces();
        ~TrackingInteraces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceTrackingInfo; //type: ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo

        ydk::YList interface_tracking_info;
        
}; // ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces


class ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo : public ydk::Entity
{
    public:
        InterfaceTrackingInfo();
        ~InterfaceTrackingInfo();

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

}; // ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


class ObjectTracking::Tracks::Track::TrackInfo::Delayed : public ydk::Entity
{
    public:
        Delayed();
        ~Delayed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf track_state; //type: boolean

}; // ObjectTracking::Tracks::Track::TrackInfo::Delayed


class ObjectTracking::TrackTypeIpv4RouteBrief : public ydk::Entity
{
    public:
        TrackTypeIpv4RouteBrief();
        ~TrackTypeIpv4RouteBrief();

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

        class TrackInfoBrief; //type: ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief

        ydk::YList track_info_brief;
        
}; // ObjectTracking::TrackTypeIpv4RouteBrief


class ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief : public ydk::Entity
{
    public:
        TrackInfoBrief();
        ~TrackInfoBrief();

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

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        class TrackTypeInfo; //type: ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;
        
}; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief


class ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

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

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo


class ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

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

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

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

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


class ObjectTracking::TrackTypeIpv4Route : public ydk::Entity
{
    public:
        TrackTypeIpv4Route();
        ~TrackTypeIpv4Route();

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

        class TrackInfo; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo

        ydk::YList track_info;
        
}; // ObjectTracking::TrackTypeIpv4Route


class ObjectTracking::TrackTypeIpv4Route::TrackInfo : public ydk::Entity
{
    public:
        TrackInfo();
        ~TrackInfo();

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

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf state_change_counter; //type: uint32
        ydk::YLeaf seconds_last_change; //type: uint64
        ydk::YLeaf threshold_up; //type: uint32
        ydk::YLeaf threshold_down; //type: uint32
        class TrackTypeInfo; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo
        class BoolTracks; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks
        class ThresholdTracks; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks
        class TrackingInteraces; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces
        class Delayed; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo> track_type_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks> bool_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks> threshold_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces> tracking_interaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed> delayed;
        
}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

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

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

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

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

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

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks : public ydk::Entity
{
    public:
        BoolTracks();
        ~BoolTracks();

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

        class BoolTrackInfo; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo

        ydk::YList bool_track_info;
        
}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo : public ydk::Entity
{
    public:
        BoolTrackInfo();
        ~BoolTrackInfo();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf with_not; //type: boolean

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks : public ydk::Entity
{
    public:
        ThresholdTracks();
        ~ThresholdTracks();

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

        class ThresholdTrackInfo; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo

        ydk::YList threshold_track_info;
        
}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo : public ydk::Entity
{
    public:
        ThresholdTrackInfo();
        ~ThresholdTrackInfo();

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

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf track_state; //type: boolean
        ydk::YLeaf weight; //type: uint32

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces : public ydk::Entity
{
    public:
        TrackingInteraces();
        ~TrackingInteraces();

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

        class InterfaceTrackingInfo; //type: ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo

        ydk::YList interface_tracking_info;
        
}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo : public ydk::Entity
{
    public:
        InterfaceTrackingInfo();
        ~InterfaceTrackingInfo();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


class ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed : public ydk::Entity
{
    public:
        Delayed();
        ~Delayed();

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

        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf track_state; //type: boolean

}; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed


class ObjectTracking::TrackTypeInterfaceBrief : public ydk::Entity
{
    public:
        TrackTypeInterfaceBrief();
        ~TrackTypeInterfaceBrief();

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

        class TrackInfoBrief; //type: ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief

        ydk::YList track_info_brief;
        
}; // ObjectTracking::TrackTypeInterfaceBrief


class ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief : public ydk::Entity
{
    public:
        TrackInfoBrief();
        ~TrackInfoBrief();

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

        ydk::YLeaf tracke_name; //type: string
        ydk::YLeaf type; //type: Track
        ydk::YLeaf track_state; //type: boolean
        class TrackTypeInfo; //type: ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;
        
}; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief


class ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo : public ydk::Entity
{
    public:
        TrackTypeInfo();
        ~TrackTypeInfo();

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

        ydk::YLeaf discriminant; //type: Track
        class InterfaceTracks; //type: ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks
        class RouteTracks; //type: ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks
        class IpslaTracks; //type: ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks
        class BfdTracks; //type: ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
        
}; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo


class ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks : public ydk::Entity
{
    public:
        InterfaceTracks();
        ~InterfaceTracks();

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

        ydk::YLeaf interface_name; //type: string

}; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


class ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks : public ydk::Entity
{
    public:
        RouteTracks();
        ~RouteTracks();

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

        ydk::YLeaf prefix; //type: uint32
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf next_hop; //type: string

}; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


class ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks : public ydk::Entity
{
    public:
        IpslaTracks();
        ~IpslaTracks();

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

        ydk::YLeaf ipsla_op_id; //type: uint32
        ydk::YLeaf rtt; //type: uint32
        ydk::YLeaf return_code; //type: uint32

}; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


class ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks : public ydk::Entity
{
    public:
        BfdTracks();
        ~BfdTracks();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf destination_address; //type: uint32
        ydk::YLeaf rate; //type: uint32
        ydk::YLeaf debounce_count; //type: uint32

}; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks

class Track : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface_type;
        static const ydk::Enum::YLeaf route_type;
        static const ydk::Enum::YLeaf bool_and_type;
        static const ydk::Enum::YLeaf bool_or_type;
        static const ydk::Enum::YLeaf ipsla_type;
        static const ydk::Enum::YLeaf undefined_type;
        static const ydk::Enum::YLeaf threshold_weight;
        static const ydk::Enum::YLeaf threshold_percentage;
        static const ydk::Enum::YLeaf bfd_type;

        static int get_enum_value(const std::string & name) {
            if (name == "interface-type") return 1;
            if (name == "route-type") return 2;
            if (name == "bool-and-type") return 3;
            if (name == "bool-or-type") return 4;
            if (name == "ipsla-type") return 5;
            if (name == "undefined-type") return 6;
            if (name == "threshold-weight") return 7;
            if (name == "threshold-percentage") return 8;
            if (name == "bfd-type") return 9;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_OPER_ */

