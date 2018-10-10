
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_manageability_object_tracking_cfg {

ObjectTrackings::ObjectTrackings()
    :
    object_tracking(this, {"track_name"})
{

    yang_name = "object-trackings"; yang_parent_name = "Cisco-IOS-XR-manageability-object-tracking-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

ObjectTrackings::~ObjectTrackings()
{
}

bool ObjectTrackings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object_tracking.len(); index++)
    {
        if(object_tracking[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::has_operation() const
{
    for (std::size_t index=0; index<object_tracking.len(); index++)
    {
        if(object_tracking[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-cfg:object-trackings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object-tracking")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking>();
        c->parent = this;
        object_tracking.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : object_tracking.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ObjectTrackings::clone_ptr() const
{
    return std::make_shared<ObjectTrackings>();
}

std::string ObjectTrackings::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ObjectTrackings::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ObjectTrackings::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ObjectTrackings::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ObjectTrackings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-tracking")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::ObjectTracking()
    :
    track_name{YType::str, "track-name"},
    delay_up{YType::uint32, "delay-up"},
    enable{YType::empty, "enable"},
    delay_down{YType::uint32, "delay-down"},
    type_interface_enable{YType::empty, "type-interface-enable"},
    type_route_enable{YType::empty, "type-route-enable"},
    type_boolean_list_and_enable{YType::empty, "type-boolean-list-and-enable"},
    type_boolean_list_or_enable{YType::empty, "type-boolean-list-or-enable"}
        ,
    action(std::make_shared<ObjectTrackings::ObjectTracking::Action>())
    , type_bfd_rtr(std::make_shared<ObjectTrackings::ObjectTracking::TypeBfdRtr>())
    , type_interface(std::make_shared<ObjectTrackings::ObjectTracking::TypeInterface>())
    , type_rtr(std::make_shared<ObjectTrackings::ObjectTracking::TypeRtr>())
    , type_list(std::make_shared<ObjectTrackings::ObjectTracking::TypeList>())
    , type_route(std::make_shared<ObjectTrackings::ObjectTracking::TypeRoute>())
    , type_boolean_list(std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList>())
{
    action->parent = this;
    type_bfd_rtr->parent = this;
    type_interface->parent = this;
    type_rtr->parent = this;
    type_list->parent = this;
    type_route->parent = this;
    type_boolean_list->parent = this;

    yang_name = "object-tracking"; yang_parent_name = "object-trackings"; is_top_level_class = false; has_list_ancestor = false; 
}

ObjectTrackings::ObjectTracking::~ObjectTracking()
{
}

bool ObjectTrackings::ObjectTracking::has_data() const
{
    if (is_presence_container) return true;
    return track_name.is_set
	|| delay_up.is_set
	|| enable.is_set
	|| delay_down.is_set
	|| type_interface_enable.is_set
	|| type_route_enable.is_set
	|| type_boolean_list_and_enable.is_set
	|| type_boolean_list_or_enable.is_set
	|| (action !=  nullptr && action->has_data())
	|| (type_bfd_rtr !=  nullptr && type_bfd_rtr->has_data())
	|| (type_interface !=  nullptr && type_interface->has_data())
	|| (type_rtr !=  nullptr && type_rtr->has_data())
	|| (type_list !=  nullptr && type_list->has_data())
	|| (type_route !=  nullptr && type_route->has_data())
	|| (type_boolean_list !=  nullptr && type_boolean_list->has_data());
}

bool ObjectTrackings::ObjectTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track_name.yfilter)
	|| ydk::is_set(delay_up.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(delay_down.yfilter)
	|| ydk::is_set(type_interface_enable.yfilter)
	|| ydk::is_set(type_route_enable.yfilter)
	|| ydk::is_set(type_boolean_list_and_enable.yfilter)
	|| ydk::is_set(type_boolean_list_or_enable.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (type_bfd_rtr !=  nullptr && type_bfd_rtr->has_operation())
	|| (type_interface !=  nullptr && type_interface->has_operation())
	|| (type_rtr !=  nullptr && type_rtr->has_operation())
	|| (type_list !=  nullptr && type_list->has_operation())
	|| (type_route !=  nullptr && type_route->has_operation())
	|| (type_boolean_list !=  nullptr && type_boolean_list->has_operation());
}

std::string ObjectTrackings::ObjectTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-object-tracking-cfg:object-trackings/" << get_segment_path();
    return path_buffer.str();
}

std::string ObjectTrackings::ObjectTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-tracking";
    ADD_KEY_TOKEN(track_name, "track-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_name.is_set || is_set(track_name.yfilter)) leaf_name_data.push_back(track_name.get_name_leafdata());
    if (delay_up.is_set || is_set(delay_up.yfilter)) leaf_name_data.push_back(delay_up.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (delay_down.is_set || is_set(delay_down.yfilter)) leaf_name_data.push_back(delay_down.get_name_leafdata());
    if (type_interface_enable.is_set || is_set(type_interface_enable.yfilter)) leaf_name_data.push_back(type_interface_enable.get_name_leafdata());
    if (type_route_enable.is_set || is_set(type_route_enable.yfilter)) leaf_name_data.push_back(type_route_enable.get_name_leafdata());
    if (type_boolean_list_and_enable.is_set || is_set(type_boolean_list_and_enable.yfilter)) leaf_name_data.push_back(type_boolean_list_and_enable.get_name_leafdata());
    if (type_boolean_list_or_enable.is_set || is_set(type_boolean_list_or_enable.yfilter)) leaf_name_data.push_back(type_boolean_list_or_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<ObjectTrackings::ObjectTracking::Action>();
        }
        return action;
    }

    if(child_yang_name == "type-bfd-rtr")
    {
        if(type_bfd_rtr == nullptr)
        {
            type_bfd_rtr = std::make_shared<ObjectTrackings::ObjectTracking::TypeBfdRtr>();
        }
        return type_bfd_rtr;
    }

    if(child_yang_name == "type-interface")
    {
        if(type_interface == nullptr)
        {
            type_interface = std::make_shared<ObjectTrackings::ObjectTracking::TypeInterface>();
        }
        return type_interface;
    }

    if(child_yang_name == "type-rtr")
    {
        if(type_rtr == nullptr)
        {
            type_rtr = std::make_shared<ObjectTrackings::ObjectTracking::TypeRtr>();
        }
        return type_rtr;
    }

    if(child_yang_name == "type-list")
    {
        if(type_list == nullptr)
        {
            type_list = std::make_shared<ObjectTrackings::ObjectTracking::TypeList>();
        }
        return type_list;
    }

    if(child_yang_name == "type-route")
    {
        if(type_route == nullptr)
        {
            type_route = std::make_shared<ObjectTrackings::ObjectTracking::TypeRoute>();
        }
        return type_route;
    }

    if(child_yang_name == "type-boolean-list")
    {
        if(type_boolean_list == nullptr)
        {
            type_boolean_list = std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList>();
        }
        return type_boolean_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(type_bfd_rtr != nullptr)
    {
        children["type-bfd-rtr"] = type_bfd_rtr;
    }

    if(type_interface != nullptr)
    {
        children["type-interface"] = type_interface;
    }

    if(type_rtr != nullptr)
    {
        children["type-rtr"] = type_rtr;
    }

    if(type_list != nullptr)
    {
        children["type-list"] = type_list;
    }

    if(type_route != nullptr)
    {
        children["type-route"] = type_route;
    }

    if(type_boolean_list != nullptr)
    {
        children["type-boolean-list"] = type_boolean_list;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track-name")
    {
        track_name = value;
        track_name.value_namespace = name_space;
        track_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-up")
    {
        delay_up = value;
        delay_up.value_namespace = name_space;
        delay_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-down")
    {
        delay_down = value;
        delay_down.value_namespace = name_space;
        delay_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-interface-enable")
    {
        type_interface_enable = value;
        type_interface_enable.value_namespace = name_space;
        type_interface_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-route-enable")
    {
        type_route_enable = value;
        type_route_enable.value_namespace = name_space;
        type_route_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-boolean-list-and-enable")
    {
        type_boolean_list_and_enable = value;
        type_boolean_list_and_enable.value_namespace = name_space;
        type_boolean_list_and_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-boolean-list-or-enable")
    {
        type_boolean_list_or_enable = value;
        type_boolean_list_or_enable.value_namespace = name_space;
        type_boolean_list_or_enable.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track-name")
    {
        track_name.yfilter = yfilter;
    }
    if(value_path == "delay-up")
    {
        delay_up.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "delay-down")
    {
        delay_down.yfilter = yfilter;
    }
    if(value_path == "type-interface-enable")
    {
        type_interface_enable.yfilter = yfilter;
    }
    if(value_path == "type-route-enable")
    {
        type_route_enable.yfilter = yfilter;
    }
    if(value_path == "type-boolean-list-and-enable")
    {
        type_boolean_list_and_enable.yfilter = yfilter;
    }
    if(value_path == "type-boolean-list-or-enable")
    {
        type_boolean_list_or_enable.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "type-bfd-rtr" || name == "type-interface" || name == "type-rtr" || name == "type-list" || name == "type-route" || name == "type-boolean-list" || name == "track-name" || name == "delay-up" || name == "enable" || name == "delay-down" || name == "type-interface-enable" || name == "type-route-enable" || name == "type-boolean-list-and-enable" || name == "type-boolean-list-or-enable")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::Action::Action()
    :
    actions_enable{YType::empty, "actions-enable"}
        ,
    action_err_dis(std::make_shared<ObjectTrackings::ObjectTracking::Action::ActionErrDis>())
{
    action_err_dis->parent = this;

    yang_name = "action"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::Action::~Action()
{
}

bool ObjectTrackings::ObjectTracking::Action::has_data() const
{
    if (is_presence_container) return true;
    return actions_enable.is_set
	|| (action_err_dis !=  nullptr && action_err_dis->has_data());
}

bool ObjectTrackings::ObjectTracking::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actions_enable.yfilter)
	|| (action_err_dis !=  nullptr && action_err_dis->has_operation());
}

std::string ObjectTrackings::ObjectTracking::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actions_enable.is_set || is_set(actions_enable.yfilter)) leaf_name_data.push_back(actions_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-err-dis")
    {
        if(action_err_dis == nullptr)
        {
            action_err_dis = std::make_shared<ObjectTrackings::ObjectTracking::Action::ActionErrDis>();
        }
        return action_err_dis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action_err_dis != nullptr)
    {
        children["action-err-dis"] = action_err_dis;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actions-enable")
    {
        actions_enable = value;
        actions_enable.value_namespace = name_space;
        actions_enable.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actions-enable")
    {
        actions_enable.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-err-dis" || name == "actions-enable")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDis()
    :
    action_err_di(this, {"track_state_type", "interface_name"})
{

    yang_name = "action-err-dis"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::Action::ActionErrDis::~ActionErrDis()
{
}

bool ObjectTrackings::ObjectTracking::Action::ActionErrDis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<action_err_di.len(); index++)
    {
        if(action_err_di[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::Action::ActionErrDis::has_operation() const
{
    for (std::size_t index=0; index<action_err_di.len(); index++)
    {
        if(action_err_di[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::Action::ActionErrDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-err-dis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::Action::ActionErrDis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::Action::ActionErrDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-err-di")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi>();
        c->parent = this;
        action_err_di.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::Action::ActionErrDis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : action_err_di.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::Action::ActionErrDis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::Action::ActionErrDis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::Action::ActionErrDis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-err-di")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::ActionErrDi()
    :
    track_state_type{YType::uint32, "track-state-type"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "action-err-di"; yang_parent_name = "action-err-dis"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::~ActionErrDi()
{
}

bool ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::has_data() const
{
    if (is_presence_container) return true;
    return track_state_type.is_set
	|| interface_name.is_set;
}

bool ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track_state_type.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-err-di";
    ADD_KEY_TOKEN(track_state_type, "track-state-type");
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track_state_type.is_set || is_set(track_state_type.yfilter)) leaf_name_data.push_back(track_state_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track-state-type")
    {
        track_state_type = value;
        track_state_type.value_namespace = name_space;
        track_state_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track-state-type")
    {
        track_state_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::Action::ActionErrDis::ActionErrDi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track-state-type" || name == "interface-name")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBfdRtr::TypeBfdRtr()
    :
    bfd_rtr(nullptr) // presence node
{

    yang_name = "type-bfd-rtr"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeBfdRtr::~TypeBfdRtr()
{
}

bool ObjectTrackings::ObjectTracking::TypeBfdRtr::has_data() const
{
    if (is_presence_container) return true;
    return (bfd_rtr !=  nullptr && bfd_rtr->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeBfdRtr::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_rtr !=  nullptr && bfd_rtr->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeBfdRtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-bfd-rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBfdRtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBfdRtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-rtr")
    {
        if(bfd_rtr == nullptr)
        {
            bfd_rtr = std::make_shared<ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr>();
        }
        return bfd_rtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBfdRtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bfd_rtr != nullptr)
    {
        children["bfd-rtr"] = bfd_rtr;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBfdRtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeBfdRtr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeBfdRtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-rtr")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::BfdRtr()
    :
    rate{YType::uint32, "rate"},
    debounce_count{YType::uint32, "debounce-count"},
    interface_name{YType::str, "interface-name"},
    dest_address{YType::str, "dest-address"}
{

    yang_name = "bfd-rtr"; yang_parent_name = "type-bfd-rtr"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::~BfdRtr()
{
}

bool ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set
	|| debounce_count.is_set
	|| interface_name.is_set
	|| dest_address.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(debounce_count.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(dest_address.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (dest_address.is_set || is_set(dest_address.yfilter)) leaf_name_data.push_back(dest_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-address")
    {
        dest_address = value;
        dest_address.value_namespace = name_space;
        dest_address.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "dest-address")
    {
        dest_address.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeBfdRtr::BfdRtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "debounce-count" || name == "interface-name" || name == "dest-address")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeInterface::TypeInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "type-interface"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeInterface::~TypeInterface()
{
}

bool ObjectTrackings::ObjectTracking::TypeInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeRtr::TypeRtr()
    :
    rtr{YType::uint32, "rtr"}
{

    yang_name = "type-rtr"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeRtr::~TypeRtr()
{
}

bool ObjectTrackings::ObjectTracking::TypeRtr::has_data() const
{
    if (is_presence_container) return true;
    return rtr.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeRtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeRtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeRtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeRtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeRtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeRtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeRtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeRtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::TypeList()
    :
    threshold_percentage_object_enable{YType::empty, "threshold-percentage-object-enable"},
    threshold_weight_object_enable{YType::empty, "threshold-weight-object-enable"}
        ,
    threshold_weight(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight>())
    , threshold_percentage_object(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject>())
    , threshold_percentage(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage>())
    , threshold_weight_object(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject>())
{
    threshold_weight->parent = this;
    threshold_percentage_object->parent = this;
    threshold_percentage->parent = this;
    threshold_weight_object->parent = this;

    yang_name = "type-list"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::~TypeList()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::has_data() const
{
    if (is_presence_container) return true;
    return threshold_percentage_object_enable.is_set
	|| threshold_weight_object_enable.is_set
	|| (threshold_weight !=  nullptr && threshold_weight->has_data())
	|| (threshold_percentage_object !=  nullptr && threshold_percentage_object->has_data())
	|| (threshold_percentage !=  nullptr && threshold_percentage->has_data())
	|| (threshold_weight_object !=  nullptr && threshold_weight_object->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold_percentage_object_enable.yfilter)
	|| ydk::is_set(threshold_weight_object_enable.yfilter)
	|| (threshold_weight !=  nullptr && threshold_weight->has_operation())
	|| (threshold_percentage_object !=  nullptr && threshold_percentage_object->has_operation())
	|| (threshold_percentage !=  nullptr && threshold_percentage->has_operation())
	|| (threshold_weight_object !=  nullptr && threshold_weight_object->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_percentage_object_enable.is_set || is_set(threshold_percentage_object_enable.yfilter)) leaf_name_data.push_back(threshold_percentage_object_enable.get_name_leafdata());
    if (threshold_weight_object_enable.is_set || is_set(threshold_weight_object_enable.yfilter)) leaf_name_data.push_back(threshold_weight_object_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-weight")
    {
        if(threshold_weight == nullptr)
        {
            threshold_weight = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight>();
        }
        return threshold_weight;
    }

    if(child_yang_name == "threshold-percentage-object")
    {
        if(threshold_percentage_object == nullptr)
        {
            threshold_percentage_object = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject>();
        }
        return threshold_percentage_object;
    }

    if(child_yang_name == "threshold-percentage")
    {
        if(threshold_percentage == nullptr)
        {
            threshold_percentage = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage>();
        }
        return threshold_percentage;
    }

    if(child_yang_name == "threshold-weight-object")
    {
        if(threshold_weight_object == nullptr)
        {
            threshold_weight_object = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject>();
        }
        return threshold_weight_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_weight != nullptr)
    {
        children["threshold-weight"] = threshold_weight;
    }

    if(threshold_percentage_object != nullptr)
    {
        children["threshold-percentage-object"] = threshold_percentage_object;
    }

    if(threshold_percentage != nullptr)
    {
        children["threshold-percentage"] = threshold_percentage;
    }

    if(threshold_weight_object != nullptr)
    {
        children["threshold-weight-object"] = threshold_weight_object;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold-percentage-object-enable")
    {
        threshold_percentage_object_enable = value;
        threshold_percentage_object_enable.value_namespace = name_space;
        threshold_percentage_object_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-weight-object-enable")
    {
        threshold_weight_object_enable = value;
        threshold_weight_object_enable.value_namespace = name_space;
        threshold_weight_object_enable.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold-percentage-object-enable")
    {
        threshold_percentage_object_enable.yfilter = yfilter;
    }
    if(value_path == "threshold-weight-object-enable")
    {
        threshold_weight_object_enable.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-weight" || name == "threshold-percentage-object" || name == "threshold-percentage" || name == "threshold-weight-object" || name == "threshold-percentage-object-enable" || name == "threshold-weight-object-enable")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdWeight()
    :
    threshold_limits(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits>())
{
    threshold_limits->parent = this;

    yang_name = "threshold-weight"; yang_parent_name = "type-list"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::~ThresholdWeight()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits>();
        }
        return threshold_limits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_limits != nullptr)
    {
        children["threshold-limits"] = threshold_limits;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdLimits()
    :
    threshold_up_values(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues>())
{
    threshold_up_values->parent = this;

    yang_name = "threshold-limits"; yang_parent_name = "threshold-weight"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::~ThresholdLimits()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_up_values !=  nullptr && threshold_up_values->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_up_values !=  nullptr && threshold_up_values->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-up-values")
    {
        if(threshold_up_values == nullptr)
        {
            threshold_up_values = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues>();
        }
        return threshold_up_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_up_values != nullptr)
    {
        children["threshold-up-values"] = threshold_up_values;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-up-values")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValues()
    :
    threshold_up_value(this, {"up"})
{

    yang_name = "threshold-up-values"; yang_parent_name = "threshold-limits"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::~ThresholdUpValues()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_up_value.len(); index++)
    {
        if(threshold_up_value[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::has_operation() const
{
    for (std::size_t index=0; index<threshold_up_value.len(); index++)
    {
        if(threshold_up_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-up-value")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue>();
        c->parent = this;
        threshold_up_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold_up_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-up-value")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::ThresholdUpValue()
    :
    up{YType::uint32, "up"},
    threshold_down{YType::uint32, "threshold-down"}
{

    yang_name = "threshold-up-value"; yang_parent_name = "threshold-up-values"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::~ThresholdUpValue()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| threshold_down.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(threshold_down.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-value";
    ADD_KEY_TOKEN(up, "up");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.yfilter)) leaf_name_data.push_back(threshold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
        threshold_down.value_namespace = name_space;
        threshold_down.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "threshold-down")
    {
        threshold_down.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "threshold-down")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::ThresholdPercentageObject()
    :
    object(this, {"object"})
{

    yang_name = "threshold-percentage-object"; yang_parent_name = "type-list"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::~ThresholdPercentageObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-percentage-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object>();
        c->parent = this;
        object.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : object.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::Object()
    :
    object{YType::str, "object"},
    object_weight{YType::uint32, "object-weight"}
{

    yang_name = "object"; yang_parent_name = "threshold-percentage-object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::~Object()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::has_data() const
{
    if (is_presence_container) return true;
    return object.is_set
	|| object_weight.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter)
	|| ydk::is_set(object_weight.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(object, "object");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object.is_set || is_set(object.yfilter)) leaf_name_data.push_back(object.get_name_leafdata());
    if (object_weight.is_set || is_set(object_weight.yfilter)) leaf_name_data.push_back(object_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object = value;
        object.value_namespace = name_space;
        object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-weight")
    {
        object_weight = value;
        object_weight.value_namespace = name_space;
        object_weight.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
    if(value_path == "object-weight")
    {
        object_weight.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object" || name == "object-weight")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdPercentage()
    :
    threshold_limits(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits>())
{
    threshold_limits->parent = this;

    yang_name = "threshold-percentage"; yang_parent_name = "type-list"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::~ThresholdPercentage()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_limits !=  nullptr && threshold_limits->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_limits !=  nullptr && threshold_limits->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-percentage";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-limits")
    {
        if(threshold_limits == nullptr)
        {
            threshold_limits = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits>();
        }
        return threshold_limits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_limits != nullptr)
    {
        children["threshold-limits"] = threshold_limits;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-limits")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdLimits()
    :
    threshold_up_values(std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues>())
{
    threshold_up_values->parent = this;

    yang_name = "threshold-limits"; yang_parent_name = "threshold-percentage"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::~ThresholdLimits()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_up_values !=  nullptr && threshold_up_values->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_up_values !=  nullptr && threshold_up_values->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-limits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-up-values")
    {
        if(threshold_up_values == nullptr)
        {
            threshold_up_values = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues>();
        }
        return threshold_up_values;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold_up_values != nullptr)
    {
        children["threshold-up-values"] = threshold_up_values;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-up-values")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValues()
    :
    threshold_up_value(this, {"up"})
{

    yang_name = "threshold-up-values"; yang_parent_name = "threshold-limits"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::~ThresholdUpValues()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<threshold_up_value.len(); index++)
    {
        if(threshold_up_value[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::has_operation() const
{
    for (std::size_t index=0; index<threshold_up_value.len(); index++)
    {
        if(threshold_up_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-up-value")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue>();
        c->parent = this;
        threshold_up_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : threshold_up_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-up-value")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::ThresholdUpValue()
    :
    up{YType::uint32, "up"},
    threshold_down{YType::uint32, "threshold-down"}
{

    yang_name = "threshold-up-value"; yang_parent_name = "threshold-up-values"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::~ThresholdUpValue()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_data() const
{
    if (is_presence_container) return true;
    return up.is_set
	|| threshold_down.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up.yfilter)
	|| ydk::is_set(threshold_down.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-up-value";
    ADD_KEY_TOKEN(up, "up");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());
    if (threshold_down.is_set || is_set(threshold_down.yfilter)) leaf_name_data.push_back(threshold_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-down")
    {
        threshold_down = value;
        threshold_down.value_namespace = name_space;
        threshold_down.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
    if(value_path == "threshold-down")
    {
        threshold_down.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "threshold-down")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::ThresholdWeightObject()
    :
    object(this, {"object"})
{

    yang_name = "threshold-weight-object"; yang_parent_name = "type-list"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::~ThresholdWeightObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::has_operation() const
{
    for (std::size_t index=0; index<object.len(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-weight-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "object")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object>();
        c->parent = this;
        object.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : object.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::Object()
    :
    object{YType::str, "object"},
    object_weight{YType::uint32, "object-weight"}
{

    yang_name = "object"; yang_parent_name = "threshold-weight-object"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::~Object()
{
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::has_data() const
{
    if (is_presence_container) return true;
    return object.is_set
	|| object_weight.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter)
	|| ydk::is_set(object_weight.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object";
    ADD_KEY_TOKEN(object, "object");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object.is_set || is_set(object.yfilter)) leaf_name_data.push_back(object.get_name_leafdata());
    if (object_weight.is_set || is_set(object_weight.yfilter)) leaf_name_data.push_back(object_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object = value;
        object.value_namespace = name_space;
        object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-weight")
    {
        object_weight = value;
        object_weight.value_namespace = name_space;
        object_weight.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
    if(value_path == "object-weight")
    {
        object_weight.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object" || name == "object-weight")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeRoute::TypeRoute()
    :
    vrf{YType::str, "vrf"}
        ,
    ip_address(nullptr) // presence node
{

    yang_name = "type-route"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeRoute::~TypeRoute()
{
}

bool ObjectTrackings::ObjectTracking::TypeRoute::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (ip_address !=  nullptr && ip_address->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (ip_address !=  nullptr && ip_address->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        if(ip_address == nullptr)
        {
            ip_address = std::make_shared<ObjectTrackings::ObjectTracking::TypeRoute::IpAddress>();
        }
        return ip_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip_address != nullptr)
    {
        children["ip-address"] = ip_address;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "vrf")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::IpAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "ip-address"; yang_parent_name = "type-route"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::~IpAddress()
{
}

bool ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeRoute::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBooleanList::TypeBooleanList()
    :
    or_objects(std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects>())
    , and_objects(std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects>())
{
    or_objects->parent = this;
    and_objects->parent = this;

    yang_name = "type-boolean-list"; yang_parent_name = "object-tracking"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeBooleanList::~TypeBooleanList()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::has_data() const
{
    if (is_presence_container) return true;
    return (or_objects !=  nullptr && or_objects->has_data())
	|| (and_objects !=  nullptr && and_objects->has_data());
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::has_operation() const
{
    return is_set(yfilter)
	|| (or_objects !=  nullptr && or_objects->has_operation())
	|| (and_objects !=  nullptr && and_objects->has_operation());
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-boolean-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBooleanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBooleanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "or-objects")
    {
        if(or_objects == nullptr)
        {
            or_objects = std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects>();
        }
        return or_objects;
    }

    if(child_yang_name == "and-objects")
    {
        if(and_objects == nullptr)
        {
            and_objects = std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects>();
        }
        return and_objects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBooleanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(or_objects != nullptr)
    {
        children["or-objects"] = or_objects;
    }

    if(and_objects != nullptr)
    {
        children["and-objects"] = and_objects;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "or-objects" || name == "and-objects")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObjects()
    :
    or_object(this, {"object"})
{

    yang_name = "or-objects"; yang_parent_name = "type-boolean-list"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::~OrObjects()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<or_object.len(); index++)
    {
        if(or_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::has_operation() const
{
    for (std::size_t index=0; index<or_object.len(); index++)
    {
        if(or_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "or-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "or-object")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject>();
        c->parent = this;
        or_object.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : or_object.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "or-object")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::OrObject()
    :
    object{YType::str, "object"},
    object_sign{YType::enumeration, "object-sign"}
{

    yang_name = "or-object"; yang_parent_name = "or-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::~OrObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::has_data() const
{
    if (is_presence_container) return true;
    return object.is_set
	|| object_sign.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object.yfilter)
	|| ydk::is_set(object_sign.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "or-object";
    ADD_KEY_TOKEN(object, "object");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object.is_set || is_set(object.yfilter)) leaf_name_data.push_back(object.get_name_leafdata());
    if (object_sign.is_set || is_set(object_sign.yfilter)) leaf_name_data.push_back(object_sign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object")
    {
        object = value;
        object.value_namespace = name_space;
        object.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-sign")
    {
        object_sign = value;
        object_sign.value_namespace = name_space;
        object_sign.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object")
    {
        object.yfilter = yfilter;
    }
    if(value_path == "object-sign")
    {
        object_sign.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object" || name == "object-sign")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObjects()
    :
    and_object(this, {"object_name"})
{

    yang_name = "and-objects"; yang_parent_name = "type-boolean-list"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::~AndObjects()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<and_object.len(); index++)
    {
        if(and_object[index]->has_data())
            return true;
    }
    return false;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::has_operation() const
{
    for (std::size_t index=0; index<and_object.len(); index++)
    {
        if(and_object[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "and-objects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "and-object")
    {
        auto c = std::make_shared<ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject>();
        c->parent = this;
        and_object.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : and_object.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "and-object")
        return true;
    return false;
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::AndObject()
    :
    object_name{YType::str, "object-name"},
    object_sign{YType::enumeration, "object-sign"}
{

    yang_name = "and-object"; yang_parent_name = "and-objects"; is_top_level_class = false; has_list_ancestor = true; 
}

ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::~AndObject()
{
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::has_data() const
{
    if (is_presence_container) return true;
    return object_name.is_set
	|| object_sign.is_set;
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_name.yfilter)
	|| ydk::is_set(object_sign.yfilter);
}

std::string ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "and-object";
    ADD_KEY_TOKEN(object_name, "object-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_name.is_set || is_set(object_name.yfilter)) leaf_name_data.push_back(object_name.get_name_leafdata());
    if (object_sign.is_set || is_set(object_sign.yfilter)) leaf_name_data.push_back(object_sign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-name")
    {
        object_name = value;
        object_name.value_namespace = name_space;
        object_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-sign")
    {
        object_sign = value;
        object_sign.value_namespace = name_space;
        object_sign.value_namespace_prefix = name_space_prefix;
    }
}

void ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-name")
    {
        object_name.yfilter = yfilter;
    }
    if(value_path == "object-sign")
    {
        object_sign.yfilter = yfilter;
    }
}

bool ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-name" || name == "object-sign")
        return true;
    return false;
}


}
}

