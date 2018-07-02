
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_object_tracking_oper {

ObjectTracking::ObjectTracking()
    :
    track_type_interface(std::make_shared<ObjectTracking::TrackTypeInterface>())
    , track_briefs(std::make_shared<ObjectTracking::TrackBriefs>())
    , track_type_rtr_reachability(std::make_shared<ObjectTracking::TrackTypeRtrReachability>())
    , track_type_rtr_reachability_brief(std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief>())
    , tracks(std::make_shared<ObjectTracking::Tracks>())
    , track_type_ipv4_route_brief(std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief>())
    , track_type_ipv4_route(std::make_shared<ObjectTracking::TrackTypeIpv4Route>())
    , track_type_interface_brief(std::make_shared<ObjectTracking::TrackTypeInterfaceBrief>())
{
    track_type_interface->parent = this;
    track_briefs->parent = this;
    track_type_rtr_reachability->parent = this;
    track_type_rtr_reachability_brief->parent = this;
    tracks->parent = this;
    track_type_ipv4_route_brief->parent = this;
    track_type_ipv4_route->parent = this;
    track_type_interface_brief->parent = this;

    yang_name = "object-tracking"; yang_parent_name = "Cisco-IOS-XR-manageability-object-tracking-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

ObjectTracking::~ObjectTracking()
{
}

bool ObjectTracking::has_data() const
{
    if (is_presence_container) return true;
    return (track_type_interface !=  nullptr && track_type_interface->has_data())
	|| (track_briefs !=  nullptr && track_briefs->has_data())
	|| (track_type_rtr_reachability !=  nullptr && track_type_rtr_reachability->has_data())
	|| (track_type_rtr_reachability_brief !=  nullptr && track_type_rtr_reachability_brief->has_data())
	|| (tracks !=  nullptr && tracks->has_data())
	|| (track_type_ipv4_route_brief !=  nullptr && track_type_ipv4_route_brief->has_data())
	|| (track_type_ipv4_route !=  nullptr && track_type_ipv4_route->has_data())
	|| (track_type_interface_brief !=  nullptr && track_type_interface_brief->has_data());
}

bool ObjectTracking::has_operation() const
{
    return is_set(yfilter)
	|| (track_type_interface !=  nullptr && track_type_interface->has_operation())
	|| (track_briefs !=  nullptr && track_briefs->has_operation())
	|| (track_type_rtr_reachability !=  nullptr && track_type_rtr_reachability->has_operation())
	|| (track_type_rtr_reachability_brief !=  nullptr && track_type_rtr_reachability_brief->has_operation())
	|| (tracks !=  nullptr && tracks->has_operation())
	|| (track_type_ipv4_route_brief !=  nullptr && track_type_ipv4_route_brief->has_operation())
	|| (track_type_ipv4_route !=  nullptr && track_type_ipv4_route->has_operation())
	|| (track_type_interface_brief !=  nullptr && track_type_interface_brief->has_operation());
}

std::string ObjectTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-interface")
    {
        if(track_type_interface == nullptr)
        {
            track_type_interface = std::make_shared<ObjectTracking::TrackTypeInterface>();
        }
        return track_type_interface;
    }

    if(child_yang_name == "track-briefs")
    {
        if(track_briefs == nullptr)
        {
            track_briefs = std::make_shared<ObjectTracking::TrackBriefs>();
        }
        return track_briefs;
    }

    if(child_yang_name == "track-type-rtr-reachability")
    {
        if(track_type_rtr_reachability == nullptr)
        {
            track_type_rtr_reachability = std::make_shared<ObjectTracking::TrackTypeRtrReachability>();
        }
        return track_type_rtr_reachability;
    }

    if(child_yang_name == "track-type-rtr-reachability-brief")
    {
        if(track_type_rtr_reachability_brief == nullptr)
        {
            track_type_rtr_reachability_brief = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief>();
        }
        return track_type_rtr_reachability_brief;
    }

    if(child_yang_name == "tracks")
    {
        if(tracks == nullptr)
        {
            tracks = std::make_shared<ObjectTracking::Tracks>();
        }
        return tracks;
    }

    if(child_yang_name == "track-type-ipv4-route-brief")
    {
        if(track_type_ipv4_route_brief == nullptr)
        {
            track_type_ipv4_route_brief = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief>();
        }
        return track_type_ipv4_route_brief;
    }

    if(child_yang_name == "track-type-ipv4-route")
    {
        if(track_type_ipv4_route == nullptr)
        {
            track_type_ipv4_route = std::make_shared<ObjectTracking::TrackTypeIpv4Route>();
        }
        return track_type_ipv4_route;
    }

    if(child_yang_name == "track-type-interface-brief")
    {
        if(track_type_interface_brief == nullptr)
        {
            track_type_interface_brief = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief>();
        }
        return track_type_interface_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_interface != nullptr)
    {
        children["track-type-interface"] = track_type_interface;
    }

    if(track_briefs != nullptr)
    {
        children["track-briefs"] = track_briefs;
    }

    if(track_type_rtr_reachability != nullptr)
    {
        children["track-type-rtr-reachability"] = track_type_rtr_reachability;
    }

    if(track_type_rtr_reachability_brief != nullptr)
    {
        children["track-type-rtr-reachability-brief"] = track_type_rtr_reachability_brief;
    }

    if(tracks != nullptr)
    {
        children["tracks"] = tracks;
    }

    if(track_type_ipv4_route_brief != nullptr)
    {
        children["track-type-ipv4-route-brief"] = track_type_ipv4_route_brief;
    }

    if(track_type_ipv4_route != nullptr)
    {
        children["track-type-ipv4-route"] = track_type_ipv4_route;
    }

    if(track_type_interface_brief != nullptr)
    {
        children["track-type-interface-brief"] = track_type_interface_brief;
    }

    return children;
}

void ObjectTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ObjectTracking::clone_ptr() const
{
    return std::make_shared<ObjectTracking>();
}

std::string ObjectTracking::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ObjectTracking::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ObjectTracking::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ObjectTracking::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ObjectTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-interface" || name == "track-briefs" || name == "track-type-rtr-reachability" || name == "track-type-rtr-reachability-brief" || name == "tracks" || name == "track-type-ipv4-route-brief" || name == "track-type-ipv4-route" || name == "track-type-interface-brief")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackTypeInterface()
    :
    track_info(this, {})
{

    yang_name = "track-type-interface"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::~TrackTypeInterface()
{
}

bool ObjectTracking::TrackTypeInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::has_operation() const
{
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo>();
        c->parent = this;
        track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackInfo()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"},
    state_change_counter{YType::uint32, "state-change-counter"},
    seconds_last_change{YType::uint64, "seconds-last-change"},
    threshold_up{YType::uint32, "threshold-up"},
    threshold_down{YType::uint32, "threshold-down"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo>())
    , bool_tracks(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks>())
    , threshold_tracks(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks>())
    , tracking_interaces(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces>())
    , delayed(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::Delayed>())
{
    track_type_info->parent = this;
    bool_tracks->parent = this;
    threshold_tracks->parent = this;
    tracking_interaces->parent = this;
    delayed->parent = this;

    yang_name = "track-info"; yang_parent_name = "track-type-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| state_change_counter.is_set
	|| seconds_last_change.is_set
	|| threshold_up.is_set
	|| threshold_down.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data())
	|| (delayed !=  nullptr && delayed->has_data());
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(state_change_counter.yfilter)
	|| ydk::is_set(seconds_last_change.yfilter)
	|| ydk::is_set(threshold_up.yfilter)
	|| ydk::is_set(threshold_down.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation())
	|| (bool_tracks !=  nullptr && bool_tracks->has_operation())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_operation())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_operation())
	|| (delayed !=  nullptr && delayed->has_operation());
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.yfilter)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (seconds_last_change.is_set || is_set(seconds_last_change.yfilter)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.yfilter)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.yfilter)) leaf_name_data.push_back(threshold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo>();
        }
        return track_type_info;
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks == nullptr)
        {
            bool_tracks = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks>();
        }
        return bool_tracks;
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks == nullptr)
        {
            threshold_tracks = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks>();
        }
        return threshold_tracks;
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces == nullptr)
        {
            tracking_interaces = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces>();
        }
        return tracking_interaces;
    }

    if(child_yang_name == "delayed")
    {
        if(delayed == nullptr)
        {
            delayed = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::Delayed>();
        }
        return delayed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    if(bool_tracks != nullptr)
    {
        children["bool-tracks"] = bool_tracks;
    }

    if(threshold_tracks != nullptr)
    {
        children["threshold-tracks"] = threshold_tracks;
    }

    if(tracking_interaces != nullptr)
    {
        children["tracking-interaces"] = tracking_interaces;
    }

    if(delayed != nullptr)
    {
        children["delayed"] = delayed;
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
        state_change_counter.value_namespace = name_space;
        state_change_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
        seconds_last_change.value_namespace = name_space;
        seconds_last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
        threshold_up.value_namespace = name_space;
        threshold_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
        threshold_down.value_namespace = name_space;
        threshold_down.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter.yfilter = yfilter;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change.yfilter = yfilter;
    }
    if(value_path == "threshold-up")
    {
        threshold_up.yfilter = yfilter;
    }
    if(value_path == "threshold-down")
    {
        threshold_down.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "bool-tracks" || name == "threshold-tracks" || name == "tracking-interaces" || name == "delayed" || name == "tracke-name" || name == "type" || name == "track-state" || name == "state-change-counter" || name == "seconds-last-change" || name == "threshold-up" || name == "threshold-down")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTracks()
    :
    bool_track_info(this, {})
{

    yang_name = "bool-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bool-track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bool_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bool-track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    with_not{YType::boolean, "with-not"}
{

    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(with_not.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/bool-tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.yfilter)) leaf_name_data.push_back(with_not.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-not")
    {
        with_not = value;
        with_not.value_namespace = name_space;
        with_not.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "with-not")
    {
        with_not.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "with-not")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTracks()
    :
    threshold_track_info(this, {})
{

    yang_name = "threshold-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    weight{YType::uint32, "weight"}
{

    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/threshold-tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "weight")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::TrackingInteraces()
    :
    interface_tracking_info(this, {})
{

    yang_name = "tracking-interaces"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracking-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_tracking_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracking-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/tracking-interaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::Delayed()
    :
    time_remaining{YType::uint32, "time-remaining"},
    track_state{YType::boolean, "track-state"}
{

    yang_name = "delayed"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::has_data() const
{
    if (is_presence_container) return true;
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| ydk::is_set(track_state.yfilter);
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterface::TrackInfo::Delayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-remaining" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBriefs()
    :
    track_brief(this, {"track_name"})
{

    yang_name = "track-briefs"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackBriefs::~TrackBriefs()
{
}

bool ObjectTracking::TrackBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_brief.len(); index++)
    {
        if(track_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackBriefs::has_operation() const
{
    for (std::size_t index=0; index<track_brief.len(); index++)
    {
        if(track_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-brief")
    {
        auto c = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief>();
        c->parent = this;
        track_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-brief")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackBrief()
    :
    track_name{YType::str, "track-name"}
        ,
    track_info_brief(this, {})
{

    yang_name = "track-brief"; yang_parent_name = "track-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackBriefs::TrackBrief::~TrackBrief()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return track_name.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(track_name.yfilter);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackBriefs::TrackBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-brief";
    ADD_KEY_TOKEN(track_name, "track-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info-brief")
    {
        auto c = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info-brief" || name == "track-name")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackInfoBrief()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;

    yang_name = "track-info-brief"; yang_parent_name = "track-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation());
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo>();
        }
        return track_type_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "tracke-name" || name == "type" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackTypeRtrReachability()
    :
    track_info(this, {})
{

    yang_name = "track-type-rtr-reachability"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::~TrackTypeRtrReachability()
{
}

bool ObjectTracking::TrackTypeRtrReachability::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::has_operation() const
{
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-rtr-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo>();
        c->parent = this;
        track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeRtrReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeRtrReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackInfo()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"},
    state_change_counter{YType::uint32, "state-change-counter"},
    seconds_last_change{YType::uint64, "seconds-last-change"},
    threshold_up{YType::uint32, "threshold-up"},
    threshold_down{YType::uint32, "threshold-down"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo>())
    , bool_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks>())
    , threshold_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks>())
    , tracking_interaces(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces>())
    , delayed(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed>())
{
    track_type_info->parent = this;
    bool_tracks->parent = this;
    threshold_tracks->parent = this;
    tracking_interaces->parent = this;
    delayed->parent = this;

    yang_name = "track-info"; yang_parent_name = "track-type-rtr-reachability"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| state_change_counter.is_set
	|| seconds_last_change.is_set
	|| threshold_up.is_set
	|| threshold_down.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data())
	|| (delayed !=  nullptr && delayed->has_data());
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(state_change_counter.yfilter)
	|| ydk::is_set(seconds_last_change.yfilter)
	|| ydk::is_set(threshold_up.yfilter)
	|| ydk::is_set(threshold_down.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation())
	|| (bool_tracks !=  nullptr && bool_tracks->has_operation())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_operation())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_operation())
	|| (delayed !=  nullptr && delayed->has_operation());
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.yfilter)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (seconds_last_change.is_set || is_set(seconds_last_change.yfilter)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.yfilter)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.yfilter)) leaf_name_data.push_back(threshold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo>();
        }
        return track_type_info;
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks == nullptr)
        {
            bool_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks>();
        }
        return bool_tracks;
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks == nullptr)
        {
            threshold_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks>();
        }
        return threshold_tracks;
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces == nullptr)
        {
            tracking_interaces = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces>();
        }
        return tracking_interaces;
    }

    if(child_yang_name == "delayed")
    {
        if(delayed == nullptr)
        {
            delayed = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed>();
        }
        return delayed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    if(bool_tracks != nullptr)
    {
        children["bool-tracks"] = bool_tracks;
    }

    if(threshold_tracks != nullptr)
    {
        children["threshold-tracks"] = threshold_tracks;
    }

    if(tracking_interaces != nullptr)
    {
        children["tracking-interaces"] = tracking_interaces;
    }

    if(delayed != nullptr)
    {
        children["delayed"] = delayed;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
        state_change_counter.value_namespace = name_space;
        state_change_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
        seconds_last_change.value_namespace = name_space;
        seconds_last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
        threshold_up.value_namespace = name_space;
        threshold_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
        threshold_down.value_namespace = name_space;
        threshold_down.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter.yfilter = yfilter;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change.yfilter = yfilter;
    }
    if(value_path == "threshold-up")
    {
        threshold_up.yfilter = yfilter;
    }
    if(value_path == "threshold-down")
    {
        threshold_down.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "bool-tracks" || name == "threshold-tracks" || name == "tracking-interaces" || name == "delayed" || name == "tracke-name" || name == "type" || name == "track-state" || name == "state-change-counter" || name == "seconds-last-change" || name == "threshold-up" || name == "threshold-down")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTracks()
    :
    bool_track_info(this, {})
{

    yang_name = "bool-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bool-track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bool_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bool-track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    with_not{YType::boolean, "with-not"}
{

    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(with_not.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/bool-tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.yfilter)) leaf_name_data.push_back(with_not.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-not")
    {
        with_not = value;
        with_not.value_namespace = name_space;
        with_not.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "with-not")
    {
        with_not.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "with-not")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTracks()
    :
    threshold_track_info(this, {})
{

    yang_name = "threshold-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    weight{YType::uint32, "weight"}
{

    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/threshold-tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "weight")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::TrackingInteraces()
    :
    interface_tracking_info(this, {})
{

    yang_name = "tracking-interaces"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracking-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_tracking_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracking-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/tracking-interaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::Delayed()
    :
    time_remaining{YType::uint32, "time-remaining"},
    track_state{YType::boolean, "track-state"}
{

    yang_name = "delayed"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::has_data() const
{
    if (is_presence_container) return true;
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| ydk::is_set(track_state.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-remaining" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackTypeRtrReachabilityBrief()
    :
    track_info_brief(this, {})
{

    yang_name = "track-type-rtr-reachability-brief"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::~TrackTypeRtrReachabilityBrief()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-rtr-reachability-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info-brief")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info-brief")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackInfoBrief()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;

    yang_name = "track-info-brief"; yang_parent_name = "track-type-rtr-reachability-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation());
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo>();
        }
        return track_type_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "tracke-name" || name == "type" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-rtr-reachability-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::Tracks::Tracks()
    :
    track(this, {"track_name"})
{

    yang_name = "tracks"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::Tracks::~Tracks()
{
}

bool ObjectTracking::Tracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::has_operation() const
{
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::Tracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::Tracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        auto c = std::make_shared<ObjectTracking::Tracks::Track>();
        c->parent = this;
        track.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::Tracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::Tracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::Tracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::Track()
    :
    track_name{YType::str, "track-name"}
        ,
    track_info(this, {})
{

    yang_name = "track"; yang_parent_name = "tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::Tracks::Track::~Track()
{
}

bool ObjectTracking::Tracks::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return track_name.is_set;
}

bool ObjectTracking::Tracks::Track::has_operation() const
{
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(track_name.yfilter);
}

std::string ObjectTracking::Tracks::Track::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::Tracks::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    ADD_KEY_TOKEN(track_name, "track-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info")
    {
        auto c = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo>();
        c->parent = this;
        track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::Tracks::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info" || name == "track-name")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackInfo()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"},
    state_change_counter{YType::uint32, "state-change-counter"},
    seconds_last_change{YType::uint64, "seconds-last-change"},
    threshold_up{YType::uint32, "threshold-up"},
    threshold_down{YType::uint32, "threshold-down"}
        ,
    track_type_info(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo>())
    , bool_tracks(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::BoolTracks>())
    , threshold_tracks(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks>())
    , tracking_interaces(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces>())
    , delayed(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::Delayed>())
{
    track_type_info->parent = this;
    bool_tracks->parent = this;
    threshold_tracks->parent = this;
    tracking_interaces->parent = this;
    delayed->parent = this;

    yang_name = "track-info"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| state_change_counter.is_set
	|| seconds_last_change.is_set
	|| threshold_up.is_set
	|| threshold_down.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data())
	|| (delayed !=  nullptr && delayed->has_data());
}

bool ObjectTracking::Tracks::Track::TrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(state_change_counter.yfilter)
	|| ydk::is_set(seconds_last_change.yfilter)
	|| ydk::is_set(threshold_up.yfilter)
	|| ydk::is_set(threshold_down.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation())
	|| (bool_tracks !=  nullptr && bool_tracks->has_operation())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_operation())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_operation())
	|| (delayed !=  nullptr && delayed->has_operation());
}

std::string ObjectTracking::Tracks::Track::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.yfilter)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (seconds_last_change.is_set || is_set(seconds_last_change.yfilter)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.yfilter)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.yfilter)) leaf_name_data.push_back(threshold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo>();
        }
        return track_type_info;
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks == nullptr)
        {
            bool_tracks = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::BoolTracks>();
        }
        return bool_tracks;
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks == nullptr)
        {
            threshold_tracks = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks>();
        }
        return threshold_tracks;
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces == nullptr)
        {
            tracking_interaces = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces>();
        }
        return tracking_interaces;
    }

    if(child_yang_name == "delayed")
    {
        if(delayed == nullptr)
        {
            delayed = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::Delayed>();
        }
        return delayed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    if(bool_tracks != nullptr)
    {
        children["bool-tracks"] = bool_tracks;
    }

    if(threshold_tracks != nullptr)
    {
        children["threshold-tracks"] = threshold_tracks;
    }

    if(tracking_interaces != nullptr)
    {
        children["tracking-interaces"] = tracking_interaces;
    }

    if(delayed != nullptr)
    {
        children["delayed"] = delayed;
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
        state_change_counter.value_namespace = name_space;
        state_change_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
        seconds_last_change.value_namespace = name_space;
        seconds_last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
        threshold_up.value_namespace = name_space;
        threshold_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
        threshold_down.value_namespace = name_space;
        threshold_down.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter.yfilter = yfilter;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change.yfilter = yfilter;
    }
    if(value_path == "threshold-up")
    {
        threshold_up.yfilter = yfilter;
    }
    if(value_path == "threshold-down")
    {
        threshold_down.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "bool-tracks" || name == "threshold-tracks" || name == "tracking-interaces" || name == "delayed" || name == "tracke-name" || name == "type" || name == "track-state" || name == "state-change-counter" || name == "seconds-last-change" || name == "threshold-up" || name == "threshold-down")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTracks()
    :
    bool_track_info(this, {})
{

    yang_name = "bool-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bool-track-info")
    {
        auto c = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bool_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bool-track-info")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    with_not{YType::boolean, "with-not"}
{

    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(with_not.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.yfilter)) leaf_name_data.push_back(with_not.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-not")
    {
        with_not = value;
        with_not.value_namespace = name_space;
        with_not.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "with-not")
    {
        with_not.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "with-not")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTracks()
    :
    threshold_track_info(this, {})
{

    yang_name = "threshold-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-track-info")
    {
        auto c = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-track-info")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    weight{YType::uint32, "weight"}
{

    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "weight")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::TrackingInteraces()
    :
    interface_tracking_info(this, {})
{

    yang_name = "tracking-interaces"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracking-info")
    {
        auto c = std::make_shared<ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_tracking_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracking-info")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::Tracks::Track::TrackInfo::Delayed::Delayed()
    :
    time_remaining{YType::uint32, "time-remaining"},
    track_state{YType::boolean, "track-state"}
{

    yang_name = "delayed"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTracking::Tracks::Track::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::Tracks::Track::TrackInfo::Delayed::has_data() const
{
    if (is_presence_container) return true;
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::Tracks::Track::TrackInfo::Delayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| ydk::is_set(track_state.yfilter);
}

std::string ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::Tracks::Track::TrackInfo::Delayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::Tracks::Track::TrackInfo::Delayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::Tracks::Track::TrackInfo::Delayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::Tracks::Track::TrackInfo::Delayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-remaining" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackTypeIpv4RouteBrief()
    :
    track_info_brief(this, {})
{

    yang_name = "track-type-ipv4-route-brief"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::~TrackTypeIpv4RouteBrief()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-ipv4-route-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info-brief")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeIpv4RouteBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info-brief")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackInfoBrief()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;

    yang_name = "track-info-brief"; yang_parent_name = "track-type-ipv4-route-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation());
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo>();
        }
        return track_type_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "tracke-name" || name == "type" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackTypeIpv4Route()
    :
    track_info(this, {})
{

    yang_name = "track-type-ipv4-route"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::~TrackTypeIpv4Route()
{
}

bool ObjectTracking::TrackTypeIpv4Route::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::has_operation() const
{
    for (std::size_t index=0; index<track_info.len(); index++)
    {
        if(track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-ipv4-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo>();
        c->parent = this;
        track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeIpv4Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeIpv4Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackInfo()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"},
    state_change_counter{YType::uint32, "state-change-counter"},
    seconds_last_change{YType::uint64, "seconds-last-change"},
    threshold_up{YType::uint32, "threshold-up"},
    threshold_down{YType::uint32, "threshold-down"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo>())
    , bool_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks>())
    , threshold_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks>())
    , tracking_interaces(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces>())
    , delayed(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed>())
{
    track_type_info->parent = this;
    bool_tracks->parent = this;
    threshold_tracks->parent = this;
    tracking_interaces->parent = this;
    delayed->parent = this;

    yang_name = "track-info"; yang_parent_name = "track-type-ipv4-route"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::~TrackInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| state_change_counter.is_set
	|| seconds_last_change.is_set
	|| threshold_up.is_set
	|| threshold_down.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data())
	|| (bool_tracks !=  nullptr && bool_tracks->has_data())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_data())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_data())
	|| (delayed !=  nullptr && delayed->has_data());
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(state_change_counter.yfilter)
	|| ydk::is_set(seconds_last_change.yfilter)
	|| ydk::is_set(threshold_up.yfilter)
	|| ydk::is_set(threshold_down.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation())
	|| (bool_tracks !=  nullptr && bool_tracks->has_operation())
	|| (threshold_tracks !=  nullptr && threshold_tracks->has_operation())
	|| (tracking_interaces !=  nullptr && tracking_interaces->has_operation())
	|| (delayed !=  nullptr && delayed->has_operation());
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (state_change_counter.is_set || is_set(state_change_counter.yfilter)) leaf_name_data.push_back(state_change_counter.get_name_leafdata());
    if (seconds_last_change.is_set || is_set(seconds_last_change.yfilter)) leaf_name_data.push_back(seconds_last_change.get_name_leafdata());
    if (threshold_up.is_set || is_set(threshold_up.yfilter)) leaf_name_data.push_back(threshold_up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.yfilter)) leaf_name_data.push_back(threshold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo>();
        }
        return track_type_info;
    }

    if(child_yang_name == "bool-tracks")
    {
        if(bool_tracks == nullptr)
        {
            bool_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks>();
        }
        return bool_tracks;
    }

    if(child_yang_name == "threshold-tracks")
    {
        if(threshold_tracks == nullptr)
        {
            threshold_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks>();
        }
        return threshold_tracks;
    }

    if(child_yang_name == "tracking-interaces")
    {
        if(tracking_interaces == nullptr)
        {
            tracking_interaces = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces>();
        }
        return tracking_interaces;
    }

    if(child_yang_name == "delayed")
    {
        if(delayed == nullptr)
        {
            delayed = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed>();
        }
        return delayed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    if(bool_tracks != nullptr)
    {
        children["bool-tracks"] = bool_tracks;
    }

    if(threshold_tracks != nullptr)
    {
        children["threshold-tracks"] = threshold_tracks;
    }

    if(tracking_interaces != nullptr)
    {
        children["tracking-interaces"] = tracking_interaces;
    }

    if(delayed != nullptr)
    {
        children["delayed"] = delayed;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter = value;
        state_change_counter.value_namespace = name_space;
        state_change_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change = value;
        seconds_last_change.value_namespace = name_space;
        seconds_last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-up")
    {
        threshold_up = value;
        threshold_up.value_namespace = name_space;
        threshold_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
        threshold_down.value_namespace = name_space;
        threshold_down.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "state-change-counter")
    {
        state_change_counter.yfilter = yfilter;
    }
    if(value_path == "seconds-last-change")
    {
        seconds_last_change.yfilter = yfilter;
    }
    if(value_path == "threshold-up")
    {
        threshold_up.yfilter = yfilter;
    }
    if(value_path == "threshold-down")
    {
        threshold_down.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "bool-tracks" || name == "threshold-tracks" || name == "tracking-interaces" || name == "delayed" || name == "tracke-name" || name == "type" || name == "track-state" || name == "state-change-counter" || name == "seconds-last-change" || name == "threshold-up" || name == "threshold-down")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTracks()
    :
    bool_track_info(this, {})
{

    yang_name = "bool-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::~BoolTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::has_operation() const
{
    for (std::size_t index=0; index<bool_track_info.len(); index++)
    {
        if(bool_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bool-track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo>();
        c->parent = this;
        bool_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bool_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bool-track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::BoolTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    with_not{YType::boolean, "with-not"}
{

    yang_name = "bool-track-info"; yang_parent_name = "bool-tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::~BoolTrackInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| with_not.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(with_not.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/bool-tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bool-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (with_not.is_set || is_set(with_not.yfilter)) leaf_name_data.push_back(with_not.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "with-not")
    {
        with_not = value;
        with_not.value_namespace = name_space;
        with_not.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "with-not")
    {
        with_not.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "with-not")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTracks()
    :
    threshold_track_info(this, {})
{

    yang_name = "threshold-tracks"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::~ThresholdTracks()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::has_operation() const
{
    for (std::size_t index=0; index<threshold_track_info.len(); index++)
    {
        if(threshold_track_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-track-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo>();
        c->parent = this;
        threshold_track_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold_track_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-track-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::ThresholdTrackInfo()
    :
    object_name{YType::str, "object-name"},
    track_state{YType::boolean, "track-state"},
    weight{YType::uint32, "weight"}
{

    yang_name = "threshold-track-info"; yang_parent_name = "threshold-tracks"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::~ThresholdTrackInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| track_state.is_set
	|| weight.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/threshold-tracks/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-track-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "track-state" || name == "weight")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::TrackingInteraces()
    :
    interface_tracking_info(this, {})
{

    yang_name = "tracking-interaces"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::~TrackingInteraces()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::has_operation() const
{
    for (std::size_t index=0; index<interface_tracking_info.len(); index++)
    {
        if(interface_tracking_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking-interaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracking-info")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo>();
        c->parent = this;
        interface_tracking_info.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_tracking_info.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracking-info")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::InterfaceTrackingInfo()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracking-info"; yang_parent_name = "tracking-interaces"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::~InterfaceTrackingInfo()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/tracking-interaces/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracking-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::Delayed()
    :
    time_remaining{YType::uint32, "time-remaining"},
    track_state{YType::boolean, "track-state"}
{

    yang_name = "delayed"; yang_parent_name = "track-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::~Delayed()
{
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::has_data() const
{
    if (is_presence_container) return true;
    return time_remaining.is_set
	|| track_state.is_set;
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_remaining.yfilter)
	|| ydk::is_set(track_state.yfilter);
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-ipv4-route/track-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_remaining.is_set || is_set(time_remaining.yfilter)) leaf_name_data.push_back(time_remaining.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-remaining")
    {
        time_remaining = value;
        time_remaining.value_namespace = name_space;
        time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-remaining")
    {
        time_remaining.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-remaining" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackTypeInterfaceBrief()
    :
    track_info_brief(this, {})
{

    yang_name = "track-type-interface-brief"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::~TrackTypeInterfaceBrief()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTracking::TrackTypeInterfaceBrief::has_operation() const
{
    for (std::size_t index=0; index<track_info_brief.len(); index++)
    {
        if(track_info_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-interface-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-info-brief")
    {
        auto c = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief>();
        c->parent = this;
        track_info_brief.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : track_info_brief.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTracking::TrackTypeInterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-info-brief")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackInfoBrief()
    :
    tracke_name{YType::str, "tracke-name"},
    type{YType::enumeration, "type"},
    track_state{YType::boolean, "track-state"}
        ,
    track_type_info(std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo>())
{
    track_type_info->parent = this;

    yang_name = "track-info-brief"; yang_parent_name = "track-type-interface-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::~TrackInfoBrief()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::has_data() const
{
    if (is_presence_container) return true;
    return tracke_name.is_set
	|| type.is_set
	|| track_state.is_set
	|| (track_type_info !=  nullptr && track_type_info->has_data());
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracke_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(track_state.yfilter)
	|| (track_type_info !=  nullptr && track_type_info->has_operation());
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-info-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracke_name.is_set || is_set(tracke_name.yfilter)) leaf_name_data.push_back(tracke_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (track_state.is_set || is_set(track_state.yfilter)) leaf_name_data.push_back(track_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track-type-info")
    {
        if(track_type_info == nullptr)
        {
            track_type_info = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo>();
        }
        return track_type_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(track_type_info != nullptr)
    {
        children["track-type-info"] = track_type_info;
    }

    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracke-name")
    {
        tracke_name = value;
        tracke_name.value_namespace = name_space;
        tracke_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track-state")
    {
        track_state = value;
        track_state.value_namespace = name_space;
        track_state.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracke-name")
    {
        tracke_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "track-state")
    {
        track_state.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-type-info" || name == "tracke-name" || name == "type" || name == "track-state")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::TrackTypeInfo()
    :
    discriminant{YType::enumeration, "discriminant"}
        ,
    interface_tracks(std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>())
    , route_tracks(std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>())
    , ipsla_tracks(std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>())
    , bfd_tracks(std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>())
{
    interface_tracks->parent = this;
    route_tracks->parent = this;
    ipsla_tracks->parent = this;
    bfd_tracks->parent = this;

    yang_name = "track-type-info"; yang_parent_name = "track-info-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::~TrackTypeInfo()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::has_data() const
{
    if (is_presence_container) return true;
    return discriminant.is_set
	|| (interface_tracks !=  nullptr && interface_tracks->has_data())
	|| (route_tracks !=  nullptr && route_tracks->has_data())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_data())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_data());
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discriminant.yfilter)
	|| (interface_tracks !=  nullptr && interface_tracks->has_operation())
	|| (route_tracks !=  nullptr && route_tracks->has_operation())
	|| (ipsla_tracks !=  nullptr && ipsla_tracks->has_operation())
	|| (bfd_tracks !=  nullptr && bfd_tracks->has_operation());
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discriminant.is_set || is_set(discriminant.yfilter)) leaf_name_data.push_back(discriminant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-tracks")
    {
        if(interface_tracks == nullptr)
        {
            interface_tracks = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks>();
        }
        return interface_tracks;
    }

    if(child_yang_name == "route-tracks")
    {
        if(route_tracks == nullptr)
        {
            route_tracks = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks>();
        }
        return route_tracks;
    }

    if(child_yang_name == "ipsla-tracks")
    {
        if(ipsla_tracks == nullptr)
        {
            ipsla_tracks = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks>();
        }
        return ipsla_tracks;
    }

    if(child_yang_name == "bfd-tracks")
    {
        if(bfd_tracks == nullptr)
        {
            bfd_tracks = std::make_shared<ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks>();
        }
        return bfd_tracks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_tracks != nullptr)
    {
        children["interface-tracks"] = interface_tracks;
    }

    if(route_tracks != nullptr)
    {
        children["route-tracks"] = route_tracks;
    }

    if(ipsla_tracks != nullptr)
    {
        children["ipsla-tracks"] = ipsla_tracks;
    }

    if(bfd_tracks != nullptr)
    {
        children["bfd-tracks"] = bfd_tracks;
    }

    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discriminant")
    {
        discriminant = value;
        discriminant.value_namespace = name_space;
        discriminant.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discriminant")
    {
        discriminant.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-tracks" || name == "route-tracks" || name == "ipsla-tracks" || name == "bfd-tracks" || name == "discriminant")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::InterfaceTracks()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::~InterfaceTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::RouteTracks()
    :
    prefix{YType::uint32, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    vrf{YType::str, "vrf"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "route-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::~RouteTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| vrf.is_set
	|| next_hop.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "vrf" || name == "next-hop")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::IpslaTracks()
    :
    ipsla_op_id{YType::uint32, "ipsla-op-id"},
    rtt{YType::uint32, "rtt"},
    return_code{YType::uint32, "return-code"}
{

    yang_name = "ipsla-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::~IpslaTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_data() const
{
    if (is_presence_container) return true;
    return ipsla_op_id.is_set
	|| rtt.is_set
	|| return_code.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipsla_op_id.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(return_code.yfilter);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsla-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipsla_op_id.is_set || is_set(ipsla_op_id.yfilter)) leaf_name_data.push_back(ipsla_op_id.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (return_code.is_set || is_set(return_code.yfilter)) leaf_name_data.push_back(return_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id = value;
        ipsla_op_id.value_namespace = name_space;
        ipsla_op_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "return-code")
    {
        return_code = value;
        return_code.value_namespace = name_space;
        return_code.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipsla-op-id")
    {
        ipsla_op_id.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "return-code")
    {
        return_code.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsla-op-id" || name == "rtt" || name == "return-code")
        return true;
    return false;
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::BfdTracks()
    :
    interface_name{YType::str, "interface-name"},
    destination_address{YType::uint32, "destination-address"},
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"}
{

    yang_name = "bfd-tracks"; yang_parent_name = "track-type-info"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::~BfdTracks()
{
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| destination_address.is_set
	|| rate.is_set
	|| debounce_count.is_set;
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter);
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking/track-type-interface-brief/track-info-brief/track-type-info/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tracks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
}

bool ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "destination-address" || name == "rate" || name == "debounce-count")
        return true;
    return false;
}

const Enum::YLeaf Track::interface_type {1, "interface-type"};
const Enum::YLeaf Track::route_type {2, "route-type"};
const Enum::YLeaf Track::bool_and_type {3, "bool-and-type"};
const Enum::YLeaf Track::bool_or_type {4, "bool-or-type"};
const Enum::YLeaf Track::ipsla_type {5, "ipsla-type"};
const Enum::YLeaf Track::undefined_type {6, "undefined-type"};
const Enum::YLeaf Track::threshold_weight {7, "threshold-weight"};
const Enum::YLeaf Track::threshold_percentage {8, "threshold-percentage"};
const Enum::YLeaf Track::bfd_type {9, "bfd-type"};


}
}

