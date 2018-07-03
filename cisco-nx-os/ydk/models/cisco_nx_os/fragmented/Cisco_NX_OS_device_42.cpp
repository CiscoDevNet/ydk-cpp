
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_42.hpp"
#include "Cisco_NX_OS_device_43.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::MribItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::DomItems::~DomItems()
{
}

bool System::MribItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"}
        ,
    config_items(std::make_shared<System::MribItems::InstItems::DomItems::DomList::ConfigItems>())
    , eventhist_items(std::make_shared<System::MribItems::InstItems::DomItems::DomList::EventHistItems>())
{
    config_items->parent = this;
    eventhist_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MribItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| (config_items !=  nullptr && config_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data());
}

bool System::MribItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation());
}

std::string System::MribItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::MribItems::InstItems::DomItems::DomList::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::MribItems::InstItems::DomItems::DomList::EventHistItems>();
        }
        return eventhist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(config_items != nullptr)
    {
        children["config-items"] = config_items;
    }

    if(eventhist_items != nullptr)
    {
        children["eventHist-items"] = eventhist_items;
    }

    return children;
}

void System::MribItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-items" || name == "eventHist-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::ConfigItems::ConfigItems()
    :
    holdenable{YType::enumeration, "holdEnable"},
    holddown{YType::uint16, "holddown"},
    modeenable{YType::enumeration, "ModeEnable"},
    mode{YType::enumeration, "Mode"},
    moderesilient{YType::boolean, "ModeResilient"}
{

    yang_name = "config-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::ConfigItems::~ConfigItems()
{
}

bool System::MribItems::InstItems::DomItems::DomList::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return holdenable.is_set
	|| holddown.is_set
	|| modeenable.is_set
	|| mode.is_set
	|| moderesilient.is_set;
}

bool System::MribItems::InstItems::DomItems::DomList::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdenable.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(modeenable.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(moderesilient.yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdenable.is_set || is_set(holdenable.yfilter)) leaf_name_data.push_back(holdenable.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (modeenable.is_set || is_set(modeenable.yfilter)) leaf_name_data.push_back(modeenable.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (moderesilient.is_set || is_set(moderesilient.yfilter)) leaf_name_data.push_back(moderesilient.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::DomItems::DomList::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MribItems::InstItems::DomItems::DomList::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdEnable")
    {
        holdenable = value;
        holdenable.value_namespace = name_space;
        holdenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ModeEnable")
    {
        modeenable = value;
        modeenable.value_namespace = name_space;
        modeenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ModeResilient")
    {
        moderesilient = value;
        moderesilient.value_namespace = name_space;
        moderesilient.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdEnable")
    {
        holdenable.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "ModeEnable")
    {
        modeenable.yfilter = yfilter;
    }
    if(value_path == "Mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ModeResilient")
    {
        moderesilient.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdEnable" || name == "holddown" || name == "ModeEnable" || name == "Mode" || name == "ModeResilient")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventHist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::~EventHistItems()
{
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventHist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList>();
        c->parent = this;
        eventhistory_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::DomItems::DomList::EventHistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventhistory_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventHist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::RouteDbItems()
    :
    vrf_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems>())
{
    vrf_items->parent = this;

    yang_name = "routeDb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::RouteDbItems::~RouteDbItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::has_data() const
{
    if (is_presence_container) return true;
    return (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::has_operation() const
{
    return is_set(yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::RouteDbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routeDb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "routeDb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::~VrfItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/routeDb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList>();
        c->parent = this;
        vrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"},
    totalnumroutes{YType::uint32, "totalNumRoutes"},
    stargroute{YType::uint32, "starGRoute"},
    sgroute{YType::uint32, "sgRoute"},
    stargprfx{YType::uint32, "starGPrfx"}
        ,
    group_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::~VrfList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| totalnumroutes.is_set
	|| stargroute.is_set
	|| sgroute.is_set
	|| stargprfx.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(totalnumroutes.yfilter)
	|| ydk::is_set(stargroute.yfilter)
	|| ydk::is_set(sgroute.yfilter)
	|| ydk::is_set(stargprfx.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mrib-items/inst-items/routeDb-items/vrf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (totalnumroutes.is_set || is_set(totalnumroutes.yfilter)) leaf_name_data.push_back(totalnumroutes.get_name_leafdata());
    if (stargroute.is_set || is_set(stargroute.yfilter)) leaf_name_data.push_back(stargroute.get_name_leafdata());
    if (sgroute.is_set || is_set(sgroute.yfilter)) leaf_name_data.push_back(sgroute.get_name_leafdata());
    if (stargprfx.is_set || is_set(stargprfx.yfilter)) leaf_name_data.push_back(stargprfx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes = value;
        totalnumroutes.value_namespace = name_space;
        totalnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGRoute")
    {
        stargroute = value;
        stargroute.value_namespace = name_space;
        stargroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgRoute")
    {
        sgroute = value;
        sgroute.value_namespace = name_space;
        sgroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx = value;
        stargprfx.value_namespace = name_space;
        stargprfx.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "totalNumRoutes")
    {
        totalnumroutes.yfilter = yfilter;
    }
    if(value_path == "starGRoute")
    {
        stargroute.yfilter = yfilter;
    }
    if(value_path == "sgRoute")
    {
        sgroute.yfilter = yfilter;
    }
    if(value_path == "starGPrfx")
    {
        stargprfx.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name" || name == "totalNumRoutes" || name == "starGRoute" || name == "sgRoute" || name == "starGPrfx")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    grpmasklen{YType::uint32, "grpMasklen"},
    bidir{YType::boolean, "bidir"}
        ,
    source_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| grpmasklen.is_set
	|| bidir.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(grpmasklen.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (grpmasklen.is_set || is_set(grpmasklen.yfilter)) leaf_name_data.push_back(grpmasklen.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen = value;
        grpmasklen.value_namespace = name_space;
        grpmasklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "grpMasklen")
    {
        grpmasklen.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "grpMasklen" || name == "bidir")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        c->parent = this;
        source_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : source_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    pending{YType::boolean, "pending"},
    uptime{YType::str, "uptime"},
    oifcount{YType::uint32, "oifcount"},
    statspkts{YType::uint32, "statsPkts"},
    statsbytes{YType::uint32, "statsBytes"},
    statsratebuf{YType::str, "statsRateBuf"},
    lispsrcrloc{YType::str, "lispSrcRloc"},
    routeiif{YType::str, "routeIif"},
    rpfnbr{YType::str, "rpfNbr"},
    internal{YType::boolean, "internal"},
    rpfnbruptime{YType::str, "rpfNbrUptime"},
    fabricoif{YType::boolean, "fabricOif"},
    fabricloser{YType::boolean, "fabricLoser"},
    numvpcsvioifs{YType::uint32, "numVpcSviOifs"},
    routemdtiod{YType::boolean, "routeMdtIod"},
    mdtencapindex{YType::uint32, "mdtEncapIndex"}
        ,
    mpib_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>())
    , oif_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>())
{
    mpib_items->parent = this;
    oif_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| pending.is_set
	|| uptime.is_set
	|| oifcount.is_set
	|| statspkts.is_set
	|| statsbytes.is_set
	|| statsratebuf.is_set
	|| lispsrcrloc.is_set
	|| routeiif.is_set
	|| rpfnbr.is_set
	|| internal.is_set
	|| rpfnbruptime.is_set
	|| fabricoif.is_set
	|| fabricloser.is_set
	|| numvpcsvioifs.is_set
	|| routemdtiod.is_set
	|| mdtencapindex.is_set
	|| (mpib_items !=  nullptr && mpib_items->has_data())
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(statspkts.yfilter)
	|| ydk::is_set(statsbytes.yfilter)
	|| ydk::is_set(statsratebuf.yfilter)
	|| ydk::is_set(lispsrcrloc.yfilter)
	|| ydk::is_set(routeiif.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rpfnbruptime.yfilter)
	|| ydk::is_set(fabricoif.yfilter)
	|| ydk::is_set(fabricloser.yfilter)
	|| ydk::is_set(numvpcsvioifs.yfilter)
	|| ydk::is_set(routemdtiod.yfilter)
	|| ydk::is_set(mdtencapindex.yfilter)
	|| (mpib_items !=  nullptr && mpib_items->has_operation())
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (statspkts.is_set || is_set(statspkts.yfilter)) leaf_name_data.push_back(statspkts.get_name_leafdata());
    if (statsbytes.is_set || is_set(statsbytes.yfilter)) leaf_name_data.push_back(statsbytes.get_name_leafdata());
    if (statsratebuf.is_set || is_set(statsratebuf.yfilter)) leaf_name_data.push_back(statsratebuf.get_name_leafdata());
    if (lispsrcrloc.is_set || is_set(lispsrcrloc.yfilter)) leaf_name_data.push_back(lispsrcrloc.get_name_leafdata());
    if (routeiif.is_set || is_set(routeiif.yfilter)) leaf_name_data.push_back(routeiif.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rpfnbruptime.is_set || is_set(rpfnbruptime.yfilter)) leaf_name_data.push_back(rpfnbruptime.get_name_leafdata());
    if (fabricoif.is_set || is_set(fabricoif.yfilter)) leaf_name_data.push_back(fabricoif.get_name_leafdata());
    if (fabricloser.is_set || is_set(fabricloser.yfilter)) leaf_name_data.push_back(fabricloser.get_name_leafdata());
    if (numvpcsvioifs.is_set || is_set(numvpcsvioifs.yfilter)) leaf_name_data.push_back(numvpcsvioifs.get_name_leafdata());
    if (routemdtiod.is_set || is_set(routemdtiod.yfilter)) leaf_name_data.push_back(routemdtiod.get_name_leafdata());
    if (mdtencapindex.is_set || is_set(mdtencapindex.yfilter)) leaf_name_data.push_back(mdtencapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpib-items")
    {
        if(mpib_items == nullptr)
        {
            mpib_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems>();
        }
        return mpib_items;
    }

    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpib_items != nullptr)
    {
        children["mpib-items"] = mpib_items;
    }

    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifcount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsPkts")
    {
        statspkts = value;
        statspkts.value_namespace = name_space;
        statspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsBytes")
    {
        statsbytes = value;
        statsbytes.value_namespace = name_space;
        statsbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf = value;
        statsratebuf.value_namespace = name_space;
        statsratebuf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc = value;
        lispsrcrloc.value_namespace = name_space;
        lispsrcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeIif")
    {
        routeiif = value;
        routeiif.value_namespace = name_space;
        routeiif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime = value;
        rpfnbruptime.value_namespace = name_space;
        rpfnbruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricOif")
    {
        fabricoif = value;
        fabricoif.value_namespace = name_space;
        fabricoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser = value;
        fabricloser.value_namespace = name_space;
        fabricloser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs = value;
        numvpcsvioifs.value_namespace = name_space;
        numvpcsvioifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod = value;
        routemdtiod.value_namespace = name_space;
        routemdtiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex = value;
        mdtencapindex.value_namespace = name_space;
        mdtencapindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "oifcount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "statsPkts")
    {
        statspkts.yfilter = yfilter;
    }
    if(value_path == "statsBytes")
    {
        statsbytes.yfilter = yfilter;
    }
    if(value_path == "statsRateBuf")
    {
        statsratebuf.yfilter = yfilter;
    }
    if(value_path == "lispSrcRloc")
    {
        lispsrcrloc.yfilter = yfilter;
    }
    if(value_path == "routeIif")
    {
        routeiif.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rpfNbrUptime")
    {
        rpfnbruptime.yfilter = yfilter;
    }
    if(value_path == "fabricOif")
    {
        fabricoif.yfilter = yfilter;
    }
    if(value_path == "fabricLoser")
    {
        fabricloser.yfilter = yfilter;
    }
    if(value_path == "numVpcSviOifs")
    {
        numvpcsvioifs.yfilter = yfilter;
    }
    if(value_path == "routeMdtIod")
    {
        routemdtiod.yfilter = yfilter;
    }
    if(value_path == "mdtEncapIndex")
    {
        mdtencapindex.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpib-items" || name == "oif-items" || name == "srcAddr" || name == "pending" || name == "uptime" || name == "oifcount" || name == "statsPkts" || name == "statsBytes" || name == "statsRateBuf" || name == "lispSrcRloc" || name == "routeIif" || name == "rpfNbr" || name == "internal" || name == "rpfNbrUptime" || name == "fabricOif" || name == "fabricLoser" || name == "numVpcSviOifs" || name == "routeMdtIod" || name == "mdtEncapIndex")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibItems()
    :
    mpib_list(this, {"mpibname"})
{

    yang_name = "mpib-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::~MpibItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_operation() const
{
    for (std::size_t index=0; index<mpib_list.len(); index++)
    {
        if(mpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Mpib-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList>();
        c->parent = this;
        mpib_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mpib_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Mpib-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::MpibList()
    :
    mpibname{YType::str, "mpibName"},
    oifcount{YType::uint32, "oifCount"},
    staleroute{YType::boolean, "staleRoute"}
{

    yang_name = "Mpib-list"; yang_parent_name = "mpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::~MpibList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_data() const
{
    if (is_presence_container) return true;
    return mpibname.is_set
	|| oifcount.is_set
	|| staleroute.is_set;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpibname.yfilter)
	|| ydk::is_set(oifcount.yfilter)
	|| ydk::is_set(staleroute.yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Mpib-list";
    ADD_KEY_TOKEN(mpibname, "mpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpibname.is_set || is_set(mpibname.yfilter)) leaf_name_data.push_back(mpibname.get_name_leafdata());
    if (oifcount.is_set || is_set(oifcount.yfilter)) leaf_name_data.push_back(oifcount.get_name_leafdata());
    if (staleroute.is_set || is_set(staleroute.yfilter)) leaf_name_data.push_back(staleroute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpibName")
    {
        mpibname = value;
        mpibname.value_namespace = name_space;
        mpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifCount")
    {
        oifcount = value;
        oifcount.value_namespace = name_space;
        oifcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleRoute")
    {
        staleroute = value;
        staleroute.value_namespace = name_space;
        staleroute.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpibName")
    {
        mpibname.yfilter = yfilter;
    }
    if(value_path == "oifCount")
    {
        oifcount.yfilter = yfilter;
    }
    if(value_path == "staleRoute")
    {
        staleroute.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::MpibItems::MpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpibName" || name == "oifCount" || name == "staleRoute")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifItems()
    :
    oif_list(this, {"oifname"})
{

    yang_name = "oif-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::~OifItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList>();
        c->parent = this;
        oif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifList()
    :
    oifname{YType::str, "oifName"},
    oifuptime{YType::str, "oifUptime"},
    oifrpf{YType::boolean, "oifRPF"},
    oiflispencapentries{YType::uint32, "oifLispEncapEntries"}
        ,
    lispencap_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems>())
    , oifmpib_items(std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems>())
{
    lispencap_items->parent = this;
    oifmpib_items->parent = this;

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::~OifList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oifname.is_set
	|| oifuptime.is_set
	|| oifrpf.is_set
	|| oiflispencapentries.is_set
	|| (lispencap_items !=  nullptr && lispencap_items->has_data())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_data());
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifname.yfilter)
	|| ydk::is_set(oifuptime.yfilter)
	|| ydk::is_set(oifrpf.yfilter)
	|| ydk::is_set(oiflispencapentries.yfilter)
	|| (lispencap_items !=  nullptr && lispencap_items->has_operation())
	|| (oifmpib_items !=  nullptr && oifmpib_items->has_operation());
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oifname, "oifName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifname.is_set || is_set(oifname.yfilter)) leaf_name_data.push_back(oifname.get_name_leafdata());
    if (oifuptime.is_set || is_set(oifuptime.yfilter)) leaf_name_data.push_back(oifuptime.get_name_leafdata());
    if (oifrpf.is_set || is_set(oifrpf.yfilter)) leaf_name_data.push_back(oifrpf.get_name_leafdata());
    if (oiflispencapentries.is_set || is_set(oiflispencapentries.yfilter)) leaf_name_data.push_back(oiflispencapentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lispEncap-items")
    {
        if(lispencap_items == nullptr)
        {
            lispencap_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems>();
        }
        return lispencap_items;
    }

    if(child_yang_name == "oifMpib-items")
    {
        if(oifmpib_items == nullptr)
        {
            oifmpib_items = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems>();
        }
        return oifmpib_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lispencap_items != nullptr)
    {
        children["lispEncap-items"] = lispencap_items;
    }

    if(oifmpib_items != nullptr)
    {
        children["oifMpib-items"] = oifmpib_items;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifName")
    {
        oifname = value;
        oifname.value_namespace = name_space;
        oifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifUptime")
    {
        oifuptime = value;
        oifuptime.value_namespace = name_space;
        oifuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifRPF")
    {
        oifrpf = value;
        oifrpf.value_namespace = name_space;
        oifrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries = value;
        oiflispencapentries.value_namespace = name_space;
        oiflispencapentries.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifName")
    {
        oifname.yfilter = yfilter;
    }
    if(value_path == "oifUptime")
    {
        oifuptime.yfilter = yfilter;
    }
    if(value_path == "oifRPF")
    {
        oifrpf.yfilter = yfilter;
    }
    if(value_path == "oifLispEncapEntries")
    {
        oiflispencapentries.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lispEncap-items" || name == "oifMpib-items" || name == "oifName" || name == "oifUptime" || name == "oifRPF" || name == "oifLispEncapEntries")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapItems()
    :
    lispencap_list(this, {"index_"})
{

    yang_name = "lispEncap-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::~LispEncapItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::has_operation() const
{
    for (std::size_t index=0; index<lispencap_list.len(); index++)
    {
        if(lispencap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lispEncap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LispEncap-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList>();
        c->parent = this;
        lispencap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lispencap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LispEncap-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::LispEncapList()
    :
    index_{YType::uint32, "index"},
    srcrloc{YType::str, "srcRloc"},
    dstrloc{YType::str, "dstRloc"}
{

    yang_name = "LispEncap-list"; yang_parent_name = "lispEncap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::~LispEncapList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| srcrloc.is_set
	|| dstrloc.is_set;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(srcrloc.yfilter)
	|| ydk::is_set(dstrloc.yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LispEncap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (srcrloc.is_set || is_set(srcrloc.yfilter)) leaf_name_data.push_back(srcrloc.get_name_leafdata());
    if (dstrloc.is_set || is_set(dstrloc.yfilter)) leaf_name_data.push_back(dstrloc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcRloc")
    {
        srcrloc = value;
        srcrloc.value_namespace = name_space;
        srcrloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstRloc")
    {
        dstrloc = value;
        dstrloc.value_namespace = name_space;
        dstrloc.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "srcRloc")
    {
        srcrloc.yfilter = yfilter;
    }
    if(value_path == "dstRloc")
    {
        dstrloc.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::LispEncapItems::LispEncapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "srcRloc" || name == "dstRloc")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibItems()
    :
    oifmpib_list(this, {"oifmpibname"})
{

    yang_name = "oifMpib-items"; yang_parent_name = "Oif-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::~OifMpibItems()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::has_operation() const
{
    for (std::size_t index=0; index<oifmpib_list.len(); index++)
    {
        if(oifmpib_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oifMpib-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OifMpib-list")
    {
        auto c = std::make_shared<System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList>();
        c->parent = this;
        oifmpib_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oifmpib_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OifMpib-list")
        return true;
    return false;
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::OifMpibList()
    :
    oifmpibname{YType::str, "oifMpibName"},
    staleoif{YType::boolean, "staleOif"},
    vpcsvi{YType::boolean, "VpcSvi"}
{

    yang_name = "OifMpib-list"; yang_parent_name = "oifMpib-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::~OifMpibList()
{
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::has_data() const
{
    if (is_presence_container) return true;
    return oifmpibname.is_set
	|| staleoif.is_set
	|| vpcsvi.is_set;
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oifmpibname.yfilter)
	|| ydk::is_set(staleoif.yfilter)
	|| ydk::is_set(vpcsvi.yfilter);
}

std::string System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OifMpib-list";
    ADD_KEY_TOKEN(oifmpibname, "oifMpibName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oifmpibname.is_set || is_set(oifmpibname.yfilter)) leaf_name_data.push_back(oifmpibname.get_name_leafdata());
    if (staleoif.is_set || is_set(staleoif.yfilter)) leaf_name_data.push_back(staleoif.get_name_leafdata());
    if (vpcsvi.is_set || is_set(vpcsvi.yfilter)) leaf_name_data.push_back(vpcsvi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname = value;
        oifmpibname.value_namespace = name_space;
        oifmpibname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "staleOif")
    {
        staleoif = value;
        staleoif.value_namespace = name_space;
        staleoif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VpcSvi")
    {
        vpcsvi = value;
        vpcsvi.value_namespace = name_space;
        vpcsvi.value_namespace_prefix = name_space_prefix;
    }
}

void System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oifMpibName")
    {
        oifmpibname.yfilter = yfilter;
    }
    if(value_path == "staleOif")
    {
        staleoif.yfilter = yfilter;
    }
    if(value_path == "VpcSvi")
    {
        vpcsvi.yfilter = yfilter;
    }
}

bool System::MribItems::InstItems::RouteDbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList::OifMpibItems::OifMpibList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oifMpibName" || name == "staleOif" || name == "VpcSvi")
        return true;
    return false;
}

System::MsdpItems::MsdpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::MsdpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "msdp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::~MsdpItems()
{
}

bool System::MsdpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::MsdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::MsdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::MsdpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::MsdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::MsdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::MsdpItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::MsdpItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "msdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::InstItems::~InstItems()
{
}

bool System::MsdpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::MsdpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::MsdpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/msdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::MsdpItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::MsdpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::InstItems::DomItems::~DomItems()
{
}

bool System::MsdpItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/msdp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    origif{YType::str, "origIf"},
    srcactivemsgintvl{YType::uint16, "srcActiveMsgIntvl"},
    reconnintvl{YType::uint16, "reConnIntvl"},
    ctrl{YType::str, "ctrl"}
        ,
    db_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems>())
    , maxgrp_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems>())
    , eventhist_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::EventHistItems>())
    , peer_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems>())
    , interleakp_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems>())
{
    db_items->parent = this;
    maxgrp_items->parent = this;
    eventhist_items->parent = this;
    peer_items->parent = this;
    interleakp_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MsdpItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| origif.is_set
	|| srcactivemsgintvl.is_set
	|| reconnintvl.is_set
	|| ctrl.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (maxgrp_items !=  nullptr && maxgrp_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (peer_items !=  nullptr && peer_items->has_data())
	|| (interleakp_items !=  nullptr && interleakp_items->has_data());
}

bool System::MsdpItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(origif.yfilter)
	|| ydk::is_set(srcactivemsgintvl.yfilter)
	|| ydk::is_set(reconnintvl.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (maxgrp_items !=  nullptr && maxgrp_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (peer_items !=  nullptr && peer_items->has_operation())
	|| (interleakp_items !=  nullptr && interleakp_items->has_operation());
}

std::string System::MsdpItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/msdp-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MsdpItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (origif.is_set || is_set(origif.yfilter)) leaf_name_data.push_back(origif.get_name_leafdata());
    if (srcactivemsgintvl.is_set || is_set(srcactivemsgintvl.yfilter)) leaf_name_data.push_back(srcactivemsgintvl.get_name_leafdata());
    if (reconnintvl.is_set || is_set(reconnintvl.yfilter)) leaf_name_data.push_back(reconnintvl.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "maxgrp-items")
    {
        if(maxgrp_items == nullptr)
        {
            maxgrp_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems>();
        }
        return maxgrp_items;
    }

    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::EventHistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "peer-items")
    {
        if(peer_items == nullptr)
        {
            peer_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems>();
        }
        return peer_items;
    }

    if(child_yang_name == "interleakp-items")
    {
        if(interleakp_items == nullptr)
        {
            interleakp_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems>();
        }
        return interleakp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(maxgrp_items != nullptr)
    {
        children["maxgrp-items"] = maxgrp_items;
    }

    if(eventhist_items != nullptr)
    {
        children["eventHist-items"] = eventhist_items;
    }

    if(peer_items != nullptr)
    {
        children["peer-items"] = peer_items;
    }

    if(interleakp_items != nullptr)
    {
        children["interleakp-items"] = interleakp_items;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origIf")
    {
        origif = value;
        origif.value_namespace = name_space;
        origif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcActiveMsgIntvl")
    {
        srcactivemsgintvl = value;
        srcactivemsgintvl.value_namespace = name_space;
        srcactivemsgintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reConnIntvl")
    {
        reconnintvl = value;
        reconnintvl.value_namespace = name_space;
        reconnintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "origIf")
    {
        origif.yfilter = yfilter;
    }
    if(value_path == "srcActiveMsgIntvl")
    {
        srcactivemsgintvl.yfilter = yfilter;
    }
    if(value_path == "reConnIntvl")
    {
        reconnintvl.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "maxgrp-items" || name == "eventHist-items" || name == "peer-items" || name == "interleakp-items" || name == "name" || name == "origIf" || name == "srcActiveMsgIntvl" || name == "reConnIntvl" || name == "ctrl")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    src_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>())
    , source_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems>())
{
    src_items->parent = this;
    source_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (src_items !=  nullptr && src_items->has_data())
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(src_items != nullptr)
    {
        children["src-items"] = src_items;
    }

    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-items" || name == "source-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::SrcItems()
    :
    route_list(this, {"src", "grp", "rp"})
{

    yang_name = "src-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::~SrcItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::RouteList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    rp{YType::str, "rp"},
    peer{YType::str, "peer"},
    asn{YType::str, "asn"},
    createts{YType::str, "createTs"},
    expirets{YType::str, "expireTs"},
    sacnt{YType::uint32, "saCnt"},
    datapkt{YType::uint32, "dataPkt"}
{

    yang_name = "Route-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::~RouteList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| rp.is_set
	|| peer.is_set
	|| asn.is_set
	|| createts.is_set
	|| expirets.is_set
	|| sacnt.is_set
	|| datapkt.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(rp.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(expirets.yfilter)
	|| ydk::is_set(sacnt.yfilter)
	|| ydk::is_set(datapkt.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    ADD_KEY_TOKEN(rp, "rp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (rp.is_set || is_set(rp.yfilter)) leaf_name_data.push_back(rp.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (expirets.is_set || is_set(expirets.yfilter)) leaf_name_data.push_back(expirets.get_name_leafdata());
    if (sacnt.is_set || is_set(sacnt.yfilter)) leaf_name_data.push_back(sacnt.get_name_leafdata());
    if (datapkt.is_set || is_set(datapkt.yfilter)) leaf_name_data.push_back(datapkt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp")
    {
        rp = value;
        rp.value_namespace = name_space;
        rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expireTs")
    {
        expirets = value;
        expirets.value_namespace = name_space;
        expirets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saCnt")
    {
        sacnt = value;
        sacnt.value_namespace = name_space;
        sacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataPkt")
    {
        datapkt = value;
        datapkt.value_namespace = name_space;
        datapkt.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "rp")
    {
        rp.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "expireTs")
    {
        expirets.yfilter = yfilter;
    }
    if(value_path == "saCnt")
    {
        sacnt.yfilter = yfilter;
    }
    if(value_path == "dataPkt")
    {
        datapkt.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src" || name == "grp" || name == "rp" || name == "peer" || name == "asn" || name == "createTs" || name == "expireTs" || name == "saCnt" || name == "dataPkt")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceItems()
    :
    source_list(this, {"addr"})
{

    yang_name = "source-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::~SourceItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList>();
        c->parent = this;
        source_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : source_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::SourceList()
    :
    addr{YType::str, "addr"},
    grpcnt{YType::uint32, "grpCnt"},
    grplimit{YType::uint32, "grpLimit"},
    srcpfx{YType::str, "srcPfx"},
    violations{YType::uint32, "violations"}
{

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::~SourceList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| grpcnt.is_set
	|| grplimit.is_set
	|| srcpfx.is_set
	|| violations.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(grpcnt.yfilter)
	|| ydk::is_set(grplimit.yfilter)
	|| ydk::is_set(srcpfx.yfilter)
	|| ydk::is_set(violations.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (grpcnt.is_set || is_set(grpcnt.yfilter)) leaf_name_data.push_back(grpcnt.get_name_leafdata());
    if (grplimit.is_set || is_set(grplimit.yfilter)) leaf_name_data.push_back(grplimit.get_name_leafdata());
    if (srcpfx.is_set || is_set(srcpfx.yfilter)) leaf_name_data.push_back(srcpfx.get_name_leafdata());
    if (violations.is_set || is_set(violations.yfilter)) leaf_name_data.push_back(violations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpCnt")
    {
        grpcnt = value;
        grpcnt.value_namespace = name_space;
        grpcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpLimit")
    {
        grplimit = value;
        grplimit.value_namespace = name_space;
        grplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPfx")
    {
        srcpfx = value;
        srcpfx.value_namespace = name_space;
        srcpfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violations")
    {
        violations = value;
        violations.value_namespace = name_space;
        violations.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "grpCnt")
    {
        grpcnt.yfilter = yfilter;
    }
    if(value_path == "grpLimit")
    {
        grplimit.yfilter = yfilter;
    }
    if(value_path == "srcPfx")
    {
        srcpfx.yfilter = yfilter;
    }
    if(value_path == "violations")
    {
        violations.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::DbItems::DbList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "grpCnt" || name == "grpLimit" || name == "srcPfx" || name == "violations")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxgrpItems()
    :
    maxgrpp_list(this, {"srcpfx"})
{

    yang_name = "maxgrp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::~MaxgrpItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<maxgrpp_list.len(); index++)
    {
        if(maxgrpp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::has_operation() const
{
    for (std::size_t index=0; index<maxgrpp_list.len(); index++)
    {
        if(maxgrpp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MaxGrpP-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList>();
        c->parent = this;
        maxgrpp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : maxgrpp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MaxGrpP-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::MaxGrpPList()
    :
    srcpfx{YType::str, "srcPfx"},
    maxgrp{YType::uint32, "maxGrp"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "MaxGrpP-list"; yang_parent_name = "maxgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::~MaxGrpPList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::has_data() const
{
    if (is_presence_container) return true;
    return srcpfx.is_set
	|| maxgrp.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcpfx.yfilter)
	|| ydk::is_set(maxgrp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MaxGrpP-list";
    ADD_KEY_TOKEN(srcpfx, "srcPfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcpfx.is_set || is_set(srcpfx.yfilter)) leaf_name_data.push_back(srcpfx.get_name_leafdata());
    if (maxgrp.is_set || is_set(maxgrp.yfilter)) leaf_name_data.push_back(maxgrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcPfx")
    {
        srcpfx = value;
        srcpfx.value_namespace = name_space;
        srcpfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxGrp")
    {
        maxgrp = value;
        maxgrp.value_namespace = name_space;
        maxgrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcPfx")
    {
        srcpfx.yfilter = yfilter;
    }
    if(value_path == "maxGrp")
    {
        maxgrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::MaxgrpItems::MaxGrpPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srcPfx" || name == "maxGrp" || name == "name" || name == "descr")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventHist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::~EventHistItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventHist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList>();
        c->parent = this;
        eventhistory_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventhistory_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventHist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerItems()
    :
    peer_list(this, {"addr"})
{

    yang_name = "peer-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::~PeerItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_list.len(); index++)
    {
        if(peer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::has_operation() const
{
    for (std::size_t index=0; index<peer_list.len(); index++)
    {
        if(peer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Peer-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList>();
        c->parent = this;
        peer_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : peer_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Peer-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerList()
    :
    addr{YType::str, "addr"},
    adminst{YType::enumeration, "adminSt"},
    srcif{YType::str, "srcIf"},
    asn{YType::str, "asn"},
    srcactivemsglimit{YType::uint32, "srcActiveMsgLimit"},
    kaintvl{YType::uint16, "kaIntvl"},
    katimeout{YType::uint16, "kaTimeout"},
    operst{YType::enumeration, "operSt"},
    remport{YType::uint16, "remPort"},
    localport{YType::uint16, "localPort"},
    lastresetoperqual{YType::str, "lastResetOperQual"},
    discontinuityts{YType::str, "discontinuityTs"},
    upts{YType::str, "upTs"},
    conntmrts{YType::str, "connTmrTs"},
    establishtransitions{YType::uint32, "establishTransitions"},
    descr{YType::str, "descr"},
    name{YType::str, "name"}
        ,
    auth_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems>())
    , meshgrp_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems>())
    , rtctrl_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems>())
    , peerstats_items(std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems>())
{
    auth_items->parent = this;
    meshgrp_items->parent = this;
    rtctrl_items->parent = this;
    peerstats_items->parent = this;

    yang_name = "Peer-list"; yang_parent_name = "peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::~PeerList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| adminst.is_set
	|| srcif.is_set
	|| asn.is_set
	|| srcactivemsglimit.is_set
	|| kaintvl.is_set
	|| katimeout.is_set
	|| operst.is_set
	|| remport.is_set
	|| localport.is_set
	|| lastresetoperqual.is_set
	|| discontinuityts.is_set
	|| upts.is_set
	|| conntmrts.is_set
	|| establishtransitions.is_set
	|| descr.is_set
	|| name.is_set
	|| (auth_items !=  nullptr && auth_items->has_data())
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_data())
	|| (rtctrl_items !=  nullptr && rtctrl_items->has_data())
	|| (peerstats_items !=  nullptr && peerstats_items->has_data());
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(srcactivemsglimit.yfilter)
	|| ydk::is_set(kaintvl.yfilter)
	|| ydk::is_set(katimeout.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(remport.yfilter)
	|| ydk::is_set(localport.yfilter)
	|| ydk::is_set(lastresetoperqual.yfilter)
	|| ydk::is_set(discontinuityts.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(conntmrts.yfilter)
	|| ydk::is_set(establishtransitions.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (auth_items !=  nullptr && auth_items->has_operation())
	|| (meshgrp_items !=  nullptr && meshgrp_items->has_operation())
	|| (rtctrl_items !=  nullptr && rtctrl_items->has_operation())
	|| (peerstats_items !=  nullptr && peerstats_items->has_operation());
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Peer-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (srcactivemsglimit.is_set || is_set(srcactivemsglimit.yfilter)) leaf_name_data.push_back(srcactivemsglimit.get_name_leafdata());
    if (kaintvl.is_set || is_set(kaintvl.yfilter)) leaf_name_data.push_back(kaintvl.get_name_leafdata());
    if (katimeout.is_set || is_set(katimeout.yfilter)) leaf_name_data.push_back(katimeout.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (remport.is_set || is_set(remport.yfilter)) leaf_name_data.push_back(remport.get_name_leafdata());
    if (localport.is_set || is_set(localport.yfilter)) leaf_name_data.push_back(localport.get_name_leafdata());
    if (lastresetoperqual.is_set || is_set(lastresetoperqual.yfilter)) leaf_name_data.push_back(lastresetoperqual.get_name_leafdata());
    if (discontinuityts.is_set || is_set(discontinuityts.yfilter)) leaf_name_data.push_back(discontinuityts.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (conntmrts.is_set || is_set(conntmrts.yfilter)) leaf_name_data.push_back(conntmrts.get_name_leafdata());
    if (establishtransitions.is_set || is_set(establishtransitions.yfilter)) leaf_name_data.push_back(establishtransitions.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-items")
    {
        if(auth_items == nullptr)
        {
            auth_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems>();
        }
        return auth_items;
    }

    if(child_yang_name == "meshgrp-items")
    {
        if(meshgrp_items == nullptr)
        {
            meshgrp_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems>();
        }
        return meshgrp_items;
    }

    if(child_yang_name == "rtctrl-items")
    {
        if(rtctrl_items == nullptr)
        {
            rtctrl_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems>();
        }
        return rtctrl_items;
    }

    if(child_yang_name == "peerstats-items")
    {
        if(peerstats_items == nullptr)
        {
            peerstats_items = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems>();
        }
        return peerstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auth_items != nullptr)
    {
        children["auth-items"] = auth_items;
    }

    if(meshgrp_items != nullptr)
    {
        children["meshgrp-items"] = meshgrp_items;
    }

    if(rtctrl_items != nullptr)
    {
        children["rtctrl-items"] = rtctrl_items;
    }

    if(peerstats_items != nullptr)
    {
        children["peerstats-items"] = peerstats_items;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcActiveMsgLimit")
    {
        srcactivemsglimit = value;
        srcactivemsglimit.value_namespace = name_space;
        srcactivemsglimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl = value;
        kaintvl.value_namespace = name_space;
        kaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaTimeout")
    {
        katimeout = value;
        katimeout.value_namespace = name_space;
        katimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remPort")
    {
        remport = value;
        remport.value_namespace = name_space;
        remport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localPort")
    {
        localport = value;
        localport.value_namespace = name_space;
        localport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastResetOperQual")
    {
        lastresetoperqual = value;
        lastresetoperqual.value_namespace = name_space;
        lastresetoperqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discontinuityTs")
    {
        discontinuityts = value;
        discontinuityts.value_namespace = name_space;
        discontinuityts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connTmrTs")
    {
        conntmrts = value;
        conntmrts.value_namespace = name_space;
        conntmrts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishTransitions")
    {
        establishtransitions = value;
        establishtransitions.value_namespace = name_space;
        establishtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "srcActiveMsgLimit")
    {
        srcactivemsglimit.yfilter = yfilter;
    }
    if(value_path == "kaIntvl")
    {
        kaintvl.yfilter = yfilter;
    }
    if(value_path == "kaTimeout")
    {
        katimeout.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "remPort")
    {
        remport.yfilter = yfilter;
    }
    if(value_path == "localPort")
    {
        localport.yfilter = yfilter;
    }
    if(value_path == "lastResetOperQual")
    {
        lastresetoperqual.yfilter = yfilter;
    }
    if(value_path == "discontinuityTs")
    {
        discontinuityts.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "connTmrTs")
    {
        conntmrts.yfilter = yfilter;
    }
    if(value_path == "establishTransitions")
    {
        establishtransitions.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-items" || name == "meshgrp-items" || name == "rtctrl-items" || name == "peerstats-items" || name == "addr" || name == "adminSt" || name == "srcIf" || name == "asn" || name == "srcActiveMsgLimit" || name == "kaIntvl" || name == "kaTimeout" || name == "operSt" || name == "remPort" || name == "localPort" || name == "lastResetOperQual" || name == "discontinuityTs" || name == "upTs" || name == "connTmrTs" || name == "establishTransitions" || name == "descr" || name == "name")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::AuthItems()
    :
    type{YType::enumeration, "type"},
    key{YType::str, "key"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "auth-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::~AuthItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| key.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AuthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "key" || name == "name" || name == "descr")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::MeshgrpItems()
    :
    grpname{YType::str, "grpName"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "meshgrp-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::~MeshgrpItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::has_data() const
{
    if (is_presence_container) return true;
    return grpname.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "meshgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpname.is_set || is_set(grpname.yfilter)) leaf_name_data.push_back(grpname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpName")
    {
        grpname = value;
        grpname.value_namespace = name_space;
        grpname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpName")
    {
        grpname.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::MeshgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpName" || name == "name" || name == "descr")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtctrlItems()
    :
    rtctrlp_list(this, {"direction"})
{

    yang_name = "rtctrl-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::~RtctrlItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtctrlp_list.len(); index++)
    {
        if(rtctrlp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::has_operation() const
{
    for (std::size_t index=0; index<rtctrlp_list.len(); index++)
    {
        if(rtctrlp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtCtrlP-list")
    {
        auto c = std::make_shared<System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList>();
        c->parent = this;
        rtctrlp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtctrlp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtCtrlP-list")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::RtCtrlPList()
    :
    direction{YType::enumeration, "direction"},
    pfxlist{YType::str, "pfxList"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "RtCtrlP-list"; yang_parent_name = "rtctrl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::~RtCtrlPList()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| pfxlist.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtCtrlP-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::RtctrlItems::RtCtrlPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "pfxList" || name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::PeerstatsItems()
    :
    lastmessagercvd{YType::str, "lastMessageRcvd"},
    sareqrcvd{YType::uint32, "saReqRcvd"},
    sareqsent{YType::uint32, "saReqSent"},
    sarsprcvd{YType::uint32, "saRspRcvd"},
    sarspsent{YType::uint32, "saRspSent"},
    ctrlmessagesrcvd{YType::uint32, "ctrlMessagesRcvd"},
    ctrlmessagessent{YType::uint32, "ctrlMessagesSent"},
    datamessagesrcvd{YType::uint32, "dataMessagesRcvd"},
    datamessagessent{YType::uint32, "dataMessagesSent"},
    notifrcvd{YType::uint32, "notifRcvd"},
    notifsent{YType::uint32, "notifSent"},
    karcvd{YType::uint32, "kaRcvd"},
    kasent{YType::uint32, "kaSent"},
    rpfchkfail{YType::uint32, "rpfChkFail"},
    connattempts{YType::uint32, "connAttempts"},
    rtcnt{YType::uint32, "rtCnt"}
{

    yang_name = "peerstats-items"; yang_parent_name = "Peer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::~PeerstatsItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lastmessagercvd.is_set
	|| sareqrcvd.is_set
	|| sareqsent.is_set
	|| sarsprcvd.is_set
	|| sarspsent.is_set
	|| ctrlmessagesrcvd.is_set
	|| ctrlmessagessent.is_set
	|| datamessagesrcvd.is_set
	|| datamessagessent.is_set
	|| notifrcvd.is_set
	|| notifsent.is_set
	|| karcvd.is_set
	|| kasent.is_set
	|| rpfchkfail.is_set
	|| connattempts.is_set
	|| rtcnt.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastmessagercvd.yfilter)
	|| ydk::is_set(sareqrcvd.yfilter)
	|| ydk::is_set(sareqsent.yfilter)
	|| ydk::is_set(sarsprcvd.yfilter)
	|| ydk::is_set(sarspsent.yfilter)
	|| ydk::is_set(ctrlmessagesrcvd.yfilter)
	|| ydk::is_set(ctrlmessagessent.yfilter)
	|| ydk::is_set(datamessagesrcvd.yfilter)
	|| ydk::is_set(datamessagessent.yfilter)
	|| ydk::is_set(notifrcvd.yfilter)
	|| ydk::is_set(notifsent.yfilter)
	|| ydk::is_set(karcvd.yfilter)
	|| ydk::is_set(kasent.yfilter)
	|| ydk::is_set(rpfchkfail.yfilter)
	|| ydk::is_set(connattempts.yfilter)
	|| ydk::is_set(rtcnt.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peerstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastmessagercvd.is_set || is_set(lastmessagercvd.yfilter)) leaf_name_data.push_back(lastmessagercvd.get_name_leafdata());
    if (sareqrcvd.is_set || is_set(sareqrcvd.yfilter)) leaf_name_data.push_back(sareqrcvd.get_name_leafdata());
    if (sareqsent.is_set || is_set(sareqsent.yfilter)) leaf_name_data.push_back(sareqsent.get_name_leafdata());
    if (sarsprcvd.is_set || is_set(sarsprcvd.yfilter)) leaf_name_data.push_back(sarsprcvd.get_name_leafdata());
    if (sarspsent.is_set || is_set(sarspsent.yfilter)) leaf_name_data.push_back(sarspsent.get_name_leafdata());
    if (ctrlmessagesrcvd.is_set || is_set(ctrlmessagesrcvd.yfilter)) leaf_name_data.push_back(ctrlmessagesrcvd.get_name_leafdata());
    if (ctrlmessagessent.is_set || is_set(ctrlmessagessent.yfilter)) leaf_name_data.push_back(ctrlmessagessent.get_name_leafdata());
    if (datamessagesrcvd.is_set || is_set(datamessagesrcvd.yfilter)) leaf_name_data.push_back(datamessagesrcvd.get_name_leafdata());
    if (datamessagessent.is_set || is_set(datamessagessent.yfilter)) leaf_name_data.push_back(datamessagessent.get_name_leafdata());
    if (notifrcvd.is_set || is_set(notifrcvd.yfilter)) leaf_name_data.push_back(notifrcvd.get_name_leafdata());
    if (notifsent.is_set || is_set(notifsent.yfilter)) leaf_name_data.push_back(notifsent.get_name_leafdata());
    if (karcvd.is_set || is_set(karcvd.yfilter)) leaf_name_data.push_back(karcvd.get_name_leafdata());
    if (kasent.is_set || is_set(kasent.yfilter)) leaf_name_data.push_back(kasent.get_name_leafdata());
    if (rpfchkfail.is_set || is_set(rpfchkfail.yfilter)) leaf_name_data.push_back(rpfchkfail.get_name_leafdata());
    if (connattempts.is_set || is_set(connattempts.yfilter)) leaf_name_data.push_back(connattempts.get_name_leafdata());
    if (rtcnt.is_set || is_set(rtcnt.yfilter)) leaf_name_data.push_back(rtcnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastMessageRcvd")
    {
        lastmessagercvd = value;
        lastmessagercvd.value_namespace = name_space;
        lastmessagercvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saReqRcvd")
    {
        sareqrcvd = value;
        sareqrcvd.value_namespace = name_space;
        sareqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saReqSent")
    {
        sareqsent = value;
        sareqsent.value_namespace = name_space;
        sareqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saRspRcvd")
    {
        sarsprcvd = value;
        sarsprcvd.value_namespace = name_space;
        sarsprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saRspSent")
    {
        sarspsent = value;
        sarspsent.value_namespace = name_space;
        sarspsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlMessagesRcvd")
    {
        ctrlmessagesrcvd = value;
        ctrlmessagesrcvd.value_namespace = name_space;
        ctrlmessagesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrlMessagesSent")
    {
        ctrlmessagessent = value;
        ctrlmessagessent.value_namespace = name_space;
        ctrlmessagessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataMessagesRcvd")
    {
        datamessagesrcvd = value;
        datamessagesrcvd.value_namespace = name_space;
        datamessagesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataMessagesSent")
    {
        datamessagessent = value;
        datamessagessent.value_namespace = name_space;
        datamessagessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifRcvd")
    {
        notifrcvd = value;
        notifrcvd.value_namespace = name_space;
        notifrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifSent")
    {
        notifsent = value;
        notifsent.value_namespace = name_space;
        notifsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaRcvd")
    {
        karcvd = value;
        karcvd.value_namespace = name_space;
        karcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kaSent")
    {
        kasent = value;
        kasent.value_namespace = name_space;
        kasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfChkFail")
    {
        rpfchkfail = value;
        rpfchkfail.value_namespace = name_space;
        rpfchkfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connAttempts")
    {
        connattempts = value;
        connattempts.value_namespace = name_space;
        connattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtCnt")
    {
        rtcnt = value;
        rtcnt.value_namespace = name_space;
        rtcnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastMessageRcvd")
    {
        lastmessagercvd.yfilter = yfilter;
    }
    if(value_path == "saReqRcvd")
    {
        sareqrcvd.yfilter = yfilter;
    }
    if(value_path == "saReqSent")
    {
        sareqsent.yfilter = yfilter;
    }
    if(value_path == "saRspRcvd")
    {
        sarsprcvd.yfilter = yfilter;
    }
    if(value_path == "saRspSent")
    {
        sarspsent.yfilter = yfilter;
    }
    if(value_path == "ctrlMessagesRcvd")
    {
        ctrlmessagesrcvd.yfilter = yfilter;
    }
    if(value_path == "ctrlMessagesSent")
    {
        ctrlmessagessent.yfilter = yfilter;
    }
    if(value_path == "dataMessagesRcvd")
    {
        datamessagesrcvd.yfilter = yfilter;
    }
    if(value_path == "dataMessagesSent")
    {
        datamessagessent.yfilter = yfilter;
    }
    if(value_path == "notifRcvd")
    {
        notifrcvd.yfilter = yfilter;
    }
    if(value_path == "notifSent")
    {
        notifsent.yfilter = yfilter;
    }
    if(value_path == "kaRcvd")
    {
        karcvd.yfilter = yfilter;
    }
    if(value_path == "kaSent")
    {
        kasent.yfilter = yfilter;
    }
    if(value_path == "rpfChkFail")
    {
        rpfchkfail.yfilter = yfilter;
    }
    if(value_path == "connAttempts")
    {
        connattempts.yfilter = yfilter;
    }
    if(value_path == "rtCnt")
    {
        rtcnt.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::PeerItems::PeerList::PeerstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastMessageRcvd" || name == "saReqRcvd" || name == "saReqSent" || name == "saRspRcvd" || name == "saRspSent" || name == "ctrlMessagesRcvd" || name == "ctrlMessagesSent" || name == "dataMessagesRcvd" || name == "dataMessagesSent" || name == "notifRcvd" || name == "notifSent" || name == "kaRcvd" || name == "kaSent" || name == "rpfChkFail" || name == "connAttempts" || name == "rtCnt")
        return true;
    return false;
}

System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::InterleakpItems()
    :
    pfxlist{YType::str, "pfxList"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "interleakp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::~InterleakpItems()
{
}

bool System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::has_data() const
{
    if (is_presence_container) return true;
    return pfxlist.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set;
}

bool System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleakp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::MsdpItems::InstItems::DomItems::DomList::InterleakpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxList" || name == "name" || name == "descr" || name == "scope" || name == "rtMap")
        return true;
    return false;
}

System::NdItems::NdItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::NdItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "nd-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::~NdItems()
{
}

bool System::NdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NdItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::NdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::NdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::NdItems::InstItems::InstItems()
    :
    solicitnghbradvertisement{YType::enumeration, "solicitNghbrAdvertisement"},
    acceptsolicitnghbrentry{YType::enumeration, "acceptSolicitNghbrEntry"},
    probeintervalforsolicitnghbr{YType::uint16, "probeIntervalForSolicitNghbr"},
    aginginterval{YType::uint16, "agingInterval"},
    offlisttimeout{YType::uint16, "offListTimeout"},
    ipv6adjroutedistance{YType::uint32, "ipv6AdjRouteDistance"},
    cachelimit{YType::uint32, "cacheLimit"},
    cachesyslograte{YType::uint32, "cacheSyslogRate"},
    configerr{YType::str, "configErr"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::NdItems::InstItems::DomItems>())
    , ipv6gleanthrottle_items(std::make_shared<System::NdItems::InstItems::Ipv6gleanthrottleItems>())
    , vpc_items(std::make_shared<System::NdItems::InstItems::VpcItems>())
    , offliststat_items(std::make_shared<System::NdItems::InstItems::OffliststatItems>())
    , glblpktstats_items(std::make_shared<System::NdItems::InstItems::GlblpktstatsItems>())
    , vaddrllstat_items(std::make_shared<System::NdItems::InstItems::VaddrllstatItems>())
    , vpcstat_items(std::make_shared<System::NdItems::InstItems::VpcstatItems>())
{
    dom_items->parent = this;
    ipv6gleanthrottle_items->parent = this;
    vpc_items->parent = this;
    offliststat_items->parent = this;
    glblpktstats_items->parent = this;
    vaddrllstat_items->parent = this;
    vpcstat_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "nd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::~InstItems()
{
}

bool System::NdItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return solicitnghbradvertisement.is_set
	|| acceptsolicitnghbrentry.is_set
	|| probeintervalforsolicitnghbr.is_set
	|| aginginterval.is_set
	|| offlisttimeout.is_set
	|| ipv6adjroutedistance.is_set
	|| cachelimit.is_set
	|| cachesyslograte.is_set
	|| configerr.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (ipv6gleanthrottle_items !=  nullptr && ipv6gleanthrottle_items->has_data())
	|| (vpc_items !=  nullptr && vpc_items->has_data())
	|| (offliststat_items !=  nullptr && offliststat_items->has_data())
	|| (glblpktstats_items !=  nullptr && glblpktstats_items->has_data())
	|| (vaddrllstat_items !=  nullptr && vaddrllstat_items->has_data())
	|| (vpcstat_items !=  nullptr && vpcstat_items->has_data());
}

bool System::NdItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(solicitnghbradvertisement.yfilter)
	|| ydk::is_set(acceptsolicitnghbrentry.yfilter)
	|| ydk::is_set(probeintervalforsolicitnghbr.yfilter)
	|| ydk::is_set(aginginterval.yfilter)
	|| ydk::is_set(offlisttimeout.yfilter)
	|| ydk::is_set(ipv6adjroutedistance.yfilter)
	|| ydk::is_set(cachelimit.yfilter)
	|| ydk::is_set(cachesyslograte.yfilter)
	|| ydk::is_set(configerr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (ipv6gleanthrottle_items !=  nullptr && ipv6gleanthrottle_items->has_operation())
	|| (vpc_items !=  nullptr && vpc_items->has_operation())
	|| (offliststat_items !=  nullptr && offliststat_items->has_operation())
	|| (glblpktstats_items !=  nullptr && glblpktstats_items->has_operation())
	|| (vaddrllstat_items !=  nullptr && vaddrllstat_items->has_operation())
	|| (vpcstat_items !=  nullptr && vpcstat_items->has_operation());
}

std::string System::NdItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (solicitnghbradvertisement.is_set || is_set(solicitnghbradvertisement.yfilter)) leaf_name_data.push_back(solicitnghbradvertisement.get_name_leafdata());
    if (acceptsolicitnghbrentry.is_set || is_set(acceptsolicitnghbrentry.yfilter)) leaf_name_data.push_back(acceptsolicitnghbrentry.get_name_leafdata());
    if (probeintervalforsolicitnghbr.is_set || is_set(probeintervalforsolicitnghbr.yfilter)) leaf_name_data.push_back(probeintervalforsolicitnghbr.get_name_leafdata());
    if (aginginterval.is_set || is_set(aginginterval.yfilter)) leaf_name_data.push_back(aginginterval.get_name_leafdata());
    if (offlisttimeout.is_set || is_set(offlisttimeout.yfilter)) leaf_name_data.push_back(offlisttimeout.get_name_leafdata());
    if (ipv6adjroutedistance.is_set || is_set(ipv6adjroutedistance.yfilter)) leaf_name_data.push_back(ipv6adjroutedistance.get_name_leafdata());
    if (cachelimit.is_set || is_set(cachelimit.yfilter)) leaf_name_data.push_back(cachelimit.get_name_leafdata());
    if (cachesyslograte.is_set || is_set(cachesyslograte.yfilter)) leaf_name_data.push_back(cachesyslograte.get_name_leafdata());
    if (configerr.is_set || is_set(configerr.yfilter)) leaf_name_data.push_back(configerr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NdItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "ipv6gleanthrottle-items")
    {
        if(ipv6gleanthrottle_items == nullptr)
        {
            ipv6gleanthrottle_items = std::make_shared<System::NdItems::InstItems::Ipv6gleanthrottleItems>();
        }
        return ipv6gleanthrottle_items;
    }

    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::NdItems::InstItems::VpcItems>();
        }
        return vpc_items;
    }

    if(child_yang_name == "offliststat-items")
    {
        if(offliststat_items == nullptr)
        {
            offliststat_items = std::make_shared<System::NdItems::InstItems::OffliststatItems>();
        }
        return offliststat_items;
    }

    if(child_yang_name == "glblpktstats-items")
    {
        if(glblpktstats_items == nullptr)
        {
            glblpktstats_items = std::make_shared<System::NdItems::InstItems::GlblpktstatsItems>();
        }
        return glblpktstats_items;
    }

    if(child_yang_name == "vaddrllstat-items")
    {
        if(vaddrllstat_items == nullptr)
        {
            vaddrllstat_items = std::make_shared<System::NdItems::InstItems::VaddrllstatItems>();
        }
        return vaddrllstat_items;
    }

    if(child_yang_name == "vpcstat-items")
    {
        if(vpcstat_items == nullptr)
        {
            vpcstat_items = std::make_shared<System::NdItems::InstItems::VpcstatItems>();
        }
        return vpcstat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(ipv6gleanthrottle_items != nullptr)
    {
        children["ipv6gleanthrottle-items"] = ipv6gleanthrottle_items;
    }

    if(vpc_items != nullptr)
    {
        children["vpc-items"] = vpc_items;
    }

    if(offliststat_items != nullptr)
    {
        children["offliststat-items"] = offliststat_items;
    }

    if(glblpktstats_items != nullptr)
    {
        children["glblpktstats-items"] = glblpktstats_items;
    }

    if(vaddrllstat_items != nullptr)
    {
        children["vaddrllstat-items"] = vaddrllstat_items;
    }

    if(vpcstat_items != nullptr)
    {
        children["vpcstat-items"] = vpcstat_items;
    }

    return children;
}

void System::NdItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "solicitNghbrAdvertisement")
    {
        solicitnghbradvertisement = value;
        solicitnghbradvertisement.value_namespace = name_space;
        solicitnghbradvertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acceptSolicitNghbrEntry")
    {
        acceptsolicitnghbrentry = value;
        acceptsolicitnghbrentry.value_namespace = name_space;
        acceptsolicitnghbrentry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeIntervalForSolicitNghbr")
    {
        probeintervalforsolicitnghbr = value;
        probeintervalforsolicitnghbr.value_namespace = name_space;
        probeintervalforsolicitnghbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agingInterval")
    {
        aginginterval = value;
        aginginterval.value_namespace = name_space;
        aginginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offListTimeout")
    {
        offlisttimeout = value;
        offlisttimeout.value_namespace = name_space;
        offlisttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6AdjRouteDistance")
    {
        ipv6adjroutedistance = value;
        ipv6adjroutedistance.value_namespace = name_space;
        ipv6adjroutedistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheLimit")
    {
        cachelimit = value;
        cachelimit.value_namespace = name_space;
        cachelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheSyslogRate")
    {
        cachesyslograte = value;
        cachesyslograte.value_namespace = name_space;
        cachesyslograte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErr")
    {
        configerr = value;
        configerr.value_namespace = name_space;
        configerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "solicitNghbrAdvertisement")
    {
        solicitnghbradvertisement.yfilter = yfilter;
    }
    if(value_path == "acceptSolicitNghbrEntry")
    {
        acceptsolicitnghbrentry.yfilter = yfilter;
    }
    if(value_path == "probeIntervalForSolicitNghbr")
    {
        probeintervalforsolicitnghbr.yfilter = yfilter;
    }
    if(value_path == "agingInterval")
    {
        aginginterval.yfilter = yfilter;
    }
    if(value_path == "offListTimeout")
    {
        offlisttimeout.yfilter = yfilter;
    }
    if(value_path == "ipv6AdjRouteDistance")
    {
        ipv6adjroutedistance.yfilter = yfilter;
    }
    if(value_path == "cacheLimit")
    {
        cachelimit.yfilter = yfilter;
    }
    if(value_path == "cacheSyslogRate")
    {
        cachesyslograte.yfilter = yfilter;
    }
    if(value_path == "configErr")
    {
        configerr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "ipv6gleanthrottle-items" || name == "vpc-items" || name == "offliststat-items" || name == "glblpktstats-items" || name == "vaddrllstat-items" || name == "vpcstat-items" || name == "solicitNghbrAdvertisement" || name == "acceptSolicitNghbrEntry" || name == "probeIntervalForSolicitNghbr" || name == "agingInterval" || name == "offListTimeout" || name == "ipv6AdjRouteDistance" || name == "cacheLimit" || name == "cacheSyslogRate" || name == "configErr" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::DomItems::~DomItems()
{
}

bool System::NdItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::DbItems>())
    , if_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems>())
    , vaddrstatglobal_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems>())
{
    db_items->parent = this;
    if_items->parent = this;
    vaddrstatglobal_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (vaddrstatglobal_items !=  nullptr && vaddrstatglobal_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (vaddrstatglobal_items !=  nullptr && vaddrstatglobal_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "vaddrstatglobal-items")
    {
        if(vaddrstatglobal_items == nullptr)
        {
            vaddrstatglobal_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems>();
        }
        return vaddrstatglobal_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(vaddrstatglobal_items != nullptr)
    {
        children["vaddrstatglobal-items"] = vaddrstatglobal_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "if-items" || name == "vaddrstatglobal-items" || name == "name")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    adj_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems>())
{
    adj_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (adj_items !=  nullptr && adj_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems>();
        }
        return adj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjItems()
    :
    adjep_list(this, {"ifid", "addr"})
{

    yang_name = "adj-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::~AdjItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::AdjEpList()
    :
    ifid{YType::str, "ifId"},
    addr{YType::str, "addr"},
    operst{YType::enumeration, "operSt"},
    physifid{YType::str, "physIfId"},
    name{YType::str, "name"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| addr.is_set
	|| operst.is_set
	|| physifid.is_set
	|| name.is_set
	|| mac.is_set
	|| upts.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(physifid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (physifid.is_set || is_set(physifid.yfilter)) leaf_name_data.push_back(physifid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physIfId")
    {
        physifid = value;
        physifid.value_namespace = name_space;
        physifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "physIfId")
    {
        physifid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifId" || name == "addr" || name == "operSt" || name == "physIfId" || name == "name" || name == "mac" || name == "upTS")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    macextract{YType::enumeration, "macExtract"},
    dnssuppress{YType::enumeration, "dnsSuppress"},
    dnssearchlistsuppress{YType::enumeration, "dnsSearchListSuppress"},
    routesuppress{YType::enumeration, "routeSuppress"},
    routerpreference{YType::enumeration, "routerPreference"},
    ctrl{YType::str, "ctrl"},
    nsintvl{YType::uint32, "nsIntvl"},
    raintvl{YType::uint16, "raIntvl"},
    raintvlmin{YType::uint16, "raIntvlMin"},
    hoplimit{YType::uint8, "hopLimit"},
    mtu{YType::uint16, "mtu"},
    ralifetime{YType::uint16, "raLifetime"},
    reachabletime{YType::uint32, "reachableTime"},
    retranstimer{YType::uint32, "retransTimer"},
    dadattempts{YType::uint16, "dadAttempts"},
    dadnsinterval{YType::uint16, "dadnsInterval"},
    configerror{YType::enumeration, "configError"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    sadj_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>())
    , dnsslif_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems>())
    , dnsstat_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems>())
    , routes_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems>())
    , pfx_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems>())
    , defpfx_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems>())
    , dns_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems>())
    , dnssl_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems>())
    , rtrstat_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems>())
    , ifstats_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems>())
    , vaddrstat_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems>())
    , rtvrfmbr_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    sadj_items->parent = this;
    dnsslif_items->parent = this;
    dnsstat_items->parent = this;
    routes_items->parent = this;
    pfx_items->parent = this;
    defpfx_items->parent = this;
    dns_items->parent = this;
    dnssl_items->parent = this;
    rtrstat_items->parent = this;
    ifstats_items->parent = this;
    vaddrstat_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| macextract.is_set
	|| dnssuppress.is_set
	|| dnssearchlistsuppress.is_set
	|| routesuppress.is_set
	|| routerpreference.is_set
	|| ctrl.is_set
	|| nsintvl.is_set
	|| raintvl.is_set
	|| raintvlmin.is_set
	|| hoplimit.is_set
	|| mtu.is_set
	|| ralifetime.is_set
	|| reachabletime.is_set
	|| retranstimer.is_set
	|| dadattempts.is_set
	|| dadnsinterval.is_set
	|| configerror.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (sadj_items !=  nullptr && sadj_items->has_data())
	|| (dnsslif_items !=  nullptr && dnsslif_items->has_data())
	|| (dnsstat_items !=  nullptr && dnsstat_items->has_data())
	|| (routes_items !=  nullptr && routes_items->has_data())
	|| (pfx_items !=  nullptr && pfx_items->has_data())
	|| (defpfx_items !=  nullptr && defpfx_items->has_data())
	|| (dns_items !=  nullptr && dns_items->has_data())
	|| (dnssl_items !=  nullptr && dnssl_items->has_data())
	|| (rtrstat_items !=  nullptr && rtrstat_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (vaddrstat_items !=  nullptr && vaddrstat_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(macextract.yfilter)
	|| ydk::is_set(dnssuppress.yfilter)
	|| ydk::is_set(dnssearchlistsuppress.yfilter)
	|| ydk::is_set(routesuppress.yfilter)
	|| ydk::is_set(routerpreference.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(nsintvl.yfilter)
	|| ydk::is_set(raintvl.yfilter)
	|| ydk::is_set(raintvlmin.yfilter)
	|| ydk::is_set(hoplimit.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(ralifetime.yfilter)
	|| ydk::is_set(reachabletime.yfilter)
	|| ydk::is_set(retranstimer.yfilter)
	|| ydk::is_set(dadattempts.yfilter)
	|| ydk::is_set(dadnsinterval.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (sadj_items !=  nullptr && sadj_items->has_operation())
	|| (dnsslif_items !=  nullptr && dnsslif_items->has_operation())
	|| (dnsstat_items !=  nullptr && dnsstat_items->has_operation())
	|| (routes_items !=  nullptr && routes_items->has_operation())
	|| (pfx_items !=  nullptr && pfx_items->has_operation())
	|| (defpfx_items !=  nullptr && defpfx_items->has_operation())
	|| (dns_items !=  nullptr && dns_items->has_operation())
	|| (dnssl_items !=  nullptr && dnssl_items->has_operation())
	|| (rtrstat_items !=  nullptr && rtrstat_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (vaddrstat_items !=  nullptr && vaddrstat_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (macextract.is_set || is_set(macextract.yfilter)) leaf_name_data.push_back(macextract.get_name_leafdata());
    if (dnssuppress.is_set || is_set(dnssuppress.yfilter)) leaf_name_data.push_back(dnssuppress.get_name_leafdata());
    if (dnssearchlistsuppress.is_set || is_set(dnssearchlistsuppress.yfilter)) leaf_name_data.push_back(dnssearchlistsuppress.get_name_leafdata());
    if (routesuppress.is_set || is_set(routesuppress.yfilter)) leaf_name_data.push_back(routesuppress.get_name_leafdata());
    if (routerpreference.is_set || is_set(routerpreference.yfilter)) leaf_name_data.push_back(routerpreference.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (nsintvl.is_set || is_set(nsintvl.yfilter)) leaf_name_data.push_back(nsintvl.get_name_leafdata());
    if (raintvl.is_set || is_set(raintvl.yfilter)) leaf_name_data.push_back(raintvl.get_name_leafdata());
    if (raintvlmin.is_set || is_set(raintvlmin.yfilter)) leaf_name_data.push_back(raintvlmin.get_name_leafdata());
    if (hoplimit.is_set || is_set(hoplimit.yfilter)) leaf_name_data.push_back(hoplimit.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (ralifetime.is_set || is_set(ralifetime.yfilter)) leaf_name_data.push_back(ralifetime.get_name_leafdata());
    if (reachabletime.is_set || is_set(reachabletime.yfilter)) leaf_name_data.push_back(reachabletime.get_name_leafdata());
    if (retranstimer.is_set || is_set(retranstimer.yfilter)) leaf_name_data.push_back(retranstimer.get_name_leafdata());
    if (dadattempts.is_set || is_set(dadattempts.yfilter)) leaf_name_data.push_back(dadattempts.get_name_leafdata());
    if (dadnsinterval.is_set || is_set(dadnsinterval.yfilter)) leaf_name_data.push_back(dadnsinterval.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sadj-items")
    {
        if(sadj_items == nullptr)
        {
            sadj_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>();
        }
        return sadj_items;
    }

    if(child_yang_name == "dnsslif-items")
    {
        if(dnsslif_items == nullptr)
        {
            dnsslif_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems>();
        }
        return dnsslif_items;
    }

    if(child_yang_name == "dnsstat-items")
    {
        if(dnsstat_items == nullptr)
        {
            dnsstat_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems>();
        }
        return dnsstat_items;
    }

    if(child_yang_name == "routes-items")
    {
        if(routes_items == nullptr)
        {
            routes_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems>();
        }
        return routes_items;
    }

    if(child_yang_name == "pfx-items")
    {
        if(pfx_items == nullptr)
        {
            pfx_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems>();
        }
        return pfx_items;
    }

    if(child_yang_name == "defpfx-items")
    {
        if(defpfx_items == nullptr)
        {
            defpfx_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems>();
        }
        return defpfx_items;
    }

    if(child_yang_name == "dns-items")
    {
        if(dns_items == nullptr)
        {
            dns_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems>();
        }
        return dns_items;
    }

    if(child_yang_name == "dnssl-items")
    {
        if(dnssl_items == nullptr)
        {
            dnssl_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems>();
        }
        return dnssl_items;
    }

    if(child_yang_name == "rtrstat-items")
    {
        if(rtrstat_items == nullptr)
        {
            rtrstat_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems>();
        }
        return rtrstat_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "vaddrstat-items")
    {
        if(vaddrstat_items == nullptr)
        {
            vaddrstat_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems>();
        }
        return vaddrstat_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sadj_items != nullptr)
    {
        children["sadj-items"] = sadj_items;
    }

    if(dnsslif_items != nullptr)
    {
        children["dnsslif-items"] = dnsslif_items;
    }

    if(dnsstat_items != nullptr)
    {
        children["dnsstat-items"] = dnsstat_items;
    }

    if(routes_items != nullptr)
    {
        children["routes-items"] = routes_items;
    }

    if(pfx_items != nullptr)
    {
        children["pfx-items"] = pfx_items;
    }

    if(defpfx_items != nullptr)
    {
        children["defpfx-items"] = defpfx_items;
    }

    if(dns_items != nullptr)
    {
        children["dns-items"] = dns_items;
    }

    if(dnssl_items != nullptr)
    {
        children["dnssl-items"] = dnssl_items;
    }

    if(rtrstat_items != nullptr)
    {
        children["rtrstat-items"] = rtrstat_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    if(vaddrstat_items != nullptr)
    {
        children["vaddrstat-items"] = vaddrstat_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macExtract")
    {
        macextract = value;
        macextract.value_namespace = name_space;
        macextract.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSuppress")
    {
        dnssuppress = value;
        dnssuppress.value_namespace = name_space;
        dnssuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSearchListSuppress")
    {
        dnssearchlistsuppress = value;
        dnssearchlistsuppress.value_namespace = name_space;
        dnssearchlistsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeSuppress")
    {
        routesuppress = value;
        routesuppress.value_namespace = name_space;
        routesuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerPreference")
    {
        routerpreference = value;
        routerpreference.value_namespace = name_space;
        routerpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsIntvl")
    {
        nsintvl = value;
        nsintvl.value_namespace = name_space;
        nsintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raIntvl")
    {
        raintvl = value;
        raintvl.value_namespace = name_space;
        raintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raIntvlMin")
    {
        raintvlmin = value;
        raintvlmin.value_namespace = name_space;
        raintvlmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimit")
    {
        hoplimit = value;
        hoplimit.value_namespace = name_space;
        hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raLifetime")
    {
        ralifetime = value;
        ralifetime.value_namespace = name_space;
        ralifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableTime")
    {
        reachabletime = value;
        reachabletime.value_namespace = name_space;
        reachabletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransTimer")
    {
        retranstimer = value;
        retranstimer.value_namespace = name_space;
        retranstimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dadAttempts")
    {
        dadattempts = value;
        dadattempts.value_namespace = name_space;
        dadattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dadnsInterval")
    {
        dadnsinterval = value;
        dadnsinterval.value_namespace = name_space;
        dadnsinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "macExtract")
    {
        macextract.yfilter = yfilter;
    }
    if(value_path == "dnsSuppress")
    {
        dnssuppress.yfilter = yfilter;
    }
    if(value_path == "dnsSearchListSuppress")
    {
        dnssearchlistsuppress.yfilter = yfilter;
    }
    if(value_path == "routeSuppress")
    {
        routesuppress.yfilter = yfilter;
    }
    if(value_path == "routerPreference")
    {
        routerpreference.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "nsIntvl")
    {
        nsintvl.yfilter = yfilter;
    }
    if(value_path == "raIntvl")
    {
        raintvl.yfilter = yfilter;
    }
    if(value_path == "raIntvlMin")
    {
        raintvlmin.yfilter = yfilter;
    }
    if(value_path == "hopLimit")
    {
        hoplimit.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "raLifetime")
    {
        ralifetime.yfilter = yfilter;
    }
    if(value_path == "reachableTime")
    {
        reachabletime.yfilter = yfilter;
    }
    if(value_path == "retransTimer")
    {
        retranstimer.yfilter = yfilter;
    }
    if(value_path == "dadAttempts")
    {
        dadattempts.yfilter = yfilter;
    }
    if(value_path == "dadnsInterval")
    {
        dadnsinterval.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sadj-items" || name == "dnsslif-items" || name == "dnsstat-items" || name == "routes-items" || name == "pfx-items" || name == "defpfx-items" || name == "dns-items" || name == "dnssl-items" || name == "rtrstat-items" || name == "ifstats-items" || name == "vaddrstat-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "macExtract" || name == "dnsSuppress" || name == "dnsSearchListSuppress" || name == "routeSuppress" || name == "routerPreference" || name == "ctrl" || name == "nsIntvl" || name == "raIntvl" || name == "raIntvlMin" || name == "hopLimit" || name == "mtu" || name == "raLifetime" || name == "reachableTime" || name == "retransTimer" || name == "dadAttempts" || name == "dadnsInterval" || name == "configError" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::SadjItems()
    :
    stadjep_list(this, {"addr"})
{

    yang_name = "sadj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::~SadjItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_operation() const
{
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StAdjEp-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList>();
        c->parent = this;
        stadjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : stadjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StAdjEp-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::StAdjEpList()
    :
    addr{YType::str, "addr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"}
        ,
    rtfvepdefreftostadjepv6_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items>())
{
    rtfvepdefreftostadjepv6_items->parent = this;

    yang_name = "StAdjEp-list"; yang_parent_name = "sadj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::~StAdjEpList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| mac.is_set
	|| upts.is_set
	|| (rtfvepdefreftostadjepv6_items !=  nullptr && rtfvepdefreftostadjepv6_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| (rtfvepdefreftostadjepv6_items !=  nullptr && rtfvepdefreftostadjepv6_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StAdjEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefRefToStAdjEpV6-items")
    {
        if(rtfvepdefreftostadjepv6_items == nullptr)
        {
            rtfvepdefreftostadjepv6_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items>();
        }
        return rtfvepdefreftostadjepv6_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtfvepdefreftostadjepv6_items != nullptr)
    {
        children["rtfvEpDefRefToStAdjEpV6-items"] = rtfvepdefreftostadjepv6_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefRefToStAdjEpV6-items" || name == "addr" || name == "operSt" || name == "operStQual" || name == "name" || name == "mac" || name == "upTS")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtfvEpDefRefToStAdjEpV6Items()
    :
    rtfvepdefreftostadjepv6_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToStAdjEpV6-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::~RtfvEpDefRefToStAdjEpV6Items()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftostadjepv6_list.len(); index++)
    {
        if(rtfvepdefreftostadjepv6_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftostadjepv6_list.len(); index++)
    {
        if(rtfvepdefreftostadjepv6_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToStAdjEpV6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToStAdjEpV6-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List>();
        c->parent = this;
        rtfvepdefreftostadjepv6_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtfvepdefreftostadjepv6_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToStAdjEpV6-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::RtFvEpDefRefToStAdjEpV6List()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToStAdjEpV6-list"; yang_parent_name = "rtfvEpDefRefToStAdjEpV6-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::~RtFvEpDefRefToStAdjEpV6List()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToStAdjEpV6-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpV6Items::RtFvEpDefRefToStAdjEpV6List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::DnsslifItems()
    :
    dnssearchlistsuppress{YType::boolean, "dnsSearchListSuppress"}
        ,
    server_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems>())
{
    server_items->parent = this;

    yang_name = "dnsslif-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::~DnsslifItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::has_data() const
{
    if (is_presence_container) return true;
    return dnssearchlistsuppress.is_set
	|| (server_items !=  nullptr && server_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dnssearchlistsuppress.yfilter)
	|| (server_items !=  nullptr && server_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnsslif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dnssearchlistsuppress.is_set || is_set(dnssearchlistsuppress.yfilter)) leaf_name_data.push_back(dnssearchlistsuppress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-items")
    {
        if(server_items == nullptr)
        {
            server_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems>();
        }
        return server_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(server_items != nullptr)
    {
        children["server-items"] = server_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dnsSearchListSuppress")
    {
        dnssearchlistsuppress = value;
        dnssearchlistsuppress.value_namespace = name_space;
        dnssearchlistsuppress.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dnsSearchListSuppress")
    {
        dnssearchlistsuppress.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-items" || name == "dnsSearchListSuppress")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::ServerItems()
    :
    dnssearchliststats_list(this, {"dnssearchlist"})
{

    yang_name = "server-items"; yang_parent_name = "dnsslif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::~ServerItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnssearchliststats_list.len(); index++)
    {
        if(dnssearchliststats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::has_operation() const
{
    for (std::size_t index=0; index<dnssearchliststats_list.len(); index++)
    {
        if(dnssearchliststats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DNSSearchListStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList>();
        c->parent = this;
        dnssearchliststats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnssearchliststats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DNSSearchListStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::DNSSearchListStatsList()
    :
    dnssearchlist{YType::str, "dnsSearchList"},
    dnssearchlistlife{YType::uint32, "dnsSearchListLife"},
    dnssearchlistseq{YType::uint32, "dnsSearchListSeq"}
{

    yang_name = "DNSSearchListStats-list"; yang_parent_name = "server-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::~DNSSearchListStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::has_data() const
{
    if (is_presence_container) return true;
    return dnssearchlist.is_set
	|| dnssearchlistlife.is_set
	|| dnssearchlistseq.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dnssearchlist.yfilter)
	|| ydk::is_set(dnssearchlistlife.yfilter)
	|| ydk::is_set(dnssearchlistseq.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DNSSearchListStats-list";
    ADD_KEY_TOKEN(dnssearchlist, "dnsSearchList");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dnssearchlist.is_set || is_set(dnssearchlist.yfilter)) leaf_name_data.push_back(dnssearchlist.get_name_leafdata());
    if (dnssearchlistlife.is_set || is_set(dnssearchlistlife.yfilter)) leaf_name_data.push_back(dnssearchlistlife.get_name_leafdata());
    if (dnssearchlistseq.is_set || is_set(dnssearchlistseq.yfilter)) leaf_name_data.push_back(dnssearchlistseq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dnsSearchList")
    {
        dnssearchlist = value;
        dnssearchlist.value_namespace = name_space;
        dnssearchlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSearchListLife")
    {
        dnssearchlistlife = value;
        dnssearchlistlife.value_namespace = name_space;
        dnssearchlistlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSearchListSeq")
    {
        dnssearchlistseq = value;
        dnssearchlistseq.value_namespace = name_space;
        dnssearchlistseq.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dnsSearchList")
    {
        dnssearchlist.yfilter = yfilter;
    }
    if(value_path == "dnsSearchListLife")
    {
        dnssearchlistlife.yfilter = yfilter;
    }
    if(value_path == "dnsSearchListSeq")
    {
        dnssearchlistseq.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslifItems::ServerItems::DNSSearchListStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnsSearchList" || name == "dnsSearchListLife" || name == "dnsSearchListSeq")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::DnsstatItems()
    :
    dnsserversuppress{YType::boolean, "dnsServerSuppress"}
        ,
    server_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems>())
{
    server_items->parent = this;

    yang_name = "dnsstat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::~DnsstatItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::has_data() const
{
    if (is_presence_container) return true;
    return dnsserversuppress.is_set
	|| (server_items !=  nullptr && server_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dnsserversuppress.yfilter)
	|| (server_items !=  nullptr && server_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnsstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dnsserversuppress.is_set || is_set(dnsserversuppress.yfilter)) leaf_name_data.push_back(dnsserversuppress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-items")
    {
        if(server_items == nullptr)
        {
            server_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems>();
        }
        return server_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(server_items != nullptr)
    {
        children["server-items"] = server_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dnsServerSuppress")
    {
        dnsserversuppress = value;
        dnsserversuppress.value_namespace = name_space;
        dnsserversuppress.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dnsServerSuppress")
    {
        dnsserversuppress.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-items" || name == "dnsServerSuppress")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::ServerItems()
    :
    dnsserverstats_list(this, {"addr"})
{

    yang_name = "server-items"; yang_parent_name = "dnsstat-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::~ServerItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dnsserverstats_list.len(); index++)
    {
        if(dnsserverstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::has_operation() const
{
    for (std::size_t index=0; index<dnsserverstats_list.len(); index++)
    {
        if(dnsserverstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DNSServerStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList>();
        c->parent = this;
        dnsserverstats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dnsserverstats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DNSServerStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::DNSServerStatsList()
    :
    addr{YType::str, "addr"},
    dnsserverlife{YType::uint32, "dnsServerLife"},
    dnsserverseq{YType::uint32, "dnsServerSeq"}
{

    yang_name = "DNSServerStats-list"; yang_parent_name = "server-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::~DNSServerStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| dnsserverlife.is_set
	|| dnsserverseq.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(dnsserverlife.yfilter)
	|| ydk::is_set(dnsserverseq.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DNSServerStats-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (dnsserverlife.is_set || is_set(dnsserverlife.yfilter)) leaf_name_data.push_back(dnsserverlife.get_name_leafdata());
    if (dnsserverseq.is_set || is_set(dnsserverseq.yfilter)) leaf_name_data.push_back(dnsserverseq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsServerLife")
    {
        dnsserverlife = value;
        dnsserverlife.value_namespace = name_space;
        dnsserverlife.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsServerSeq")
    {
        dnsserverseq = value;
        dnsserverseq.value_namespace = name_space;
        dnsserverseq.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "dnsServerLife")
    {
        dnsserverlife.yfilter = yfilter;
    }
    if(value_path == "dnsServerSeq")
    {
        dnsserverseq.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsstatItems::ServerItems::DNSServerStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "dnsServerLife" || name == "dnsServerSeq")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RoutesItems()
    :
    rt_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems>())
{
    rt_items->parent = this;

    yang_name = "routes-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::~RoutesItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::has_data() const
{
    if (is_presence_container) return true;
    return (rt_items !=  nullptr && rt_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::has_operation() const
{
    return is_set(yfilter)
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-items")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RtItems()
    :
    route_list(this, {"ndrouteaddr"})
{

    yang_name = "rt-items"; yang_parent_name = "routes-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::~RtItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::RouteList()
    :
    ndrouteaddr{YType::str, "ndRouteAddr"},
    ndroutelifetime{YType::uint32, "ndRouteLifeTime"},
    ndroutelifetimeinfinite{YType::enumeration, "ndRouteLifeTimeInfinite"},
    routepreference{YType::enumeration, "routePreference"},
    verifyreachability{YType::enumeration, "verifyReachability"}
{

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::~RouteList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return ndrouteaddr.is_set
	|| ndroutelifetime.is_set
	|| ndroutelifetimeinfinite.is_set
	|| routepreference.is_set
	|| verifyreachability.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ndrouteaddr.yfilter)
	|| ydk::is_set(ndroutelifetime.yfilter)
	|| ydk::is_set(ndroutelifetimeinfinite.yfilter)
	|| ydk::is_set(routepreference.yfilter)
	|| ydk::is_set(verifyreachability.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(ndrouteaddr, "ndRouteAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ndrouteaddr.is_set || is_set(ndrouteaddr.yfilter)) leaf_name_data.push_back(ndrouteaddr.get_name_leafdata());
    if (ndroutelifetime.is_set || is_set(ndroutelifetime.yfilter)) leaf_name_data.push_back(ndroutelifetime.get_name_leafdata());
    if (ndroutelifetimeinfinite.is_set || is_set(ndroutelifetimeinfinite.yfilter)) leaf_name_data.push_back(ndroutelifetimeinfinite.get_name_leafdata());
    if (routepreference.is_set || is_set(routepreference.yfilter)) leaf_name_data.push_back(routepreference.get_name_leafdata());
    if (verifyreachability.is_set || is_set(verifyreachability.yfilter)) leaf_name_data.push_back(verifyreachability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ndRouteAddr")
    {
        ndrouteaddr = value;
        ndrouteaddr.value_namespace = name_space;
        ndrouteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndRouteLifeTime")
    {
        ndroutelifetime = value;
        ndroutelifetime.value_namespace = name_space;
        ndroutelifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndRouteLifeTimeInfinite")
    {
        ndroutelifetimeinfinite = value;
        ndroutelifetimeinfinite.value_namespace = name_space;
        ndroutelifetimeinfinite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePreference")
    {
        routepreference = value;
        routepreference.value_namespace = name_space;
        routepreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyReachability")
    {
        verifyreachability = value;
        verifyreachability.value_namespace = name_space;
        verifyreachability.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ndRouteAddr")
    {
        ndrouteaddr.yfilter = yfilter;
    }
    if(value_path == "ndRouteLifeTime")
    {
        ndroutelifetime.yfilter = yfilter;
    }
    if(value_path == "ndRouteLifeTimeInfinite")
    {
        ndroutelifetimeinfinite.yfilter = yfilter;
    }
    if(value_path == "routePreference")
    {
        routepreference.yfilter = yfilter;
    }
    if(value_path == "verifyReachability")
    {
        verifyreachability.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RoutesItems::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ndRouteAddr" || name == "ndRouteLifeTime" || name == "ndRouteLifeTimeInfinite" || name == "routePreference" || name == "verifyReachability")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxItems()
    :
    pfx_list(this, {"addr"})
{

    yang_name = "pfx-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::~PfxItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pfx_list.len(); index++)
    {
        if(pfx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::has_operation() const
{
    for (std::size_t index=0; index<pfx_list.len(); index++)
    {
        if(pfx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Pfx-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList>();
        c->parent = this;
        pfx_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pfx_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Pfx-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::PfxList()
    :
    addr{YType::str, "addr"},
    lifetime{YType::uint32, "lifetime"},
    preflifetime{YType::uint32, "prefLifetime"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "Pfx-list"; yang_parent_name = "pfx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::~PfxList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| lifetime.is_set
	|| preflifetime.is_set
	|| ctrl.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(preflifetime.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Pfx-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preflifetime.is_set || is_set(preflifetime.yfilter)) leaf_name_data.push_back(preflifetime.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefLifetime")
    {
        preflifetime = value;
        preflifetime.value_namespace = name_space;
        preflifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "prefLifetime")
    {
        preflifetime.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::PfxItems::PfxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "lifetime" || name == "prefLifetime" || name == "ctrl")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::DefpfxItems()
    :
    defprefix{YType::enumeration, "defPrefix"},
    deflifetime{YType::uint32, "defLifetime"},
    defpreflifetime{YType::uint32, "defPrefLifetime"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "defpfx-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::~DefpfxItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::has_data() const
{
    if (is_presence_container) return true;
    return defprefix.is_set
	|| deflifetime.is_set
	|| defpreflifetime.is_set
	|| ctrl.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defprefix.yfilter)
	|| ydk::is_set(deflifetime.yfilter)
	|| ydk::is_set(defpreflifetime.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defpfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defprefix.is_set || is_set(defprefix.yfilter)) leaf_name_data.push_back(defprefix.get_name_leafdata());
    if (deflifetime.is_set || is_set(deflifetime.yfilter)) leaf_name_data.push_back(deflifetime.get_name_leafdata());
    if (defpreflifetime.is_set || is_set(defpreflifetime.yfilter)) leaf_name_data.push_back(defpreflifetime.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defPrefix")
    {
        defprefix = value;
        defprefix.value_namespace = name_space;
        defprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defLifetime")
    {
        deflifetime = value;
        deflifetime.value_namespace = name_space;
        deflifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defPrefLifetime")
    {
        defpreflifetime = value;
        defpreflifetime.value_namespace = name_space;
        defpreflifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defPrefix")
    {
        defprefix.yfilter = yfilter;
    }
    if(value_path == "defLifetime")
    {
        deflifetime.yfilter = yfilter;
    }
    if(value_path == "defPrefLifetime")
    {
        defpreflifetime.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DefpfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defPrefix" || name == "defLifetime" || name == "defPrefLifetime" || name == "ctrl")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::DnsItems()
    :
    routeadvdnsserver_list(this, {"dnsserveraddr", "dnssequencenum"})
{

    yang_name = "dns-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::~DnsItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeadvdnsserver_list.len(); index++)
    {
        if(routeadvdnsserver_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::has_operation() const
{
    for (std::size_t index=0; index<routeadvdnsserver_list.len(); index++)
    {
        if(routeadvdnsserver_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteAdvDNSServer-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList>();
        c->parent = this;
        routeadvdnsserver_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routeadvdnsserver_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteAdvDNSServer-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::RouteAdvDNSServerList()
    :
    dnsserveraddr{YType::str, "dnsServerAddr"},
    dnssequencenum{YType::uint32, "dnsSequenceNum"},
    dnsserverlifetime{YType::uint32, "dnsServerLifeTime"},
    dnsserverlifetimeinfinite{YType::enumeration, "dnsServerLifeTimeInfinite"},
    dnsserver{YType::enumeration, "dnsServer"}
{

    yang_name = "RouteAdvDNSServer-list"; yang_parent_name = "dns-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::~RouteAdvDNSServerList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::has_data() const
{
    if (is_presence_container) return true;
    return dnsserveraddr.is_set
	|| dnssequencenum.is_set
	|| dnsserverlifetime.is_set
	|| dnsserverlifetimeinfinite.is_set
	|| dnsserver.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dnsserveraddr.yfilter)
	|| ydk::is_set(dnssequencenum.yfilter)
	|| ydk::is_set(dnsserverlifetime.yfilter)
	|| ydk::is_set(dnsserverlifetimeinfinite.yfilter)
	|| ydk::is_set(dnsserver.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteAdvDNSServer-list";
    ADD_KEY_TOKEN(dnsserveraddr, "dnsServerAddr");
    ADD_KEY_TOKEN(dnssequencenum, "dnsSequenceNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dnsserveraddr.is_set || is_set(dnsserveraddr.yfilter)) leaf_name_data.push_back(dnsserveraddr.get_name_leafdata());
    if (dnssequencenum.is_set || is_set(dnssequencenum.yfilter)) leaf_name_data.push_back(dnssequencenum.get_name_leafdata());
    if (dnsserverlifetime.is_set || is_set(dnsserverlifetime.yfilter)) leaf_name_data.push_back(dnsserverlifetime.get_name_leafdata());
    if (dnsserverlifetimeinfinite.is_set || is_set(dnsserverlifetimeinfinite.yfilter)) leaf_name_data.push_back(dnsserverlifetimeinfinite.get_name_leafdata());
    if (dnsserver.is_set || is_set(dnsserver.yfilter)) leaf_name_data.push_back(dnsserver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dnsServerAddr")
    {
        dnsserveraddr = value;
        dnsserveraddr.value_namespace = name_space;
        dnsserveraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSequenceNum")
    {
        dnssequencenum = value;
        dnssequencenum.value_namespace = name_space;
        dnssequencenum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsServerLifeTime")
    {
        dnsserverlifetime = value;
        dnsserverlifetime.value_namespace = name_space;
        dnsserverlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsServerLifeTimeInfinite")
    {
        dnsserverlifetimeinfinite = value;
        dnsserverlifetimeinfinite.value_namespace = name_space;
        dnsserverlifetimeinfinite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsServer")
    {
        dnsserver = value;
        dnsserver.value_namespace = name_space;
        dnsserver.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dnsServerAddr")
    {
        dnsserveraddr.yfilter = yfilter;
    }
    if(value_path == "dnsSequenceNum")
    {
        dnssequencenum.yfilter = yfilter;
    }
    if(value_path == "dnsServerLifeTime")
    {
        dnsserverlifetime.yfilter = yfilter;
    }
    if(value_path == "dnsServerLifeTimeInfinite")
    {
        dnsserverlifetimeinfinite.yfilter = yfilter;
    }
    if(value_path == "dnsServer")
    {
        dnsserver.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsItems::RouteAdvDNSServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnsServerAddr" || name == "dnsSequenceNum" || name == "dnsServerLifeTime" || name == "dnsServerLifeTimeInfinite" || name == "dnsServer")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::DnsslItems()
    :
    routeadvdnssearchlist_list(this, {"dnssearchlistname", "dnssequencenum"})
{

    yang_name = "dnssl-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::~DnsslItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routeadvdnssearchlist_list.len(); index++)
    {
        if(routeadvdnssearchlist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::has_operation() const
{
    for (std::size_t index=0; index<routeadvdnssearchlist_list.len(); index++)
    {
        if(routeadvdnssearchlist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dnssl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteAdvDNSSearchList-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList>();
        c->parent = this;
        routeadvdnssearchlist_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routeadvdnssearchlist_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteAdvDNSSearchList-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::RouteAdvDNSSearchListList()
    :
    dnssearchlistname{YType::str, "dnsSearchListName"},
    dnssequencenum{YType::uint32, "dnsSequenceNum"},
    dnssearchlistlifetime{YType::uint32, "dnsSearchListLifeTime"},
    dnssearchlistlifetimeinfinite{YType::enumeration, "dnsSearchListLifeTimeInfinite"},
    dnssl{YType::enumeration, "dnssl"}
{

    yang_name = "RouteAdvDNSSearchList-list"; yang_parent_name = "dnssl-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::~RouteAdvDNSSearchListList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::has_data() const
{
    if (is_presence_container) return true;
    return dnssearchlistname.is_set
	|| dnssequencenum.is_set
	|| dnssearchlistlifetime.is_set
	|| dnssearchlistlifetimeinfinite.is_set
	|| dnssl.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dnssearchlistname.yfilter)
	|| ydk::is_set(dnssequencenum.yfilter)
	|| ydk::is_set(dnssearchlistlifetime.yfilter)
	|| ydk::is_set(dnssearchlistlifetimeinfinite.yfilter)
	|| ydk::is_set(dnssl.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteAdvDNSSearchList-list";
    ADD_KEY_TOKEN(dnssearchlistname, "dnsSearchListName");
    ADD_KEY_TOKEN(dnssequencenum, "dnsSequenceNum");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dnssearchlistname.is_set || is_set(dnssearchlistname.yfilter)) leaf_name_data.push_back(dnssearchlistname.get_name_leafdata());
    if (dnssequencenum.is_set || is_set(dnssequencenum.yfilter)) leaf_name_data.push_back(dnssequencenum.get_name_leafdata());
    if (dnssearchlistlifetime.is_set || is_set(dnssearchlistlifetime.yfilter)) leaf_name_data.push_back(dnssearchlistlifetime.get_name_leafdata());
    if (dnssearchlistlifetimeinfinite.is_set || is_set(dnssearchlistlifetimeinfinite.yfilter)) leaf_name_data.push_back(dnssearchlistlifetimeinfinite.get_name_leafdata());
    if (dnssl.is_set || is_set(dnssl.yfilter)) leaf_name_data.push_back(dnssl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dnsSearchListName")
    {
        dnssearchlistname = value;
        dnssearchlistname.value_namespace = name_space;
        dnssearchlistname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSequenceNum")
    {
        dnssequencenum = value;
        dnssequencenum.value_namespace = name_space;
        dnssequencenum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSearchListLifeTime")
    {
        dnssearchlistlifetime = value;
        dnssearchlistlifetime.value_namespace = name_space;
        dnssearchlistlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnsSearchListLifeTimeInfinite")
    {
        dnssearchlistlifetimeinfinite = value;
        dnssearchlistlifetimeinfinite.value_namespace = name_space;
        dnssearchlistlifetimeinfinite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dnssl")
    {
        dnssl = value;
        dnssl.value_namespace = name_space;
        dnssl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dnsSearchListName")
    {
        dnssearchlistname.yfilter = yfilter;
    }
    if(value_path == "dnsSequenceNum")
    {
        dnssequencenum.yfilter = yfilter;
    }
    if(value_path == "dnsSearchListLifeTime")
    {
        dnssearchlistlifetime.yfilter = yfilter;
    }
    if(value_path == "dnsSearchListLifeTimeInfinite")
    {
        dnssearchlistlifetimeinfinite.yfilter = yfilter;
    }
    if(value_path == "dnssl")
    {
        dnssl.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::DnsslItems::RouteAdvDNSSearchListList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dnsSearchListName" || name == "dnsSequenceNum" || name == "dnsSearchListLifeTime" || name == "dnsSearchListLifeTimeInfinite" || name == "dnssl")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RtrstatItems()
    :
    routerstat_list(this, {"routeraddr"})
{

    yang_name = "rtrstat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::~RtrstatItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routerstat_list.len(); index++)
    {
        if(routerstat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::has_operation() const
{
    for (std::size_t index=0; index<routerstat_list.len(); index++)
    {
        if(routerstat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtrstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouterStat-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList>();
        c->parent = this;
        routerstat_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routerstat_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouterStat-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::RouterStatList()
    :
    routeraddr{YType::str, "routerAddr"},
    ifname{YType::str, "ifName"},
    lastupdatetime{YType::str, "lastUpdateTime"},
    hoplimit{YType::uint32, "hopLimit"},
    lifetime{YType::uint32, "lifetime"},
    addrflag{YType::uint16, "addrFlag"},
    otherflag{YType::uint16, "otherFlag"},
    mtu{YType::uint16, "mtu"},
    homeagentflag{YType::uint16, "homeagentFlag"},
    preference{YType::enumeration, "preference"},
    reachabletime{YType::uint64, "reachableTime"},
    retransmissiontime{YType::uint64, "retransmissionTime"}
        ,
    pfxstat_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems>())
{
    pfxstat_items->parent = this;

    yang_name = "RouterStat-list"; yang_parent_name = "rtrstat-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::~RouterStatList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::has_data() const
{
    if (is_presence_container) return true;
    return routeraddr.is_set
	|| ifname.is_set
	|| lastupdatetime.is_set
	|| hoplimit.is_set
	|| lifetime.is_set
	|| addrflag.is_set
	|| otherflag.is_set
	|| mtu.is_set
	|| homeagentflag.is_set
	|| preference.is_set
	|| reachabletime.is_set
	|| retransmissiontime.is_set
	|| (pfxstat_items !=  nullptr && pfxstat_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routeraddr.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(lastupdatetime.yfilter)
	|| ydk::is_set(hoplimit.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(addrflag.yfilter)
	|| ydk::is_set(otherflag.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(homeagentflag.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(reachabletime.yfilter)
	|| ydk::is_set(retransmissiontime.yfilter)
	|| (pfxstat_items !=  nullptr && pfxstat_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouterStat-list";
    ADD_KEY_TOKEN(routeraddr, "routerAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routeraddr.is_set || is_set(routeraddr.yfilter)) leaf_name_data.push_back(routeraddr.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (lastupdatetime.is_set || is_set(lastupdatetime.yfilter)) leaf_name_data.push_back(lastupdatetime.get_name_leafdata());
    if (hoplimit.is_set || is_set(hoplimit.yfilter)) leaf_name_data.push_back(hoplimit.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (addrflag.is_set || is_set(addrflag.yfilter)) leaf_name_data.push_back(addrflag.get_name_leafdata());
    if (otherflag.is_set || is_set(otherflag.yfilter)) leaf_name_data.push_back(otherflag.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (homeagentflag.is_set || is_set(homeagentflag.yfilter)) leaf_name_data.push_back(homeagentflag.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (reachabletime.is_set || is_set(reachabletime.yfilter)) leaf_name_data.push_back(reachabletime.get_name_leafdata());
    if (retransmissiontime.is_set || is_set(retransmissiontime.yfilter)) leaf_name_data.push_back(retransmissiontime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxstat-items")
    {
        if(pfxstat_items == nullptr)
        {
            pfxstat_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems>();
        }
        return pfxstat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pfxstat_items != nullptr)
    {
        children["pfxstat-items"] = pfxstat_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routerAddr")
    {
        routeraddr = value;
        routeraddr.value_namespace = name_space;
        routeraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastUpdateTime")
    {
        lastupdatetime = value;
        lastupdatetime.value_namespace = name_space;
        lastupdatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimit")
    {
        hoplimit = value;
        hoplimit.value_namespace = name_space;
        hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addrFlag")
    {
        addrflag = value;
        addrflag.value_namespace = name_space;
        addrflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherFlag")
    {
        otherflag = value;
        otherflag.value_namespace = name_space;
        otherflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "homeagentFlag")
    {
        homeagentflag = value;
        homeagentflag.value_namespace = name_space;
        homeagentflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableTime")
    {
        reachabletime = value;
        reachabletime.value_namespace = name_space;
        reachabletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmissionTime")
    {
        retransmissiontime = value;
        retransmissiontime.value_namespace = name_space;
        retransmissiontime.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routerAddr")
    {
        routeraddr.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "lastUpdateTime")
    {
        lastupdatetime.yfilter = yfilter;
    }
    if(value_path == "hopLimit")
    {
        hoplimit.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "addrFlag")
    {
        addrflag.yfilter = yfilter;
    }
    if(value_path == "otherFlag")
    {
        otherflag.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "homeagentFlag")
    {
        homeagentflag.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "reachableTime")
    {
        reachabletime.yfilter = yfilter;
    }
    if(value_path == "retransmissionTime")
    {
        retransmissiontime.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxstat-items" || name == "routerAddr" || name == "ifName" || name == "lastUpdateTime" || name == "hopLimit" || name == "lifetime" || name == "addrFlag" || name == "otherFlag" || name == "mtu" || name == "homeagentFlag" || name == "preference" || name == "reachableTime" || name == "retransmissionTime")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::PfxstatItems()
    :
    raprefixstat_list(this, {"prefixaddr"})
{

    yang_name = "pfxstat-items"; yang_parent_name = "RouterStat-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::~PfxstatItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<raprefixstat_list.len(); index++)
    {
        if(raprefixstat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::has_operation() const
{
    for (std::size_t index=0; index<raprefixstat_list.len(); index++)
    {
        if(raprefixstat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RaPrefixStat-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList>();
        c->parent = this;
        raprefixstat_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : raprefixstat_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RaPrefixStat-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::RaPrefixStatList()
    :
    prefixaddr{YType::str, "prefixAddr"},
    onlinkflag{YType::boolean, "onlinkFlag"},
    autonomousflag{YType::boolean, "autonomousFlag"},
    validlifetime{YType::uint64, "validLifetime"},
    preflifetime{YType::uint32, "prefLifetime"}
{

    yang_name = "RaPrefixStat-list"; yang_parent_name = "pfxstat-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::~RaPrefixStatList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::has_data() const
{
    if (is_presence_container) return true;
    return prefixaddr.is_set
	|| onlinkflag.is_set
	|| autonomousflag.is_set
	|| validlifetime.is_set
	|| preflifetime.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefixaddr.yfilter)
	|| ydk::is_set(onlinkflag.yfilter)
	|| ydk::is_set(autonomousflag.yfilter)
	|| ydk::is_set(validlifetime.yfilter)
	|| ydk::is_set(preflifetime.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RaPrefixStat-list";
    ADD_KEY_TOKEN(prefixaddr, "prefixAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefixaddr.is_set || is_set(prefixaddr.yfilter)) leaf_name_data.push_back(prefixaddr.get_name_leafdata());
    if (onlinkflag.is_set || is_set(onlinkflag.yfilter)) leaf_name_data.push_back(onlinkflag.get_name_leafdata());
    if (autonomousflag.is_set || is_set(autonomousflag.yfilter)) leaf_name_data.push_back(autonomousflag.get_name_leafdata());
    if (validlifetime.is_set || is_set(validlifetime.yfilter)) leaf_name_data.push_back(validlifetime.get_name_leafdata());
    if (preflifetime.is_set || is_set(preflifetime.yfilter)) leaf_name_data.push_back(preflifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefixAddr")
    {
        prefixaddr = value;
        prefixaddr.value_namespace = name_space;
        prefixaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onlinkFlag")
    {
        onlinkflag = value;
        onlinkflag.value_namespace = name_space;
        onlinkflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomousFlag")
    {
        autonomousflag = value;
        autonomousflag.value_namespace = name_space;
        autonomousflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "validLifetime")
    {
        validlifetime = value;
        validlifetime.value_namespace = name_space;
        validlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefLifetime")
    {
        preflifetime = value;
        preflifetime.value_namespace = name_space;
        preflifetime.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefixAddr")
    {
        prefixaddr.yfilter = yfilter;
    }
    if(value_path == "onlinkFlag")
    {
        onlinkflag.yfilter = yfilter;
    }
    if(value_path == "autonomousFlag")
    {
        autonomousflag.yfilter = yfilter;
    }
    if(value_path == "validLifetime")
    {
        validlifetime.yfilter = yfilter;
    }
    if(value_path == "prefLifetime")
    {
        preflifetime.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtrstatItems::RouterStatList::PfxstatItems::RaPrefixStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixAddr" || name == "onlinkFlag" || name == "autonomousFlag" || name == "validLifetime" || name == "prefLifetime")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    fastpthrcvd{YType::uint64, "fastpthRcvd"},
    fastpathdsbleignrcvd{YType::uint64, "fastpathDsbleIgnRcvd"},
    fastpathotherignrcvd{YType::uint64, "fastpathOtherIgnRcvd"},
    lastnghbrsolicitsent{YType::str, "lastNghbrSolicitSent"},
    lastnghbradvertisementsent{YType::str, "lastNghbrAdvertisementSent"},
    lastrouteradvertisementsent{YType::str, "lastRouterAdvertisementSent"},
    nextrouteradvertisementsent{YType::str, "nextRouterAdvertisementSent"},
    nsretransmitinterval{YType::uint64, "nsRetransmitInterval"},
    ndnudretrybase{YType::uint64, "ndNudRetryBase"},
    ndnudretryinterval{YType::uint64, "ndNudRetryInterval"},
    ndnudretryattemps{YType::uint64, "ndNudRetryAttemps"},
    sendredirect{YType::boolean, "sendRedirect"},
    redirectcause{YType::uint64, "redirectCause"},
    sendunreachables{YType::boolean, "sendUnreachables"},
    maxdadattempts{YType::uint16, "maxDadAttempts"},
    currentdadattempt{YType::uint16, "currentDadAttempt"},
    ifstate{YType::str, "ifState"},
    ifaddr{YType::str, "ifAddr"},
    linklocaladdr{YType::str, "linkLocalAddr"},
    linklocaladdrstate{YType::str, "linkLocalAddrState"},
    ndmacextractstate{YType::str, "ndMacExtractState"},
    statslastreset{YType::str, "statsLastReset"},
    proxynacount{YType::uint64, "proxyNaCount"},
    proxynatobdcount{YType::uint64, "proxyNaToBdCount"},
    proxynstobdcount{YType::uint64, "proxyNsToBdCount"},
    rarpnscount{YType::uint64, "rarpNsCount"}
        ,
    ra_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems>())
    , vip_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems>())
    , addr_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems>())
    , pfx_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems>())
    , rt_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems>())
    , addrtree_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems>())
{
    ra_items->parent = this;
    vip_items->parent = this;
    addr_items->parent = this;
    pfx_items->parent = this;
    rt_items->parent = this;
    addrtree_items->parent = this;

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| fastpthrcvd.is_set
	|| fastpathdsbleignrcvd.is_set
	|| fastpathotherignrcvd.is_set
	|| lastnghbrsolicitsent.is_set
	|| lastnghbradvertisementsent.is_set
	|| lastrouteradvertisementsent.is_set
	|| nextrouteradvertisementsent.is_set
	|| nsretransmitinterval.is_set
	|| ndnudretrybase.is_set
	|| ndnudretryinterval.is_set
	|| ndnudretryattemps.is_set
	|| sendredirect.is_set
	|| redirectcause.is_set
	|| sendunreachables.is_set
	|| maxdadattempts.is_set
	|| currentdadattempt.is_set
	|| ifstate.is_set
	|| ifaddr.is_set
	|| linklocaladdr.is_set
	|| linklocaladdrstate.is_set
	|| ndmacextractstate.is_set
	|| statslastreset.is_set
	|| proxynacount.is_set
	|| proxynatobdcount.is_set
	|| proxynstobdcount.is_set
	|| rarpnscount.is_set
	|| (ra_items !=  nullptr && ra_items->has_data())
	|| (vip_items !=  nullptr && vip_items->has_data())
	|| (addr_items !=  nullptr && addr_items->has_data())
	|| (pfx_items !=  nullptr && pfx_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data())
	|| (addrtree_items !=  nullptr && addrtree_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(fastpthrcvd.yfilter)
	|| ydk::is_set(fastpathdsbleignrcvd.yfilter)
	|| ydk::is_set(fastpathotherignrcvd.yfilter)
	|| ydk::is_set(lastnghbrsolicitsent.yfilter)
	|| ydk::is_set(lastnghbradvertisementsent.yfilter)
	|| ydk::is_set(lastrouteradvertisementsent.yfilter)
	|| ydk::is_set(nextrouteradvertisementsent.yfilter)
	|| ydk::is_set(nsretransmitinterval.yfilter)
	|| ydk::is_set(ndnudretrybase.yfilter)
	|| ydk::is_set(ndnudretryinterval.yfilter)
	|| ydk::is_set(ndnudretryattemps.yfilter)
	|| ydk::is_set(sendredirect.yfilter)
	|| ydk::is_set(redirectcause.yfilter)
	|| ydk::is_set(sendunreachables.yfilter)
	|| ydk::is_set(maxdadattempts.yfilter)
	|| ydk::is_set(currentdadattempt.yfilter)
	|| ydk::is_set(ifstate.yfilter)
	|| ydk::is_set(ifaddr.yfilter)
	|| ydk::is_set(linklocaladdr.yfilter)
	|| ydk::is_set(linklocaladdrstate.yfilter)
	|| ydk::is_set(ndmacextractstate.yfilter)
	|| ydk::is_set(statslastreset.yfilter)
	|| ydk::is_set(proxynacount.yfilter)
	|| ydk::is_set(proxynatobdcount.yfilter)
	|| ydk::is_set(proxynstobdcount.yfilter)
	|| ydk::is_set(rarpnscount.yfilter)
	|| (ra_items !=  nullptr && ra_items->has_operation())
	|| (vip_items !=  nullptr && vip_items->has_operation())
	|| (addr_items !=  nullptr && addr_items->has_operation())
	|| (pfx_items !=  nullptr && pfx_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation())
	|| (addrtree_items !=  nullptr && addrtree_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (fastpthrcvd.is_set || is_set(fastpthrcvd.yfilter)) leaf_name_data.push_back(fastpthrcvd.get_name_leafdata());
    if (fastpathdsbleignrcvd.is_set || is_set(fastpathdsbleignrcvd.yfilter)) leaf_name_data.push_back(fastpathdsbleignrcvd.get_name_leafdata());
    if (fastpathotherignrcvd.is_set || is_set(fastpathotherignrcvd.yfilter)) leaf_name_data.push_back(fastpathotherignrcvd.get_name_leafdata());
    if (lastnghbrsolicitsent.is_set || is_set(lastnghbrsolicitsent.yfilter)) leaf_name_data.push_back(lastnghbrsolicitsent.get_name_leafdata());
    if (lastnghbradvertisementsent.is_set || is_set(lastnghbradvertisementsent.yfilter)) leaf_name_data.push_back(lastnghbradvertisementsent.get_name_leafdata());
    if (lastrouteradvertisementsent.is_set || is_set(lastrouteradvertisementsent.yfilter)) leaf_name_data.push_back(lastrouteradvertisementsent.get_name_leafdata());
    if (nextrouteradvertisementsent.is_set || is_set(nextrouteradvertisementsent.yfilter)) leaf_name_data.push_back(nextrouteradvertisementsent.get_name_leafdata());
    if (nsretransmitinterval.is_set || is_set(nsretransmitinterval.yfilter)) leaf_name_data.push_back(nsretransmitinterval.get_name_leafdata());
    if (ndnudretrybase.is_set || is_set(ndnudretrybase.yfilter)) leaf_name_data.push_back(ndnudretrybase.get_name_leafdata());
    if (ndnudretryinterval.is_set || is_set(ndnudretryinterval.yfilter)) leaf_name_data.push_back(ndnudretryinterval.get_name_leafdata());
    if (ndnudretryattemps.is_set || is_set(ndnudretryattemps.yfilter)) leaf_name_data.push_back(ndnudretryattemps.get_name_leafdata());
    if (sendredirect.is_set || is_set(sendredirect.yfilter)) leaf_name_data.push_back(sendredirect.get_name_leafdata());
    if (redirectcause.is_set || is_set(redirectcause.yfilter)) leaf_name_data.push_back(redirectcause.get_name_leafdata());
    if (sendunreachables.is_set || is_set(sendunreachables.yfilter)) leaf_name_data.push_back(sendunreachables.get_name_leafdata());
    if (maxdadattempts.is_set || is_set(maxdadattempts.yfilter)) leaf_name_data.push_back(maxdadattempts.get_name_leafdata());
    if (currentdadattempt.is_set || is_set(currentdadattempt.yfilter)) leaf_name_data.push_back(currentdadattempt.get_name_leafdata());
    if (ifstate.is_set || is_set(ifstate.yfilter)) leaf_name_data.push_back(ifstate.get_name_leafdata());
    if (ifaddr.is_set || is_set(ifaddr.yfilter)) leaf_name_data.push_back(ifaddr.get_name_leafdata());
    if (linklocaladdr.is_set || is_set(linklocaladdr.yfilter)) leaf_name_data.push_back(linklocaladdr.get_name_leafdata());
    if (linklocaladdrstate.is_set || is_set(linklocaladdrstate.yfilter)) leaf_name_data.push_back(linklocaladdrstate.get_name_leafdata());
    if (ndmacextractstate.is_set || is_set(ndmacextractstate.yfilter)) leaf_name_data.push_back(ndmacextractstate.get_name_leafdata());
    if (statslastreset.is_set || is_set(statslastreset.yfilter)) leaf_name_data.push_back(statslastreset.get_name_leafdata());
    if (proxynacount.is_set || is_set(proxynacount.yfilter)) leaf_name_data.push_back(proxynacount.get_name_leafdata());
    if (proxynatobdcount.is_set || is_set(proxynatobdcount.yfilter)) leaf_name_data.push_back(proxynatobdcount.get_name_leafdata());
    if (proxynstobdcount.is_set || is_set(proxynstobdcount.yfilter)) leaf_name_data.push_back(proxynstobdcount.get_name_leafdata());
    if (rarpnscount.is_set || is_set(rarpnscount.yfilter)) leaf_name_data.push_back(rarpnscount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ra-items")
    {
        if(ra_items == nullptr)
        {
            ra_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems>();
        }
        return ra_items;
    }

    if(child_yang_name == "vip-items")
    {
        if(vip_items == nullptr)
        {
            vip_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems>();
        }
        return vip_items;
    }

    if(child_yang_name == "addr-items")
    {
        if(addr_items == nullptr)
        {
            addr_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems>();
        }
        return addr_items;
    }

    if(child_yang_name == "pfx-items")
    {
        if(pfx_items == nullptr)
        {
            pfx_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems>();
        }
        return pfx_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems>();
        }
        return rt_items;
    }

    if(child_yang_name == "addrtree-items")
    {
        if(addrtree_items == nullptr)
        {
            addrtree_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems>();
        }
        return addrtree_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ra_items != nullptr)
    {
        children["ra-items"] = ra_items;
    }

    if(vip_items != nullptr)
    {
        children["vip-items"] = vip_items;
    }

    if(addr_items != nullptr)
    {
        children["addr-items"] = addr_items;
    }

    if(pfx_items != nullptr)
    {
        children["pfx-items"] = pfx_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    if(addrtree_items != nullptr)
    {
        children["addrtree-items"] = addrtree_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd = value;
        fastpthrcvd.value_namespace = name_space;
        fastpthrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd = value;
        fastpathdsbleignrcvd.value_namespace = name_space;
        fastpathdsbleignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd = value;
        fastpathotherignrcvd.value_namespace = name_space;
        fastpathotherignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNghbrSolicitSent")
    {
        lastnghbrsolicitsent = value;
        lastnghbrsolicitsent.value_namespace = name_space;
        lastnghbrsolicitsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNghbrAdvertisementSent")
    {
        lastnghbradvertisementsent = value;
        lastnghbradvertisementsent.value_namespace = name_space;
        lastnghbradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRouterAdvertisementSent")
    {
        lastrouteradvertisementsent = value;
        lastrouteradvertisementsent.value_namespace = name_space;
        lastrouteradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextRouterAdvertisementSent")
    {
        nextrouteradvertisementsent = value;
        nextrouteradvertisementsent.value_namespace = name_space;
        nextrouteradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRetransmitInterval")
    {
        nsretransmitinterval = value;
        nsretransmitinterval.value_namespace = name_space;
        nsretransmitinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndNudRetryBase")
    {
        ndnudretrybase = value;
        ndnudretrybase.value_namespace = name_space;
        ndnudretrybase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndNudRetryInterval")
    {
        ndnudretryinterval = value;
        ndnudretryinterval.value_namespace = name_space;
        ndnudretryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndNudRetryAttemps")
    {
        ndnudretryattemps = value;
        ndnudretryattemps.value_namespace = name_space;
        ndnudretryattemps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendRedirect")
    {
        sendredirect = value;
        sendredirect.value_namespace = name_space;
        sendredirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirectCause")
    {
        redirectcause = value;
        redirectcause.value_namespace = name_space;
        redirectcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendUnreachables")
    {
        sendunreachables = value;
        sendunreachables.value_namespace = name_space;
        sendunreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxDadAttempts")
    {
        maxdadattempts = value;
        maxdadattempts.value_namespace = name_space;
        maxdadattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currentDadAttempt")
    {
        currentdadattempt = value;
        currentdadattempt.value_namespace = name_space;
        currentdadattempt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifState")
    {
        ifstate = value;
        ifstate.value_namespace = name_space;
        ifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAddr")
    {
        ifaddr = value;
        ifaddr.value_namespace = name_space;
        ifaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLocalAddr")
    {
        linklocaladdr = value;
        linklocaladdr.value_namespace = name_space;
        linklocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLocalAddrState")
    {
        linklocaladdrstate = value;
        linklocaladdrstate.value_namespace = name_space;
        linklocaladdrstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndMacExtractState")
    {
        ndmacextractstate = value;
        ndmacextractstate.value_namespace = name_space;
        ndmacextractstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset = value;
        statslastreset.value_namespace = name_space;
        statslastreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyNaCount")
    {
        proxynacount = value;
        proxynacount.value_namespace = name_space;
        proxynacount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyNaToBdCount")
    {
        proxynatobdcount = value;
        proxynatobdcount.value_namespace = name_space;
        proxynatobdcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyNsToBdCount")
    {
        proxynstobdcount = value;
        proxynstobdcount.value_namespace = name_space;
        proxynstobdcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rarpNsCount")
    {
        rarpnscount = value;
        rarpnscount.value_namespace = name_space;
        rarpnscount.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd.yfilter = yfilter;
    }
    if(value_path == "lastNghbrSolicitSent")
    {
        lastnghbrsolicitsent.yfilter = yfilter;
    }
    if(value_path == "lastNghbrAdvertisementSent")
    {
        lastnghbradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "lastRouterAdvertisementSent")
    {
        lastrouteradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "nextRouterAdvertisementSent")
    {
        nextrouteradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "nsRetransmitInterval")
    {
        nsretransmitinterval.yfilter = yfilter;
    }
    if(value_path == "ndNudRetryBase")
    {
        ndnudretrybase.yfilter = yfilter;
    }
    if(value_path == "ndNudRetryInterval")
    {
        ndnudretryinterval.yfilter = yfilter;
    }
    if(value_path == "ndNudRetryAttemps")
    {
        ndnudretryattemps.yfilter = yfilter;
    }
    if(value_path == "sendRedirect")
    {
        sendredirect.yfilter = yfilter;
    }
    if(value_path == "redirectCause")
    {
        redirectcause.yfilter = yfilter;
    }
    if(value_path == "sendUnreachables")
    {
        sendunreachables.yfilter = yfilter;
    }
    if(value_path == "maxDadAttempts")
    {
        maxdadattempts.yfilter = yfilter;
    }
    if(value_path == "currentDadAttempt")
    {
        currentdadattempt.yfilter = yfilter;
    }
    if(value_path == "ifState")
    {
        ifstate.yfilter = yfilter;
    }
    if(value_path == "ifAddr")
    {
        ifaddr.yfilter = yfilter;
    }
    if(value_path == "linkLocalAddr")
    {
        linklocaladdr.yfilter = yfilter;
    }
    if(value_path == "linkLocalAddrState")
    {
        linklocaladdrstate.yfilter = yfilter;
    }
    if(value_path == "ndMacExtractState")
    {
        ndmacextractstate.yfilter = yfilter;
    }
    if(value_path == "statsLastReset")
    {
        statslastreset.yfilter = yfilter;
    }
    if(value_path == "proxyNaCount")
    {
        proxynacount.yfilter = yfilter;
    }
    if(value_path == "proxyNaToBdCount")
    {
        proxynatobdcount.yfilter = yfilter;
    }
    if(value_path == "proxyNsToBdCount")
    {
        proxynstobdcount.yfilter = yfilter;
    }
    if(value_path == "rarpNsCount")
    {
        rarpnscount.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ra-items" || name == "vip-items" || name == "addr-items" || name == "pfx-items" || name == "rt-items" || name == "addrtree-items" || name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "fastpthRcvd" || name == "fastpathDsbleIgnRcvd" || name == "fastpathOtherIgnRcvd" || name == "lastNghbrSolicitSent" || name == "lastNghbrAdvertisementSent" || name == "lastRouterAdvertisementSent" || name == "nextRouterAdvertisementSent" || name == "nsRetransmitInterval" || name == "ndNudRetryBase" || name == "ndNudRetryInterval" || name == "ndNudRetryAttemps" || name == "sendRedirect" || name == "redirectCause" || name == "sendUnreachables" || name == "maxDadAttempts" || name == "currentDadAttempt" || name == "ifState" || name == "ifAddr" || name == "linkLocalAddr" || name == "linkLocalAddrState" || name == "ndMacExtractState" || name == "statsLastReset" || name == "proxyNaCount" || name == "proxyNaToBdCount" || name == "proxyNsToBdCount" || name == "rarpNsCount")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::RaItems()
    :
    rainterval{YType::uint64, "raInterval"},
    raintervalmin{YType::uint64, "raIntervalMin"},
    mflag{YType::boolean, "mFlag"},
    oflag{YType::boolean, "oFlag"},
    hoplimit{YType::uint64, "hopLimit"},
    mtu{YType::uint64, "mtu"},
    routerlifetime{YType::uint64, "routerLifetime"},
    reachabletime{YType::uint64, "reachableTime"},
    retransmittime{YType::uint64, "retransmitTime"},
    suppressra{YType::boolean, "suppressRa"},
    suppressramtu{YType::boolean, "suppressRaMtu"}
{

    yang_name = "ra-items"; yang_parent_name = "ifstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::~RaItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::has_data() const
{
    if (is_presence_container) return true;
    return rainterval.is_set
	|| raintervalmin.is_set
	|| mflag.is_set
	|| oflag.is_set
	|| hoplimit.is_set
	|| mtu.is_set
	|| routerlifetime.is_set
	|| reachabletime.is_set
	|| retransmittime.is_set
	|| suppressra.is_set
	|| suppressramtu.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rainterval.yfilter)
	|| ydk::is_set(raintervalmin.yfilter)
	|| ydk::is_set(mflag.yfilter)
	|| ydk::is_set(oflag.yfilter)
	|| ydk::is_set(hoplimit.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(routerlifetime.yfilter)
	|| ydk::is_set(reachabletime.yfilter)
	|| ydk::is_set(retransmittime.yfilter)
	|| ydk::is_set(suppressra.yfilter)
	|| ydk::is_set(suppressramtu.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rainterval.is_set || is_set(rainterval.yfilter)) leaf_name_data.push_back(rainterval.get_name_leafdata());
    if (raintervalmin.is_set || is_set(raintervalmin.yfilter)) leaf_name_data.push_back(raintervalmin.get_name_leafdata());
    if (mflag.is_set || is_set(mflag.yfilter)) leaf_name_data.push_back(mflag.get_name_leafdata());
    if (oflag.is_set || is_set(oflag.yfilter)) leaf_name_data.push_back(oflag.get_name_leafdata());
    if (hoplimit.is_set || is_set(hoplimit.yfilter)) leaf_name_data.push_back(hoplimit.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (routerlifetime.is_set || is_set(routerlifetime.yfilter)) leaf_name_data.push_back(routerlifetime.get_name_leafdata());
    if (reachabletime.is_set || is_set(reachabletime.yfilter)) leaf_name_data.push_back(reachabletime.get_name_leafdata());
    if (retransmittime.is_set || is_set(retransmittime.yfilter)) leaf_name_data.push_back(retransmittime.get_name_leafdata());
    if (suppressra.is_set || is_set(suppressra.yfilter)) leaf_name_data.push_back(suppressra.get_name_leafdata());
    if (suppressramtu.is_set || is_set(suppressramtu.yfilter)) leaf_name_data.push_back(suppressramtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raInterval")
    {
        rainterval = value;
        rainterval.value_namespace = name_space;
        rainterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raIntervalMin")
    {
        raintervalmin = value;
        raintervalmin.value_namespace = name_space;
        raintervalmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mFlag")
    {
        mflag = value;
        mflag.value_namespace = name_space;
        mflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oFlag")
    {
        oflag = value;
        oflag.value_namespace = name_space;
        oflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hopLimit")
    {
        hoplimit = value;
        hoplimit.value_namespace = name_space;
        hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerLifetime")
    {
        routerlifetime = value;
        routerlifetime.value_namespace = name_space;
        routerlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachableTime")
    {
        reachabletime = value;
        reachabletime.value_namespace = name_space;
        reachabletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitTime")
    {
        retransmittime = value;
        retransmittime.value_namespace = name_space;
        retransmittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressRa")
    {
        suppressra = value;
        suppressra.value_namespace = name_space;
        suppressra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressRaMtu")
    {
        suppressramtu = value;
        suppressramtu.value_namespace = name_space;
        suppressramtu.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raInterval")
    {
        rainterval.yfilter = yfilter;
    }
    if(value_path == "raIntervalMin")
    {
        raintervalmin.yfilter = yfilter;
    }
    if(value_path == "mFlag")
    {
        mflag.yfilter = yfilter;
    }
    if(value_path == "oFlag")
    {
        oflag.yfilter = yfilter;
    }
    if(value_path == "hopLimit")
    {
        hoplimit.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "routerLifetime")
    {
        routerlifetime.yfilter = yfilter;
    }
    if(value_path == "reachableTime")
    {
        reachabletime.yfilter = yfilter;
    }
    if(value_path == "retransmitTime")
    {
        retransmittime.yfilter = yfilter;
    }
    if(value_path == "suppressRa")
    {
        suppressra.yfilter = yfilter;
    }
    if(value_path == "suppressRaMtu")
    {
        suppressramtu.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raInterval" || name == "raIntervalMin" || name == "mFlag" || name == "oFlag" || name == "hopLimit" || name == "mtu" || name == "routerLifetime" || name == "reachableTime" || name == "retransmitTime" || name == "suppressRa" || name == "suppressRaMtu")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipItems()
    :
    groupid{YType::uint32, "groupId"},
    protocol{YType::str, "protocol"},
    uuid{YType::uint32, "uuid"},
    isactive{YType::str, "isActive"},
    inuse{YType::uint32, "inUse"}
        ,
    vipaddr_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems>())
{
    vipaddr_items->parent = this;

    yang_name = "vip-items"; yang_parent_name = "ifstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::~VipItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::has_data() const
{
    if (is_presence_container) return true;
    return groupid.is_set
	|| protocol.is_set
	|| uuid.is_set
	|| isactive.is_set
	|| inuse.is_set
	|| (vipaddr_items !=  nullptr && vipaddr_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groupid.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(uuid.yfilter)
	|| ydk::is_set(isactive.yfilter)
	|| ydk::is_set(inuse.yfilter)
	|| (vipaddr_items !=  nullptr && vipaddr_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groupid.is_set || is_set(groupid.yfilter)) leaf_name_data.push_back(groupid.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (uuid.is_set || is_set(uuid.yfilter)) leaf_name_data.push_back(uuid.get_name_leafdata());
    if (isactive.is_set || is_set(isactive.yfilter)) leaf_name_data.push_back(isactive.get_name_leafdata());
    if (inuse.is_set || is_set(inuse.yfilter)) leaf_name_data.push_back(inuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vipaddr-items")
    {
        if(vipaddr_items == nullptr)
        {
            vipaddr_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems>();
        }
        return vipaddr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vipaddr_items != nullptr)
    {
        children["vipaddr-items"] = vipaddr_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groupId")
    {
        groupid = value;
        groupid.value_namespace = name_space;
        groupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uuid")
    {
        uuid = value;
        uuid.value_namespace = name_space;
        uuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isActive")
    {
        isactive = value;
        isactive.value_namespace = name_space;
        isactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inUse")
    {
        inuse = value;
        inuse.value_namespace = name_space;
        inuse.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groupId")
    {
        groupid.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "uuid")
    {
        uuid.yfilter = yfilter;
    }
    if(value_path == "isActive")
    {
        isactive.yfilter = yfilter;
    }
    if(value_path == "inUse")
    {
        inuse.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vipaddr-items" || name == "groupId" || name == "protocol" || name == "uuid" || name == "isActive" || name == "inUse")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::VipaddrItems()
    :
    ifvipaddrstats_list(this, {"addr"})
{

    yang_name = "vipaddr-items"; yang_parent_name = "vip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::~VipaddrItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifvipaddrstats_list.len(); index++)
    {
        if(ifvipaddrstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::has_operation() const
{
    for (std::size_t index=0; index<ifvipaddrstats_list.len(); index++)
    {
        if(ifvipaddrstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vipaddr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfVipAddrStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList>();
        c->parent = this;
        ifvipaddrstats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifvipaddrstats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfVipAddrStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::IfVipAddrStatsList()
    :
    addr{YType::str, "addr"},
    vipmac{YType::str, "vipMac"},
    contextname{YType::str, "contextName"},
    contextid{YType::uint32, "contextId"},
    lastnghbrsolicitsent{YType::str, "lastNghbrSolicitSent"},
    lastnghbradvertisementsent{YType::str, "lastNghbrAdvertisementSent"},
    lastrouteradvertisementsent{YType::str, "lastRouterAdvertisementSent"},
    nextrouteradvertisementsent{YType::str, "nextRouterAdvertisementSent"}
{

    yang_name = "IfVipAddrStats-list"; yang_parent_name = "vipaddr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::~IfVipAddrStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vipmac.is_set
	|| contextname.is_set
	|| contextid.is_set
	|| lastnghbrsolicitsent.is_set
	|| lastnghbradvertisementsent.is_set
	|| lastrouteradvertisementsent.is_set
	|| nextrouteradvertisementsent.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vipmac.yfilter)
	|| ydk::is_set(contextname.yfilter)
	|| ydk::is_set(contextid.yfilter)
	|| ydk::is_set(lastnghbrsolicitsent.yfilter)
	|| ydk::is_set(lastnghbradvertisementsent.yfilter)
	|| ydk::is_set(lastrouteradvertisementsent.yfilter)
	|| ydk::is_set(nextrouteradvertisementsent.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfVipAddrStats-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vipmac.is_set || is_set(vipmac.yfilter)) leaf_name_data.push_back(vipmac.get_name_leafdata());
    if (contextname.is_set || is_set(contextname.yfilter)) leaf_name_data.push_back(contextname.get_name_leafdata());
    if (contextid.is_set || is_set(contextid.yfilter)) leaf_name_data.push_back(contextid.get_name_leafdata());
    if (lastnghbrsolicitsent.is_set || is_set(lastnghbrsolicitsent.yfilter)) leaf_name_data.push_back(lastnghbrsolicitsent.get_name_leafdata());
    if (lastnghbradvertisementsent.is_set || is_set(lastnghbradvertisementsent.yfilter)) leaf_name_data.push_back(lastnghbradvertisementsent.get_name_leafdata());
    if (lastrouteradvertisementsent.is_set || is_set(lastrouteradvertisementsent.yfilter)) leaf_name_data.push_back(lastrouteradvertisementsent.get_name_leafdata());
    if (nextrouteradvertisementsent.is_set || is_set(nextrouteradvertisementsent.yfilter)) leaf_name_data.push_back(nextrouteradvertisementsent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vipMac")
    {
        vipmac = value;
        vipmac.value_namespace = name_space;
        vipmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contextName")
    {
        contextname = value;
        contextname.value_namespace = name_space;
        contextname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "contextId")
    {
        contextid = value;
        contextid.value_namespace = name_space;
        contextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNghbrSolicitSent")
    {
        lastnghbrsolicitsent = value;
        lastnghbrsolicitsent.value_namespace = name_space;
        lastnghbrsolicitsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNghbrAdvertisementSent")
    {
        lastnghbradvertisementsent = value;
        lastnghbradvertisementsent.value_namespace = name_space;
        lastnghbradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRouterAdvertisementSent")
    {
        lastrouteradvertisementsent = value;
        lastrouteradvertisementsent.value_namespace = name_space;
        lastrouteradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextRouterAdvertisementSent")
    {
        nextrouteradvertisementsent = value;
        nextrouteradvertisementsent.value_namespace = name_space;
        nextrouteradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vipMac")
    {
        vipmac.yfilter = yfilter;
    }
    if(value_path == "contextName")
    {
        contextname.yfilter = yfilter;
    }
    if(value_path == "contextId")
    {
        contextid.yfilter = yfilter;
    }
    if(value_path == "lastNghbrSolicitSent")
    {
        lastnghbrsolicitsent.yfilter = yfilter;
    }
    if(value_path == "lastNghbrAdvertisementSent")
    {
        lastnghbradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "lastRouterAdvertisementSent")
    {
        lastrouteradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "nextRouterAdvertisementSent")
    {
        nextrouteradvertisementsent.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::VipItems::VipaddrItems::IfVipAddrStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "vipMac" || name == "contextName" || name == "contextId" || name == "lastNghbrSolicitSent" || name == "lastNghbrAdvertisementSent" || name == "lastRouterAdvertisementSent" || name == "nextRouterAdvertisementSent")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::AddrItems()
    :
    ifipv6addrstats_list(this, {"addr"})
{

    yang_name = "addr-items"; yang_parent_name = "ifstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::~AddrItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifipv6addrstats_list.len(); index++)
    {
        if(ifipv6addrstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::has_operation() const
{
    for (std::size_t index=0; index<ifipv6addrstats_list.len(); index++)
    {
        if(ifipv6addrstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfIPv6AddrStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList>();
        c->parent = this;
        ifipv6addrstats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifipv6addrstats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfIPv6AddrStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::IfIPv6AddrStatsList()
    :
    addr{YType::str, "addr"},
    addrstate{YType::str, "addrState"}
{

    yang_name = "IfIPv6AddrStats-list"; yang_parent_name = "addr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::~IfIPv6AddrStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| addrstate.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(addrstate.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfIPv6AddrStats-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (addrstate.is_set || is_set(addrstate.yfilter)) leaf_name_data.push_back(addrstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addrState")
    {
        addrstate = value;
        addrstate.value_namespace = name_space;
        addrstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "addrState")
    {
        addrstate.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrItems::IfIPv6AddrStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "addrState")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PfxItems()
    :
    prefixstats_list(this, {"addr"})
{

    yang_name = "pfx-items"; yang_parent_name = "ifstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::~PfxItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixstats_list.len(); index++)
    {
        if(prefixstats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::has_operation() const
{
    for (std::size_t index=0; index<prefixstats_list.len(); index++)
    {
        if(prefixstats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PrefixStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList>();
        c->parent = this;
        prefixstats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefixstats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PrefixStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::PrefixStatsList()
    :
    addr{YType::str, "addr"},
    masklen{YType::uint16, "maskLen"},
    enabled{YType::boolean, "enabled"},
    lifetime{YType::uint32, "lifetime"},
    preflifetime{YType::uint32, "prefLifetime"},
    onlink{YType::boolean, "onLink"},
    offlink{YType::boolean, "offLink"},
    autonomous{YType::boolean, "autonomous"},
    rtraddr{YType::boolean, "rtrAddr"},
    ifassignedaddr{YType::boolean, "ifAssignedAddr"},
    refcount{YType::uint32, "refCount"}
{

    yang_name = "PrefixStats-list"; yang_parent_name = "pfx-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::~PrefixStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| masklen.is_set
	|| enabled.is_set
	|| lifetime.is_set
	|| preflifetime.is_set
	|| onlink.is_set
	|| offlink.is_set
	|| autonomous.is_set
	|| rtraddr.is_set
	|| ifassignedaddr.is_set
	|| refcount.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(masklen.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(preflifetime.yfilter)
	|| ydk::is_set(onlink.yfilter)
	|| ydk::is_set(offlink.yfilter)
	|| ydk::is_set(autonomous.yfilter)
	|| ydk::is_set(rtraddr.yfilter)
	|| ydk::is_set(ifassignedaddr.yfilter)
	|| ydk::is_set(refcount.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PrefixStats-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (masklen.is_set || is_set(masklen.yfilter)) leaf_name_data.push_back(masklen.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preflifetime.is_set || is_set(preflifetime.yfilter)) leaf_name_data.push_back(preflifetime.get_name_leafdata());
    if (onlink.is_set || is_set(onlink.yfilter)) leaf_name_data.push_back(onlink.get_name_leafdata());
    if (offlink.is_set || is_set(offlink.yfilter)) leaf_name_data.push_back(offlink.get_name_leafdata());
    if (autonomous.is_set || is_set(autonomous.yfilter)) leaf_name_data.push_back(autonomous.get_name_leafdata());
    if (rtraddr.is_set || is_set(rtraddr.yfilter)) leaf_name_data.push_back(rtraddr.get_name_leafdata());
    if (ifassignedaddr.is_set || is_set(ifassignedaddr.yfilter)) leaf_name_data.push_back(ifassignedaddr.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLen")
    {
        masklen = value;
        masklen.value_namespace = name_space;
        masklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefLifetime")
    {
        preflifetime = value;
        preflifetime.value_namespace = name_space;
        preflifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onLink")
    {
        onlink = value;
        onlink.value_namespace = name_space;
        onlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offLink")
    {
        offlink = value;
        offlink.value_namespace = name_space;
        offlink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autonomous")
    {
        autonomous = value;
        autonomous.value_namespace = name_space;
        autonomous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrAddr")
    {
        rtraddr = value;
        rtraddr.value_namespace = name_space;
        rtraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAssignedAddr")
    {
        ifassignedaddr = value;
        ifassignedaddr.value_namespace = name_space;
        ifassignedaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "maskLen")
    {
        masklen.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "prefLifetime")
    {
        preflifetime.yfilter = yfilter;
    }
    if(value_path == "onLink")
    {
        onlink.yfilter = yfilter;
    }
    if(value_path == "offLink")
    {
        offlink.yfilter = yfilter;
    }
    if(value_path == "autonomous")
    {
        autonomous.yfilter = yfilter;
    }
    if(value_path == "rtrAddr")
    {
        rtraddr.yfilter = yfilter;
    }
    if(value_path == "ifAssignedAddr")
    {
        ifassignedaddr.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::PfxItems::PrefixStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "maskLen" || name == "enabled" || name == "lifetime" || name == "prefLifetime" || name == "onLink" || name == "offLink" || name == "autonomous" || name == "rtrAddr" || name == "ifAssignedAddr" || name == "refCount")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RtItems()
    :
    routestats_list(this, {"addr"})
{

    yang_name = "rt-items"; yang_parent_name = "ifstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::~RtItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<routestats_list.len(); index++)
    {
        if(routestats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::has_operation() const
{
    for (std::size_t index=0; index<routestats_list.len(); index++)
    {
        if(routestats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RouteStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList>();
        c->parent = this;
        routestats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : routestats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RouteStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::RouteStatsList()
    :
    addr{YType::str, "addr"},
    routepreference{YType::enumeration, "routePreference"},
    routelifetime{YType::uint32, "routeLifetime"},
    octetunits{YType::uint32, "octetUnits"},
    verifyreachability{YType::boolean, "verifyReachability"},
    advrouteinroute{YType::boolean, "advRouteInRoute"},
    advroutewithzerolifetime{YType::boolean, "advRouteWithZeroLifetime"}
{

    yang_name = "RouteStats-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::~RouteStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| routepreference.is_set
	|| routelifetime.is_set
	|| octetunits.is_set
	|| verifyreachability.is_set
	|| advrouteinroute.is_set
	|| advroutewithzerolifetime.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(routepreference.yfilter)
	|| ydk::is_set(routelifetime.yfilter)
	|| ydk::is_set(octetunits.yfilter)
	|| ydk::is_set(verifyreachability.yfilter)
	|| ydk::is_set(advrouteinroute.yfilter)
	|| ydk::is_set(advroutewithzerolifetime.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RouteStats-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (routepreference.is_set || is_set(routepreference.yfilter)) leaf_name_data.push_back(routepreference.get_name_leafdata());
    if (routelifetime.is_set || is_set(routelifetime.yfilter)) leaf_name_data.push_back(routelifetime.get_name_leafdata());
    if (octetunits.is_set || is_set(octetunits.yfilter)) leaf_name_data.push_back(octetunits.get_name_leafdata());
    if (verifyreachability.is_set || is_set(verifyreachability.yfilter)) leaf_name_data.push_back(verifyreachability.get_name_leafdata());
    if (advrouteinroute.is_set || is_set(advrouteinroute.yfilter)) leaf_name_data.push_back(advrouteinroute.get_name_leafdata());
    if (advroutewithzerolifetime.is_set || is_set(advroutewithzerolifetime.yfilter)) leaf_name_data.push_back(advroutewithzerolifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routePreference")
    {
        routepreference = value;
        routepreference.value_namespace = name_space;
        routepreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeLifetime")
    {
        routelifetime = value;
        routelifetime.value_namespace = name_space;
        routelifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetUnits")
    {
        octetunits = value;
        octetunits.value_namespace = name_space;
        octetunits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyReachability")
    {
        verifyreachability = value;
        verifyreachability.value_namespace = name_space;
        verifyreachability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRouteInRoute")
    {
        advrouteinroute = value;
        advrouteinroute.value_namespace = name_space;
        advrouteinroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRouteWithZeroLifetime")
    {
        advroutewithzerolifetime = value;
        advroutewithzerolifetime.value_namespace = name_space;
        advroutewithzerolifetime.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "routePreference")
    {
        routepreference.yfilter = yfilter;
    }
    if(value_path == "routeLifetime")
    {
        routelifetime.yfilter = yfilter;
    }
    if(value_path == "octetUnits")
    {
        octetunits.yfilter = yfilter;
    }
    if(value_path == "verifyReachability")
    {
        verifyreachability.yfilter = yfilter;
    }
    if(value_path == "advRouteInRoute")
    {
        advrouteinroute.yfilter = yfilter;
    }
    if(value_path == "advRouteWithZeroLifetime")
    {
        advroutewithzerolifetime.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::RtItems::RouteStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "routePreference" || name == "routeLifetime" || name == "octetUnits" || name == "verifyReachability" || name == "advRouteInRoute" || name == "advRouteWithZeroLifetime")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrtreeItems()
    :
    addrtreestats_list(this, {"addr"})
{

    yang_name = "addrtree-items"; yang_parent_name = "ifstats-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::~AddrtreeItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addrtreestats_list.len(); index++)
    {
        if(addrtreestats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::has_operation() const
{
    for (std::size_t index=0; index<addrtreestats_list.len(); index++)
    {
        if(addrtreestats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addrtree-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AddrTreeStats-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList>();
        c->parent = this;
        addrtreestats_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addrtreestats_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AddrTreeStats-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::AddrTreeStatsList()
    :
    addr{YType::str, "addr"},
    masklen{YType::uint8, "maskLen"},
    addrtype{YType::str, "addrType"},
    dadstate{YType::str, "dadState"},
    dadattempt{YType::uint16, "dadAttempt"}
{

    yang_name = "AddrTreeStats-list"; yang_parent_name = "addrtree-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::~AddrTreeStatsList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| masklen.is_set
	|| addrtype.is_set
	|| dadstate.is_set
	|| dadattempt.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(masklen.yfilter)
	|| ydk::is_set(addrtype.yfilter)
	|| ydk::is_set(dadstate.yfilter)
	|| ydk::is_set(dadattempt.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AddrTreeStats-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (masklen.is_set || is_set(masklen.yfilter)) leaf_name_data.push_back(masklen.get_name_leafdata());
    if (addrtype.is_set || is_set(addrtype.yfilter)) leaf_name_data.push_back(addrtype.get_name_leafdata());
    if (dadstate.is_set || is_set(dadstate.yfilter)) leaf_name_data.push_back(dadstate.get_name_leafdata());
    if (dadattempt.is_set || is_set(dadattempt.yfilter)) leaf_name_data.push_back(dadattempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLen")
    {
        masklen = value;
        masklen.value_namespace = name_space;
        masklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addrType")
    {
        addrtype = value;
        addrtype.value_namespace = name_space;
        addrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dadState")
    {
        dadstate = value;
        dadstate.value_namespace = name_space;
        dadstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dadAttempt")
    {
        dadattempt = value;
        dadattempt.value_namespace = name_space;
        dadattempt.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "maskLen")
    {
        masklen.yfilter = yfilter;
    }
    if(value_path == "addrType")
    {
        addrtype.yfilter = yfilter;
    }
    if(value_path == "dadState")
    {
        dadstate.yfilter = yfilter;
    }
    if(value_path == "dadAttempt")
    {
        dadattempt.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::AddrtreeItems::AddrTreeStatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "maskLen" || name == "addrType" || name == "dadState" || name == "dadAttempt")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrstatItems()
    :
    vaddrstat_list(this, {"vaddrproto"})
{

    yang_name = "vaddrstat-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::~VaddrstatItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vaddrstat_list.len(); index++)
    {
        if(vaddrstat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::has_operation() const
{
    for (std::size_t index=0; index<vaddrstat_list.len(); index++)
    {
        if(vaddrstat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vaddrstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VaddrStat-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList>();
        c->parent = this;
        vaddrstat_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vaddrstat_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VaddrStat-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VaddrStatList()
    :
    vaddrproto{YType::str, "vaddrProto"},
    groupid{YType::uint16, "groupId"},
    clientuuid{YType::uint32, "clientUUID"},
    clientstate{YType::enumeration, "clientState"},
    clientinuse{YType::uint16, "clientInUse"},
    clientactivestate{YType::str, "clientActiveState"},
    interface{YType::str, "interface"},
    context{YType::str, "context"}
        ,
    vip_items(std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems>())
{
    vip_items->parent = this;

    yang_name = "VaddrStat-list"; yang_parent_name = "vaddrstat-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::~VaddrStatList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::has_data() const
{
    if (is_presence_container) return true;
    return vaddrproto.is_set
	|| groupid.is_set
	|| clientuuid.is_set
	|| clientstate.is_set
	|| clientinuse.is_set
	|| clientactivestate.is_set
	|| interface.is_set
	|| context.is_set
	|| (vip_items !=  nullptr && vip_items->has_data());
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vaddrproto.yfilter)
	|| ydk::is_set(groupid.yfilter)
	|| ydk::is_set(clientuuid.yfilter)
	|| ydk::is_set(clientstate.yfilter)
	|| ydk::is_set(clientinuse.yfilter)
	|| ydk::is_set(clientactivestate.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(context.yfilter)
	|| (vip_items !=  nullptr && vip_items->has_operation());
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VaddrStat-list";
    ADD_KEY_TOKEN(vaddrproto, "vaddrProto");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vaddrproto.is_set || is_set(vaddrproto.yfilter)) leaf_name_data.push_back(vaddrproto.get_name_leafdata());
    if (groupid.is_set || is_set(groupid.yfilter)) leaf_name_data.push_back(groupid.get_name_leafdata());
    if (clientuuid.is_set || is_set(clientuuid.yfilter)) leaf_name_data.push_back(clientuuid.get_name_leafdata());
    if (clientstate.is_set || is_set(clientstate.yfilter)) leaf_name_data.push_back(clientstate.get_name_leafdata());
    if (clientinuse.is_set || is_set(clientinuse.yfilter)) leaf_name_data.push_back(clientinuse.get_name_leafdata());
    if (clientactivestate.is_set || is_set(clientactivestate.yfilter)) leaf_name_data.push_back(clientactivestate.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vip-items")
    {
        if(vip_items == nullptr)
        {
            vip_items = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems>();
        }
        return vip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vip_items != nullptr)
    {
        children["vip-items"] = vip_items;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vaddrProto")
    {
        vaddrproto = value;
        vaddrproto.value_namespace = name_space;
        vaddrproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupId")
    {
        groupid = value;
        groupid.value_namespace = name_space;
        groupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientUUID")
    {
        clientuuid = value;
        clientuuid.value_namespace = name_space;
        clientuuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientState")
    {
        clientstate = value;
        clientstate.value_namespace = name_space;
        clientstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientInUse")
    {
        clientinuse = value;
        clientinuse.value_namespace = name_space;
        clientinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientActiveState")
    {
        clientactivestate = value;
        clientactivestate.value_namespace = name_space;
        clientactivestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vaddrProto")
    {
        vaddrproto.yfilter = yfilter;
    }
    if(value_path == "groupId")
    {
        groupid.yfilter = yfilter;
    }
    if(value_path == "clientUUID")
    {
        clientuuid.yfilter = yfilter;
    }
    if(value_path == "clientState")
    {
        clientstate.yfilter = yfilter;
    }
    if(value_path == "clientInUse")
    {
        clientinuse.yfilter = yfilter;
    }
    if(value_path == "clientActiveState")
    {
        clientactivestate.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vip-items" || name == "vaddrProto" || name == "groupId" || name == "clientUUID" || name == "clientState" || name == "clientInUse" || name == "clientActiveState" || name == "interface" || name == "context")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VipItems()
    :
    vaddrstatvip_list(this, {"vaddr"})
{

    yang_name = "vip-items"; yang_parent_name = "VaddrStat-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::~VipItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vaddrstatvip_list.len(); index++)
    {
        if(vaddrstatvip_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::has_operation() const
{
    for (std::size_t index=0; index<vaddrstatvip_list.len(); index++)
    {
        if(vaddrstatvip_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VaddrStatVip-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList>();
        c->parent = this;
        vaddrstatvip_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vaddrstatvip_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VaddrStatVip-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::VaddrStatVipList()
    :
    vaddr{YType::str, "vAddr"},
    virtualmac{YType::str, "virtualMac"},
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    lastnghbrsolicitsent{YType::str, "lastNghbrSolicitSent"},
    lastnghbradvertisementsent{YType::str, "lastNghbrAdvertisementSent"},
    lastrouteradvertisementsent{YType::str, "lastRouterAdvertisementSent"},
    nextrouteradvertisementsent{YType::str, "nextRouterAdvertisementSent"}
{

    yang_name = "VaddrStatVip-list"; yang_parent_name = "vip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::~VaddrStatVipList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::has_data() const
{
    if (is_presence_container) return true;
    return vaddr.is_set
	|| virtualmac.is_set
	|| totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| lastnghbrsolicitsent.is_set
	|| lastnghbradvertisementsent.is_set
	|| lastrouteradvertisementsent.is_set
	|| nextrouteradvertisementsent.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vaddr.yfilter)
	|| ydk::is_set(virtualmac.yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(lastnghbrsolicitsent.yfilter)
	|| ydk::is_set(lastnghbradvertisementsent.yfilter)
	|| ydk::is_set(lastrouteradvertisementsent.yfilter)
	|| ydk::is_set(nextrouteradvertisementsent.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VaddrStatVip-list";
    ADD_KEY_TOKEN(vaddr, "vAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vaddr.is_set || is_set(vaddr.yfilter)) leaf_name_data.push_back(vaddr.get_name_leafdata());
    if (virtualmac.is_set || is_set(virtualmac.yfilter)) leaf_name_data.push_back(virtualmac.get_name_leafdata());
    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (lastnghbrsolicitsent.is_set || is_set(lastnghbrsolicitsent.yfilter)) leaf_name_data.push_back(lastnghbrsolicitsent.get_name_leafdata());
    if (lastnghbradvertisementsent.is_set || is_set(lastnghbradvertisementsent.yfilter)) leaf_name_data.push_back(lastnghbradvertisementsent.get_name_leafdata());
    if (lastrouteradvertisementsent.is_set || is_set(lastrouteradvertisementsent.yfilter)) leaf_name_data.push_back(lastrouteradvertisementsent.get_name_leafdata());
    if (nextrouteradvertisementsent.is_set || is_set(nextrouteradvertisementsent.yfilter)) leaf_name_data.push_back(nextrouteradvertisementsent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vAddr")
    {
        vaddr = value;
        vaddr.value_namespace = name_space;
        vaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualMac")
    {
        virtualmac = value;
        virtualmac.value_namespace = name_space;
        virtualmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNghbrSolicitSent")
    {
        lastnghbrsolicitsent = value;
        lastnghbrsolicitsent.value_namespace = name_space;
        lastnghbrsolicitsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNghbrAdvertisementSent")
    {
        lastnghbradvertisementsent = value;
        lastnghbradvertisementsent.value_namespace = name_space;
        lastnghbradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastRouterAdvertisementSent")
    {
        lastrouteradvertisementsent = value;
        lastrouteradvertisementsent.value_namespace = name_space;
        lastrouteradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextRouterAdvertisementSent")
    {
        nextrouteradvertisementsent = value;
        nextrouteradvertisementsent.value_namespace = name_space;
        nextrouteradvertisementsent.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vAddr")
    {
        vaddr.yfilter = yfilter;
    }
    if(value_path == "virtualMac")
    {
        virtualmac.yfilter = yfilter;
    }
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "lastNghbrSolicitSent")
    {
        lastnghbrsolicitsent.yfilter = yfilter;
    }
    if(value_path == "lastNghbrAdvertisementSent")
    {
        lastnghbradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "lastRouterAdvertisementSent")
    {
        lastrouteradvertisementsent.yfilter = yfilter;
    }
    if(value_path == "nextRouterAdvertisementSent")
    {
        nextrouteradvertisementsent.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::VaddrstatItems::VaddrStatList::VipItems::VaddrStatVipList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vAddr" || name == "virtualMac" || name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "lastNghbrSolicitSent" || name == "lastNghbrAdvertisementSent" || name == "lastRouterAdvertisementSent" || name == "nextRouterAdvertisementSent")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrstatglobalItems()
    :
    vaddrglobalstat_list(this, {"vaddr"})
{

    yang_name = "vaddrstatglobal-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::~VaddrstatglobalItems()
{
}

bool System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vaddrglobalstat_list.len(); index++)
    {
        if(vaddrglobalstat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::has_operation() const
{
    for (std::size_t index=0; index<vaddrglobalstat_list.len(); index++)
    {
        if(vaddrglobalstat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vaddrstatglobal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VaddrGlobalStat-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList>();
        c->parent = this;
        vaddrglobalstat_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vaddrglobalstat_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VaddrGlobalStat-list")
        return true;
    return false;
}

System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::VaddrGlobalStatList()
    :
    vaddr{YType::str, "vAddr"},
    protocol{YType::str, "protocol"},
    virtualmac{YType::str, "virtualMac"},
    groupid{YType::uint16, "groupId"},
    clientuuid{YType::uint32, "clientUUID"},
    clientstate{YType::enumeration, "clientState"},
    clientinuse{YType::uint16, "clientInUse"},
    clientactivestate{YType::str, "clientActiveState"},
    interface{YType::str, "interface"},
    context{YType::str, "context"}
{

    yang_name = "VaddrGlobalStat-list"; yang_parent_name = "vaddrstatglobal-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::~VaddrGlobalStatList()
{
}

bool System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::has_data() const
{
    if (is_presence_container) return true;
    return vaddr.is_set
	|| protocol.is_set
	|| virtualmac.is_set
	|| groupid.is_set
	|| clientuuid.is_set
	|| clientstate.is_set
	|| clientinuse.is_set
	|| clientactivestate.is_set
	|| interface.is_set
	|| context.is_set;
}

bool System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vaddr.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(virtualmac.yfilter)
	|| ydk::is_set(groupid.yfilter)
	|| ydk::is_set(clientuuid.yfilter)
	|| ydk::is_set(clientstate.yfilter)
	|| ydk::is_set(clientinuse.yfilter)
	|| ydk::is_set(clientactivestate.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(context.yfilter);
}

std::string System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VaddrGlobalStat-list";
    ADD_KEY_TOKEN(vaddr, "vAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vaddr.is_set || is_set(vaddr.yfilter)) leaf_name_data.push_back(vaddr.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (virtualmac.is_set || is_set(virtualmac.yfilter)) leaf_name_data.push_back(virtualmac.get_name_leafdata());
    if (groupid.is_set || is_set(groupid.yfilter)) leaf_name_data.push_back(groupid.get_name_leafdata());
    if (clientuuid.is_set || is_set(clientuuid.yfilter)) leaf_name_data.push_back(clientuuid.get_name_leafdata());
    if (clientstate.is_set || is_set(clientstate.yfilter)) leaf_name_data.push_back(clientstate.get_name_leafdata());
    if (clientinuse.is_set || is_set(clientinuse.yfilter)) leaf_name_data.push_back(clientinuse.get_name_leafdata());
    if (clientactivestate.is_set || is_set(clientactivestate.yfilter)) leaf_name_data.push_back(clientactivestate.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vAddr")
    {
        vaddr = value;
        vaddr.value_namespace = name_space;
        vaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualMac")
    {
        virtualmac = value;
        virtualmac.value_namespace = name_space;
        virtualmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groupId")
    {
        groupid = value;
        groupid.value_namespace = name_space;
        groupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientUUID")
    {
        clientuuid = value;
        clientuuid.value_namespace = name_space;
        clientuuid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientState")
    {
        clientstate = value;
        clientstate.value_namespace = name_space;
        clientstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientInUse")
    {
        clientinuse = value;
        clientinuse.value_namespace = name_space;
        clientinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientActiveState")
    {
        clientactivestate = value;
        clientactivestate.value_namespace = name_space;
        clientactivestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vAddr")
    {
        vaddr.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "virtualMac")
    {
        virtualmac.yfilter = yfilter;
    }
    if(value_path == "groupId")
    {
        groupid.yfilter = yfilter;
    }
    if(value_path == "clientUUID")
    {
        clientuuid.yfilter = yfilter;
    }
    if(value_path == "clientState")
    {
        clientstate.yfilter = yfilter;
    }
    if(value_path == "clientInUse")
    {
        clientinuse.yfilter = yfilter;
    }
    if(value_path == "clientActiveState")
    {
        clientactivestate.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::DomItems::DomList::VaddrstatglobalItems::VaddrGlobalStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vAddr" || name == "protocol" || name == "virtualMac" || name == "groupId" || name == "clientUUID" || name == "clientState" || name == "clientInUse" || name == "clientActiveState" || name == "interface" || name == "context")
        return true;
    return false;
}

System::NdItems::InstItems::Ipv6gleanthrottleItems::Ipv6gleanthrottleItems()
    :
    adminst{YType::enumeration, "adminSt"},
    syslog{YType::uint32, "syslog"},
    maxpacket{YType::uint32, "maxPacket"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "ipv6gleanthrottle-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::Ipv6gleanthrottleItems::~Ipv6gleanthrottleItems()
{
}

bool System::NdItems::InstItems::Ipv6gleanthrottleItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| syslog.is_set
	|| maxpacket.is_set
	|| timeout.is_set;
}

bool System::NdItems::InstItems::Ipv6gleanthrottleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(maxpacket.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string System::NdItems::InstItems::Ipv6gleanthrottleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::Ipv6gleanthrottleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6gleanthrottle-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::Ipv6gleanthrottleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (maxpacket.is_set || is_set(maxpacket.yfilter)) leaf_name_data.push_back(maxpacket.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::Ipv6gleanthrottleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::Ipv6gleanthrottleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::Ipv6gleanthrottleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPacket")
    {
        maxpacket = value;
        maxpacket.value_namespace = name_space;
        maxpacket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::Ipv6gleanthrottleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "maxPacket")
    {
        maxpacket.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::Ipv6gleanthrottleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminSt" || name == "syslog" || name == "maxPacket" || name == "timeout")
        return true;
    return false;
}

System::NdItems::InstItems::VpcItems::VpcItems()
    :
    dom_items(std::make_shared<System::NdItems::InstItems::VpcItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "vpc-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::VpcItems::~VpcItems()
{
}

bool System::NdItems::InstItems::VpcItems::has_data() const
{
    if (is_presence_container) return true;
    return (dom_items !=  nullptr && dom_items->has_data());
}

bool System::NdItems::InstItems::VpcItems::has_operation() const
{
    return is_set(yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::NdItems::InstItems::VpcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::VpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::VpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::VpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NdItems::InstItems::VpcItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::VpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::NdItems::InstItems::VpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::VpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::VpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items")
        return true;
    return false;
}

System::NdItems::InstItems::VpcItems::DomItems::DomItems()
    :
    ndsync{YType::enumeration, "ndSync"}
{

    yang_name = "dom-items"; yang_parent_name = "vpc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::VpcItems::DomItems::~DomItems()
{
}

bool System::NdItems::InstItems::VpcItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    return ndsync.is_set;
}

bool System::NdItems::InstItems::VpcItems::DomItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ndsync.yfilter);
}

std::string System::NdItems::InstItems::VpcItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/vpc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::VpcItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::VpcItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ndsync.is_set || is_set(ndsync.yfilter)) leaf_name_data.push_back(ndsync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::VpcItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::VpcItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::VpcItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ndSync")
    {
        ndsync = value;
        ndsync.value_namespace = name_space;
        ndsync.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::VpcItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ndSync")
    {
        ndsync.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::VpcItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ndSync")
        return true;
    return false;
}

System::NdItems::InstItems::OffliststatItems::OffliststatItems()
    :
    offlistvlan_list(this, {"vlanid", "addr"})
{

    yang_name = "offliststat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::OffliststatItems::~OffliststatItems()
{
}

bool System::NdItems::InstItems::OffliststatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<offlistvlan_list.len(); index++)
    {
        if(offlistvlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::OffliststatItems::has_operation() const
{
    for (std::size_t index=0; index<offlistvlan_list.len(); index++)
    {
        if(offlistvlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::OffliststatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::OffliststatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offliststat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::OffliststatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::OffliststatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OffListVlan-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::OffliststatItems::OffListVlanList>();
        c->parent = this;
        offlistvlan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::OffliststatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : offlistvlan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::OffliststatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::OffliststatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::OffliststatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OffListVlan-list")
        return true;
    return false;
}

System::NdItems::InstItems::OffliststatItems::OffListVlanList::OffListVlanList()
    :
    vlanid{YType::uint16, "vlanId"},
    addr{YType::str, "addr"},
    totalofflistentries{YType::uint16, "totalOfflistEntries"},
    age{YType::str, "age"},
    macaddr{YType::str, "macAddr"},
    flags{YType::uint16, "flags"}
{

    yang_name = "OffListVlan-list"; yang_parent_name = "offliststat-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::OffliststatItems::OffListVlanList::~OffListVlanList()
{
}

bool System::NdItems::InstItems::OffliststatItems::OffListVlanList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| addr.is_set
	|| totalofflistentries.is_set
	|| age.is_set
	|| macaddr.is_set
	|| flags.is_set;
}

bool System::NdItems::InstItems::OffliststatItems::OffListVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(totalofflistentries.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(macaddr.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::NdItems::InstItems::OffliststatItems::OffListVlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/offliststat-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::OffliststatItems::OffListVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OffListVlan-list";
    ADD_KEY_TOKEN(vlanid, "vlanId");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::OffliststatItems::OffListVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (totalofflistentries.is_set || is_set(totalofflistentries.yfilter)) leaf_name_data.push_back(totalofflistentries.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::OffliststatItems::OffListVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::OffliststatItems::OffListVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::OffliststatItems::OffListVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalOfflistEntries")
    {
        totalofflistentries = value;
        totalofflistentries.value_namespace = name_space;
        totalofflistentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macAddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::OffliststatItems::OffListVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "totalOfflistEntries")
    {
        totalofflistentries.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "macAddr")
    {
        macaddr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::OffliststatItems::OffListVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanId" || name == "addr" || name == "totalOfflistEntries" || name == "age" || name == "macAddr" || name == "flags")
        return true;
    return false;
}

System::NdItems::InstItems::GlblpktstatsItems::GlblpktstatsItems()
    :
    totsent{YType::uint64, "totSent"},
    totrvcd{YType::uint64, "totRvcd"},
    errsent{YType::uint64, "errSent"},
    errrcvd{YType::uint64, "errRcvd"},
    ifdowndropsent{YType::uint64, "ifDownDropSent"},
    ifdowndroprcvd{YType::uint64, "ifDownDropRcvd"},
    drophanotrdy{YType::uint64, "dropHaNotRdy"},
    dropinvldttlmct{YType::uint64, "dropInvldTtlMct"},
    dropsrcmacownrcvd{YType::uint64, "dropSrcMacOwnRcvd"},
    droptgtipnotownrcvd{YType::uint64, "dropTgtIpNotOwnRcvd"},
    dropsrcipnotownrcvd{YType::uint64, "dropSrcIpNotOwnRcvd"},
    destunreachsent{YType::uint64, "destUnreachSent"},
    destunreachrcvd{YType::uint64, "destUnreachRcvd"},
    adminprohibsent{YType::uint64, "adminProhibSent"},
    adminprohibrcvd{YType::uint64, "adminProhibRcvd"},
    timeexcdsent{YType::uint64, "timeExcdSent"},
    timeexcdrcvd{YType::uint64, "timeExcdRcvd"},
    parmprblmsent{YType::uint64, "parmPrblmSent"},
    parmprblmrcvd{YType::uint64, "parmPrblmRcvd"},
    echoreqsent{YType::uint64, "echoReqSent"},
    echoreqrcvd{YType::uint64, "echoReqRcvd"},
    echorepsent{YType::uint64, "echoRepSent"},
    echoreprcvd{YType::uint64, "echoRepRcvd"},
    redirsent{YType::uint64, "redirSent"},
    redirrcvd{YType::uint64, "redirRcvd"},
    toobigsent{YType::uint64, "tooBigSent"},
    toobigrcvd{YType::uint64, "tooBigRcvd"},
    rasent{YType::uint64, "raSent"},
    rarcvd{YType::uint64, "raRcvd"},
    rssent{YType::uint64, "rsSent"},
    rsrcvd{YType::uint64, "rsRcvd"},
    nasent{YType::uint64, "naSent"},
    narcvd{YType::uint64, "naRcvd"},
    nssent{YType::uint64, "nsSent"},
    nsrcvd{YType::uint64, "nsRcvd"},
    duprareceived{YType::uint64, "dupRAReceived"},
    fastpthrcvd{YType::uint64, "fastpthRcvd"},
    fastpathdsbleignrcvd{YType::uint64, "fastpathDsbleIgnRcvd"},
    fastpathotherignrcvd{YType::uint64, "fastpathOtherIgnRcvd"},
    mldv1queriessent{YType::uint64, "mldV1QueriesSent"},
    mldv1queriesrecv{YType::uint64, "mldV1QueriesRecv"},
    mldv2queriessent{YType::uint64, "mldV2QueriesSent"},
    mldv2queriesrecv{YType::uint64, "mldV2QueriesRecv"},
    mldv1reportssent{YType::uint64, "mldV1ReportsSent"},
    mldv1reportsrecv{YType::uint64, "mldV1ReportsRecv"},
    mldv2reportssent{YType::uint64, "mldV2ReportsSent"},
    mldv2reportsrecv{YType::uint64, "mldV2ReportsRecv"},
    mldv1leavessent{YType::uint64, "mldV1LeavesSent"},
    mldv1leavesrecv{YType::uint64, "mldV1LeavesRecv"}
{

    yang_name = "glblpktstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::GlblpktstatsItems::~GlblpktstatsItems()
{
}

bool System::NdItems::InstItems::GlblpktstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totsent.is_set
	|| totrvcd.is_set
	|| errsent.is_set
	|| errrcvd.is_set
	|| ifdowndropsent.is_set
	|| ifdowndroprcvd.is_set
	|| drophanotrdy.is_set
	|| dropinvldttlmct.is_set
	|| dropsrcmacownrcvd.is_set
	|| droptgtipnotownrcvd.is_set
	|| dropsrcipnotownrcvd.is_set
	|| destunreachsent.is_set
	|| destunreachrcvd.is_set
	|| adminprohibsent.is_set
	|| adminprohibrcvd.is_set
	|| timeexcdsent.is_set
	|| timeexcdrcvd.is_set
	|| parmprblmsent.is_set
	|| parmprblmrcvd.is_set
	|| echoreqsent.is_set
	|| echoreqrcvd.is_set
	|| echorepsent.is_set
	|| echoreprcvd.is_set
	|| redirsent.is_set
	|| redirrcvd.is_set
	|| toobigsent.is_set
	|| toobigrcvd.is_set
	|| rasent.is_set
	|| rarcvd.is_set
	|| rssent.is_set
	|| rsrcvd.is_set
	|| nasent.is_set
	|| narcvd.is_set
	|| nssent.is_set
	|| nsrcvd.is_set
	|| duprareceived.is_set
	|| fastpthrcvd.is_set
	|| fastpathdsbleignrcvd.is_set
	|| fastpathotherignrcvd.is_set
	|| mldv1queriessent.is_set
	|| mldv1queriesrecv.is_set
	|| mldv2queriessent.is_set
	|| mldv2queriesrecv.is_set
	|| mldv1reportssent.is_set
	|| mldv1reportsrecv.is_set
	|| mldv2reportssent.is_set
	|| mldv2reportsrecv.is_set
	|| mldv1leavessent.is_set
	|| mldv1leavesrecv.is_set;
}

bool System::NdItems::InstItems::GlblpktstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totsent.yfilter)
	|| ydk::is_set(totrvcd.yfilter)
	|| ydk::is_set(errsent.yfilter)
	|| ydk::is_set(errrcvd.yfilter)
	|| ydk::is_set(ifdowndropsent.yfilter)
	|| ydk::is_set(ifdowndroprcvd.yfilter)
	|| ydk::is_set(drophanotrdy.yfilter)
	|| ydk::is_set(dropinvldttlmct.yfilter)
	|| ydk::is_set(dropsrcmacownrcvd.yfilter)
	|| ydk::is_set(droptgtipnotownrcvd.yfilter)
	|| ydk::is_set(dropsrcipnotownrcvd.yfilter)
	|| ydk::is_set(destunreachsent.yfilter)
	|| ydk::is_set(destunreachrcvd.yfilter)
	|| ydk::is_set(adminprohibsent.yfilter)
	|| ydk::is_set(adminprohibrcvd.yfilter)
	|| ydk::is_set(timeexcdsent.yfilter)
	|| ydk::is_set(timeexcdrcvd.yfilter)
	|| ydk::is_set(parmprblmsent.yfilter)
	|| ydk::is_set(parmprblmrcvd.yfilter)
	|| ydk::is_set(echoreqsent.yfilter)
	|| ydk::is_set(echoreqrcvd.yfilter)
	|| ydk::is_set(echorepsent.yfilter)
	|| ydk::is_set(echoreprcvd.yfilter)
	|| ydk::is_set(redirsent.yfilter)
	|| ydk::is_set(redirrcvd.yfilter)
	|| ydk::is_set(toobigsent.yfilter)
	|| ydk::is_set(toobigrcvd.yfilter)
	|| ydk::is_set(rasent.yfilter)
	|| ydk::is_set(rarcvd.yfilter)
	|| ydk::is_set(rssent.yfilter)
	|| ydk::is_set(rsrcvd.yfilter)
	|| ydk::is_set(nasent.yfilter)
	|| ydk::is_set(narcvd.yfilter)
	|| ydk::is_set(nssent.yfilter)
	|| ydk::is_set(nsrcvd.yfilter)
	|| ydk::is_set(duprareceived.yfilter)
	|| ydk::is_set(fastpthrcvd.yfilter)
	|| ydk::is_set(fastpathdsbleignrcvd.yfilter)
	|| ydk::is_set(fastpathotherignrcvd.yfilter)
	|| ydk::is_set(mldv1queriessent.yfilter)
	|| ydk::is_set(mldv1queriesrecv.yfilter)
	|| ydk::is_set(mldv2queriessent.yfilter)
	|| ydk::is_set(mldv2queriesrecv.yfilter)
	|| ydk::is_set(mldv1reportssent.yfilter)
	|| ydk::is_set(mldv1reportsrecv.yfilter)
	|| ydk::is_set(mldv2reportssent.yfilter)
	|| ydk::is_set(mldv2reportsrecv.yfilter)
	|| ydk::is_set(mldv1leavessent.yfilter)
	|| ydk::is_set(mldv1leavesrecv.yfilter);
}

std::string System::NdItems::InstItems::GlblpktstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::GlblpktstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "glblpktstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::GlblpktstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totsent.is_set || is_set(totsent.yfilter)) leaf_name_data.push_back(totsent.get_name_leafdata());
    if (totrvcd.is_set || is_set(totrvcd.yfilter)) leaf_name_data.push_back(totrvcd.get_name_leafdata());
    if (errsent.is_set || is_set(errsent.yfilter)) leaf_name_data.push_back(errsent.get_name_leafdata());
    if (errrcvd.is_set || is_set(errrcvd.yfilter)) leaf_name_data.push_back(errrcvd.get_name_leafdata());
    if (ifdowndropsent.is_set || is_set(ifdowndropsent.yfilter)) leaf_name_data.push_back(ifdowndropsent.get_name_leafdata());
    if (ifdowndroprcvd.is_set || is_set(ifdowndroprcvd.yfilter)) leaf_name_data.push_back(ifdowndroprcvd.get_name_leafdata());
    if (drophanotrdy.is_set || is_set(drophanotrdy.yfilter)) leaf_name_data.push_back(drophanotrdy.get_name_leafdata());
    if (dropinvldttlmct.is_set || is_set(dropinvldttlmct.yfilter)) leaf_name_data.push_back(dropinvldttlmct.get_name_leafdata());
    if (dropsrcmacownrcvd.is_set || is_set(dropsrcmacownrcvd.yfilter)) leaf_name_data.push_back(dropsrcmacownrcvd.get_name_leafdata());
    if (droptgtipnotownrcvd.is_set || is_set(droptgtipnotownrcvd.yfilter)) leaf_name_data.push_back(droptgtipnotownrcvd.get_name_leafdata());
    if (dropsrcipnotownrcvd.is_set || is_set(dropsrcipnotownrcvd.yfilter)) leaf_name_data.push_back(dropsrcipnotownrcvd.get_name_leafdata());
    if (destunreachsent.is_set || is_set(destunreachsent.yfilter)) leaf_name_data.push_back(destunreachsent.get_name_leafdata());
    if (destunreachrcvd.is_set || is_set(destunreachrcvd.yfilter)) leaf_name_data.push_back(destunreachrcvd.get_name_leafdata());
    if (adminprohibsent.is_set || is_set(adminprohibsent.yfilter)) leaf_name_data.push_back(adminprohibsent.get_name_leafdata());
    if (adminprohibrcvd.is_set || is_set(adminprohibrcvd.yfilter)) leaf_name_data.push_back(adminprohibrcvd.get_name_leafdata());
    if (timeexcdsent.is_set || is_set(timeexcdsent.yfilter)) leaf_name_data.push_back(timeexcdsent.get_name_leafdata());
    if (timeexcdrcvd.is_set || is_set(timeexcdrcvd.yfilter)) leaf_name_data.push_back(timeexcdrcvd.get_name_leafdata());
    if (parmprblmsent.is_set || is_set(parmprblmsent.yfilter)) leaf_name_data.push_back(parmprblmsent.get_name_leafdata());
    if (parmprblmrcvd.is_set || is_set(parmprblmrcvd.yfilter)) leaf_name_data.push_back(parmprblmrcvd.get_name_leafdata());
    if (echoreqsent.is_set || is_set(echoreqsent.yfilter)) leaf_name_data.push_back(echoreqsent.get_name_leafdata());
    if (echoreqrcvd.is_set || is_set(echoreqrcvd.yfilter)) leaf_name_data.push_back(echoreqrcvd.get_name_leafdata());
    if (echorepsent.is_set || is_set(echorepsent.yfilter)) leaf_name_data.push_back(echorepsent.get_name_leafdata());
    if (echoreprcvd.is_set || is_set(echoreprcvd.yfilter)) leaf_name_data.push_back(echoreprcvd.get_name_leafdata());
    if (redirsent.is_set || is_set(redirsent.yfilter)) leaf_name_data.push_back(redirsent.get_name_leafdata());
    if (redirrcvd.is_set || is_set(redirrcvd.yfilter)) leaf_name_data.push_back(redirrcvd.get_name_leafdata());
    if (toobigsent.is_set || is_set(toobigsent.yfilter)) leaf_name_data.push_back(toobigsent.get_name_leafdata());
    if (toobigrcvd.is_set || is_set(toobigrcvd.yfilter)) leaf_name_data.push_back(toobigrcvd.get_name_leafdata());
    if (rasent.is_set || is_set(rasent.yfilter)) leaf_name_data.push_back(rasent.get_name_leafdata());
    if (rarcvd.is_set || is_set(rarcvd.yfilter)) leaf_name_data.push_back(rarcvd.get_name_leafdata());
    if (rssent.is_set || is_set(rssent.yfilter)) leaf_name_data.push_back(rssent.get_name_leafdata());
    if (rsrcvd.is_set || is_set(rsrcvd.yfilter)) leaf_name_data.push_back(rsrcvd.get_name_leafdata());
    if (nasent.is_set || is_set(nasent.yfilter)) leaf_name_data.push_back(nasent.get_name_leafdata());
    if (narcvd.is_set || is_set(narcvd.yfilter)) leaf_name_data.push_back(narcvd.get_name_leafdata());
    if (nssent.is_set || is_set(nssent.yfilter)) leaf_name_data.push_back(nssent.get_name_leafdata());
    if (nsrcvd.is_set || is_set(nsrcvd.yfilter)) leaf_name_data.push_back(nsrcvd.get_name_leafdata());
    if (duprareceived.is_set || is_set(duprareceived.yfilter)) leaf_name_data.push_back(duprareceived.get_name_leafdata());
    if (fastpthrcvd.is_set || is_set(fastpthrcvd.yfilter)) leaf_name_data.push_back(fastpthrcvd.get_name_leafdata());
    if (fastpathdsbleignrcvd.is_set || is_set(fastpathdsbleignrcvd.yfilter)) leaf_name_data.push_back(fastpathdsbleignrcvd.get_name_leafdata());
    if (fastpathotherignrcvd.is_set || is_set(fastpathotherignrcvd.yfilter)) leaf_name_data.push_back(fastpathotherignrcvd.get_name_leafdata());
    if (mldv1queriessent.is_set || is_set(mldv1queriessent.yfilter)) leaf_name_data.push_back(mldv1queriessent.get_name_leafdata());
    if (mldv1queriesrecv.is_set || is_set(mldv1queriesrecv.yfilter)) leaf_name_data.push_back(mldv1queriesrecv.get_name_leafdata());
    if (mldv2queriessent.is_set || is_set(mldv2queriessent.yfilter)) leaf_name_data.push_back(mldv2queriessent.get_name_leafdata());
    if (mldv2queriesrecv.is_set || is_set(mldv2queriesrecv.yfilter)) leaf_name_data.push_back(mldv2queriesrecv.get_name_leafdata());
    if (mldv1reportssent.is_set || is_set(mldv1reportssent.yfilter)) leaf_name_data.push_back(mldv1reportssent.get_name_leafdata());
    if (mldv1reportsrecv.is_set || is_set(mldv1reportsrecv.yfilter)) leaf_name_data.push_back(mldv1reportsrecv.get_name_leafdata());
    if (mldv2reportssent.is_set || is_set(mldv2reportssent.yfilter)) leaf_name_data.push_back(mldv2reportssent.get_name_leafdata());
    if (mldv2reportsrecv.is_set || is_set(mldv2reportsrecv.yfilter)) leaf_name_data.push_back(mldv2reportsrecv.get_name_leafdata());
    if (mldv1leavessent.is_set || is_set(mldv1leavessent.yfilter)) leaf_name_data.push_back(mldv1leavessent.get_name_leafdata());
    if (mldv1leavesrecv.is_set || is_set(mldv1leavesrecv.yfilter)) leaf_name_data.push_back(mldv1leavesrecv.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::GlblpktstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::GlblpktstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::GlblpktstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totSent")
    {
        totsent = value;
        totsent.value_namespace = name_space;
        totsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRvcd")
    {
        totrvcd = value;
        totrvcd.value_namespace = name_space;
        totrvcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSent")
    {
        errsent = value;
        errsent.value_namespace = name_space;
        errsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errRcvd")
    {
        errrcvd = value;
        errrcvd.value_namespace = name_space;
        errrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent = value;
        ifdowndropsent.value_namespace = name_space;
        ifdowndropsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd = value;
        ifdowndroprcvd.value_namespace = name_space;
        ifdowndroprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy = value;
        drophanotrdy.value_namespace = name_space;
        drophanotrdy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct = value;
        dropinvldttlmct.value_namespace = name_space;
        dropinvldttlmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd = value;
        dropsrcmacownrcvd.value_namespace = name_space;
        dropsrcmacownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd = value;
        droptgtipnotownrcvd.value_namespace = name_space;
        droptgtipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd = value;
        dropsrcipnotownrcvd.value_namespace = name_space;
        dropsrcipnotownrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent = value;
        destunreachsent.value_namespace = name_space;
        destunreachsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd = value;
        destunreachrcvd.value_namespace = name_space;
        destunreachrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent = value;
        adminprohibsent.value_namespace = name_space;
        adminprohibsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd = value;
        adminprohibrcvd.value_namespace = name_space;
        adminprohibrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent = value;
        timeexcdsent.value_namespace = name_space;
        timeexcdsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd = value;
        timeexcdrcvd.value_namespace = name_space;
        timeexcdrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent = value;
        parmprblmsent.value_namespace = name_space;
        parmprblmsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd = value;
        parmprblmrcvd.value_namespace = name_space;
        parmprblmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent = value;
        echoreqsent.value_namespace = name_space;
        echoreqsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd = value;
        echoreqrcvd.value_namespace = name_space;
        echoreqrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent = value;
        echorepsent.value_namespace = name_space;
        echorepsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd = value;
        echoreprcvd.value_namespace = name_space;
        echoreprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirSent")
    {
        redirsent = value;
        redirsent.value_namespace = name_space;
        redirsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd = value;
        redirrcvd.value_namespace = name_space;
        redirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent = value;
        toobigsent.value_namespace = name_space;
        toobigsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd = value;
        toobigrcvd.value_namespace = name_space;
        toobigrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raSent")
    {
        rasent = value;
        rasent.value_namespace = name_space;
        rasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raRcvd")
    {
        rarcvd = value;
        rarcvd.value_namespace = name_space;
        rarcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsSent")
    {
        rssent = value;
        rssent.value_namespace = name_space;
        rssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd = value;
        rsrcvd.value_namespace = name_space;
        rsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naSent")
    {
        nasent = value;
        nasent.value_namespace = name_space;
        nasent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "naRcvd")
    {
        narcvd = value;
        narcvd.value_namespace = name_space;
        narcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsSent")
    {
        nssent = value;
        nssent.value_namespace = name_space;
        nssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd = value;
        nsrcvd.value_namespace = name_space;
        nsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived = value;
        duprareceived.value_namespace = name_space;
        duprareceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd = value;
        fastpthrcvd.value_namespace = name_space;
        fastpthrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd = value;
        fastpathdsbleignrcvd.value_namespace = name_space;
        fastpathdsbleignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd = value;
        fastpathotherignrcvd.value_namespace = name_space;
        fastpathotherignrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent = value;
        mldv1queriessent.value_namespace = name_space;
        mldv1queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv = value;
        mldv1queriesrecv.value_namespace = name_space;
        mldv1queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent = value;
        mldv2queriessent.value_namespace = name_space;
        mldv2queriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv = value;
        mldv2queriesrecv.value_namespace = name_space;
        mldv2queriesrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent = value;
        mldv1reportssent.value_namespace = name_space;
        mldv1reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv = value;
        mldv1reportsrecv.value_namespace = name_space;
        mldv1reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent = value;
        mldv2reportssent.value_namespace = name_space;
        mldv2reportssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv = value;
        mldv2reportsrecv.value_namespace = name_space;
        mldv2reportsrecv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent = value;
        mldv1leavessent.value_namespace = name_space;
        mldv1leavessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv = value;
        mldv1leavesrecv.value_namespace = name_space;
        mldv1leavesrecv.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::GlblpktstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totSent")
    {
        totsent.yfilter = yfilter;
    }
    if(value_path == "totRvcd")
    {
        totrvcd.yfilter = yfilter;
    }
    if(value_path == "errSent")
    {
        errsent.yfilter = yfilter;
    }
    if(value_path == "errRcvd")
    {
        errrcvd.yfilter = yfilter;
    }
    if(value_path == "ifDownDropSent")
    {
        ifdowndropsent.yfilter = yfilter;
    }
    if(value_path == "ifDownDropRcvd")
    {
        ifdowndroprcvd.yfilter = yfilter;
    }
    if(value_path == "dropHaNotRdy")
    {
        drophanotrdy.yfilter = yfilter;
    }
    if(value_path == "dropInvldTtlMct")
    {
        dropinvldttlmct.yfilter = yfilter;
    }
    if(value_path == "dropSrcMacOwnRcvd")
    {
        dropsrcmacownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropTgtIpNotOwnRcvd")
    {
        droptgtipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "dropSrcIpNotOwnRcvd")
    {
        dropsrcipnotownrcvd.yfilter = yfilter;
    }
    if(value_path == "destUnreachSent")
    {
        destunreachsent.yfilter = yfilter;
    }
    if(value_path == "destUnreachRcvd")
    {
        destunreachrcvd.yfilter = yfilter;
    }
    if(value_path == "adminProhibSent")
    {
        adminprohibsent.yfilter = yfilter;
    }
    if(value_path == "adminProhibRcvd")
    {
        adminprohibrcvd.yfilter = yfilter;
    }
    if(value_path == "timeExcdSent")
    {
        timeexcdsent.yfilter = yfilter;
    }
    if(value_path == "timeExcdRcvd")
    {
        timeexcdrcvd.yfilter = yfilter;
    }
    if(value_path == "parmPrblmSent")
    {
        parmprblmsent.yfilter = yfilter;
    }
    if(value_path == "parmPrblmRcvd")
    {
        parmprblmrcvd.yfilter = yfilter;
    }
    if(value_path == "echoReqSent")
    {
        echoreqsent.yfilter = yfilter;
    }
    if(value_path == "echoReqRcvd")
    {
        echoreqrcvd.yfilter = yfilter;
    }
    if(value_path == "echoRepSent")
    {
        echorepsent.yfilter = yfilter;
    }
    if(value_path == "echoRepRcvd")
    {
        echoreprcvd.yfilter = yfilter;
    }
    if(value_path == "redirSent")
    {
        redirsent.yfilter = yfilter;
    }
    if(value_path == "redirRcvd")
    {
        redirrcvd.yfilter = yfilter;
    }
    if(value_path == "tooBigSent")
    {
        toobigsent.yfilter = yfilter;
    }
    if(value_path == "tooBigRcvd")
    {
        toobigrcvd.yfilter = yfilter;
    }
    if(value_path == "raSent")
    {
        rasent.yfilter = yfilter;
    }
    if(value_path == "raRcvd")
    {
        rarcvd.yfilter = yfilter;
    }
    if(value_path == "rsSent")
    {
        rssent.yfilter = yfilter;
    }
    if(value_path == "rsRcvd")
    {
        rsrcvd.yfilter = yfilter;
    }
    if(value_path == "naSent")
    {
        nasent.yfilter = yfilter;
    }
    if(value_path == "naRcvd")
    {
        narcvd.yfilter = yfilter;
    }
    if(value_path == "nsSent")
    {
        nssent.yfilter = yfilter;
    }
    if(value_path == "nsRcvd")
    {
        nsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRAReceived")
    {
        duprareceived.yfilter = yfilter;
    }
    if(value_path == "fastpthRcvd")
    {
        fastpthrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathDsbleIgnRcvd")
    {
        fastpathdsbleignrcvd.yfilter = yfilter;
    }
    if(value_path == "fastpathOtherIgnRcvd")
    {
        fastpathotherignrcvd.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesSent")
    {
        mldv1queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV1QueriesRecv")
    {
        mldv1queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesSent")
    {
        mldv2queriessent.yfilter = yfilter;
    }
    if(value_path == "mldV2QueriesRecv")
    {
        mldv2queriesrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsSent")
    {
        mldv1reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV1ReportsRecv")
    {
        mldv1reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsSent")
    {
        mldv2reportssent.yfilter = yfilter;
    }
    if(value_path == "mldV2ReportsRecv")
    {
        mldv2reportsrecv.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesSent")
    {
        mldv1leavessent.yfilter = yfilter;
    }
    if(value_path == "mldV1LeavesRecv")
    {
        mldv1leavesrecv.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::GlblpktstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totSent" || name == "totRvcd" || name == "errSent" || name == "errRcvd" || name == "ifDownDropSent" || name == "ifDownDropRcvd" || name == "dropHaNotRdy" || name == "dropInvldTtlMct" || name == "dropSrcMacOwnRcvd" || name == "dropTgtIpNotOwnRcvd" || name == "dropSrcIpNotOwnRcvd" || name == "destUnreachSent" || name == "destUnreachRcvd" || name == "adminProhibSent" || name == "adminProhibRcvd" || name == "timeExcdSent" || name == "timeExcdRcvd" || name == "parmPrblmSent" || name == "parmPrblmRcvd" || name == "echoReqSent" || name == "echoReqRcvd" || name == "echoRepSent" || name == "echoRepRcvd" || name == "redirSent" || name == "redirRcvd" || name == "tooBigSent" || name == "tooBigRcvd" || name == "raSent" || name == "raRcvd" || name == "rsSent" || name == "rsRcvd" || name == "naSent" || name == "naRcvd" || name == "nsSent" || name == "nsRcvd" || name == "dupRAReceived" || name == "fastpthRcvd" || name == "fastpathDsbleIgnRcvd" || name == "fastpathOtherIgnRcvd" || name == "mldV1QueriesSent" || name == "mldV1QueriesRecv" || name == "mldV2QueriesSent" || name == "mldV2QueriesRecv" || name == "mldV1ReportsSent" || name == "mldV1ReportsRecv" || name == "mldV2ReportsSent" || name == "mldV2ReportsRecv" || name == "mldV1LeavesSent" || name == "mldV1LeavesRecv")
        return true;
    return false;
}

System::NdItems::InstItems::VaddrllstatItems::VaddrllstatItems()
    :
    vaddrlinklocalstat_list(this, {"vaddr"})
{

    yang_name = "vaddrllstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::VaddrllstatItems::~VaddrllstatItems()
{
}

bool System::NdItems::InstItems::VaddrllstatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vaddrlinklocalstat_list.len(); index++)
    {
        if(vaddrlinklocalstat_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NdItems::InstItems::VaddrllstatItems::has_operation() const
{
    for (std::size_t index=0; index<vaddrlinklocalstat_list.len(); index++)
    {
        if(vaddrlinklocalstat_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NdItems::InstItems::VaddrllstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::VaddrllstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vaddrllstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::VaddrllstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::VaddrllstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VaddrLinkLocalStat-list")
    {
        auto c = std::make_shared<System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList>();
        c->parent = this;
        vaddrlinklocalstat_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::VaddrllstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vaddrlinklocalstat_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NdItems::InstItems::VaddrllstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NdItems::InstItems::VaddrllstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NdItems::InstItems::VaddrllstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VaddrLinkLocalStat-list")
        return true;
    return false;
}

System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::VaddrLinkLocalStatList()
    :
    vaddr{YType::str, "vAddr"},
    virtualmac{YType::str, "virtualMac"},
    interface{YType::str, "interface"},
    active{YType::str, "active"}
{

    yang_name = "VaddrLinkLocalStat-list"; yang_parent_name = "vaddrllstat-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::~VaddrLinkLocalStatList()
{
}

bool System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::has_data() const
{
    if (is_presence_container) return true;
    return vaddr.is_set
	|| virtualmac.is_set
	|| interface.is_set
	|| active.is_set;
}

bool System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vaddr.yfilter)
	|| ydk::is_set(virtualmac.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/vaddrllstat-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VaddrLinkLocalStat-list";
    ADD_KEY_TOKEN(vaddr, "vAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vaddr.is_set || is_set(vaddr.yfilter)) leaf_name_data.push_back(vaddr.get_name_leafdata());
    if (virtualmac.is_set || is_set(virtualmac.yfilter)) leaf_name_data.push_back(virtualmac.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vAddr")
    {
        vaddr = value;
        vaddr.value_namespace = name_space;
        vaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualMac")
    {
        virtualmac = value;
        virtualmac.value_namespace = name_space;
        virtualmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vAddr")
    {
        vaddr.yfilter = yfilter;
    }
    if(value_path == "virtualMac")
    {
        virtualmac.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::VaddrllstatItems::VaddrLinkLocalStatList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vAddr" || name == "virtualMac" || name == "interface" || name == "active")
        return true;
    return false;
}

System::NdItems::InstItems::VpcstatItems::VpcstatItems()
    :
    cfsstatus{YType::str, "cfsStatus"},
    layer3routing{YType::str, "layer3Routing"},
    syncprocdroprecvpullreq{YType::uint16, "syncProcDropRecvPullReq"},
    syncprocdroprecvpushmsg{YType::uint16, "syncProcDropRecvPushMsg"},
    syncignoresendpullreq{YType::uint16, "syncIgnoreSendPullReq"},
    syncignoresendpushmsg{YType::uint16, "syncIgnoreSendPushMsg"},
    syncdropimapifailed{YType::uint16, "syncDropIMApiFailed"},
    syncdropmcemapifailed{YType::uint16, "syncDropMcemApiFailed"},
    syncdropinvalidpciod{YType::uint16, "syncDropInvalidPcIod"},
    syncprocdropptlookupfailed{YType::uint16, "syncProcDropPtLookupFailed"},
    syncprocdroprespfailednomct{YType::uint16, "syncProcDropRespFailedNomct"},
    syncprocdroprespfailed{YType::uint16, "syncProcDropRespFailed"},
    syncprocdropmcemifindexvpcconvfailed{YType::uint16, "syncProcDropMCEMIfindexVpcConvFailed"},
    syncprocdropmcemvpcifindexconvfailed{YType::uint16, "syncProcDropMCEMVpcIfindexConvFailed"},
    periodicsyncprocdropmcemifindexvpcconvfailed{YType::uint16, "PeriodicSyncProcDropMCEMIfindexVpcConvFailed"},
    periodicsyncprocdropmcemvpcifindexconvfailed{YType::uint16, "periodicSyncProcDropMCEMVpcIfindexConvFailed"},
    syncprocrespsent{YType::uint16, "syncProcRespSent"},
    syncprocresprcvd{YType::uint16, "syncProcRespRcvd"},
    syncprocresprcvderr{YType::uint16, "syncProcRespRcvdErr"},
    syncprocrcvdmsg{YType::uint16, "syncProcRcvdMsg"},
    syncprocsendfailed{YType::uint16, "syncProcSendFailed"},
    syncproccfsreldlvryfailed{YType::uint16, "syncProcCfsRelDlvryFailed"},
    syncproccfsreldlvrysuccess{YType::uint16, "syncProcCfsRelDlvrySuccess"},
    offlistprocdropptaddfailed{YType::uint16, "offlistProcDropPtAddFailed"},
    offlistprocdropnomem{YType::uint16, "offlistProcDropNoMem"},
    offlistprocdroptmrcreatefailed{YType::uint16, "offlistProcDropTmrCreateFailed"},
    offlistprocdropaddadjfailed{YType::uint16, "offlistProcDropAddAdjFailed"},
    offlistprocdropptlookupfailed{YType::uint16, "offlistProcDropPtLookupFailed"},
    offlistprocnodropvlanmismatch{YType::uint16, "offlistProcNoDropVlanMismatch"},
    offlistprocdropsviinvalid{YType::uint16, "offlistProcDropSVIInvalid"},
    offlistprocnodropsvidown{YType::uint16, "offlistProcNoDropSVIDown"},
    offlistprocdropmctdown{YType::uint16, "offlistProcDropMCTDown"},
    offlistprocdropctxtinvalid{YType::uint16, "offlistProcDropCtxtInvalid"},
    offlistprocdropvrfinvalid{YType::uint16, "offlistProcDropVRFInvalid"},
    offlistprocdropl3addrinvalid{YType::uint16, "offlistProcDropL3addrInvalid"},
    offlistprocdropl3addrsanityfailed{YType::uint16, "offlistProcDropL3addrSanityFailed"},
    offlistprocdropmacsanityfailed{YType::uint16, "offlistProcDropMacSanityFailed"},
    offlistprocdropownmac{YType::uint16, "offlistProcDropOwnMac"},
    offlistprocdropownipv6addr{YType::uint16, "offlistProcDropOwnIpv6Addr"},
    offlistprocdropownvipv6addr{YType::uint16, "offlistProcDropOwnVIPv6Addr"},
    offlistprocdropcreateadjfailed{YType::uint16, "offlistProcDropCreateAdjFailed"},
    offlistprocdropsubnetmismatch{YType::uint16, "offlistProcDropSubnetMismatch"},
    offlistprocdropadjalreadyexist{YType::uint16, "offlistProcDropAdjAlreadyExist"},
    offlistprocnodropipv6disabled{YType::uint16, "offlistProcNoDropIpv6Disabled"},
    offlistprocdropcount{YType::uint16, "offlistProcDropCount"},
    offlistprocnodropcount{YType::uint16, "offlistProcNoDropCount"},
    offlistprocaddadj{YType::uint16, "offlistProcAddAdj"},
    offlistprocdeladj{YType::uint16, "offlistProcDelAdj"},
    offlistprocadjalreadyexist{YType::uint16, "offlistProcAdjAlreadyExist"}
{

    yang_name = "vpcstat-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NdItems::InstItems::VpcstatItems::~VpcstatItems()
{
}

bool System::NdItems::InstItems::VpcstatItems::has_data() const
{
    if (is_presence_container) return true;
    return cfsstatus.is_set
	|| layer3routing.is_set
	|| syncprocdroprecvpullreq.is_set
	|| syncprocdroprecvpushmsg.is_set
	|| syncignoresendpullreq.is_set
	|| syncignoresendpushmsg.is_set
	|| syncdropimapifailed.is_set
	|| syncdropmcemapifailed.is_set
	|| syncdropinvalidpciod.is_set
	|| syncprocdropptlookupfailed.is_set
	|| syncprocdroprespfailednomct.is_set
	|| syncprocdroprespfailed.is_set
	|| syncprocdropmcemifindexvpcconvfailed.is_set
	|| syncprocdropmcemvpcifindexconvfailed.is_set
	|| periodicsyncprocdropmcemifindexvpcconvfailed.is_set
	|| periodicsyncprocdropmcemvpcifindexconvfailed.is_set
	|| syncprocrespsent.is_set
	|| syncprocresprcvd.is_set
	|| syncprocresprcvderr.is_set
	|| syncprocrcvdmsg.is_set
	|| syncprocsendfailed.is_set
	|| syncproccfsreldlvryfailed.is_set
	|| syncproccfsreldlvrysuccess.is_set
	|| offlistprocdropptaddfailed.is_set
	|| offlistprocdropnomem.is_set
	|| offlistprocdroptmrcreatefailed.is_set
	|| offlistprocdropaddadjfailed.is_set
	|| offlistprocdropptlookupfailed.is_set
	|| offlistprocnodropvlanmismatch.is_set
	|| offlistprocdropsviinvalid.is_set
	|| offlistprocnodropsvidown.is_set
	|| offlistprocdropmctdown.is_set
	|| offlistprocdropctxtinvalid.is_set
	|| offlistprocdropvrfinvalid.is_set
	|| offlistprocdropl3addrinvalid.is_set
	|| offlistprocdropl3addrsanityfailed.is_set
	|| offlistprocdropmacsanityfailed.is_set
	|| offlistprocdropownmac.is_set
	|| offlistprocdropownipv6addr.is_set
	|| offlistprocdropownvipv6addr.is_set
	|| offlistprocdropcreateadjfailed.is_set
	|| offlistprocdropsubnetmismatch.is_set
	|| offlistprocdropadjalreadyexist.is_set
	|| offlistprocnodropipv6disabled.is_set
	|| offlistprocdropcount.is_set
	|| offlistprocnodropcount.is_set
	|| offlistprocaddadj.is_set
	|| offlistprocdeladj.is_set
	|| offlistprocadjalreadyexist.is_set;
}

bool System::NdItems::InstItems::VpcstatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfsstatus.yfilter)
	|| ydk::is_set(layer3routing.yfilter)
	|| ydk::is_set(syncprocdroprecvpullreq.yfilter)
	|| ydk::is_set(syncprocdroprecvpushmsg.yfilter)
	|| ydk::is_set(syncignoresendpullreq.yfilter)
	|| ydk::is_set(syncignoresendpushmsg.yfilter)
	|| ydk::is_set(syncdropimapifailed.yfilter)
	|| ydk::is_set(syncdropmcemapifailed.yfilter)
	|| ydk::is_set(syncdropinvalidpciod.yfilter)
	|| ydk::is_set(syncprocdropptlookupfailed.yfilter)
	|| ydk::is_set(syncprocdroprespfailednomct.yfilter)
	|| ydk::is_set(syncprocdroprespfailed.yfilter)
	|| ydk::is_set(syncprocdropmcemifindexvpcconvfailed.yfilter)
	|| ydk::is_set(syncprocdropmcemvpcifindexconvfailed.yfilter)
	|| ydk::is_set(periodicsyncprocdropmcemifindexvpcconvfailed.yfilter)
	|| ydk::is_set(periodicsyncprocdropmcemvpcifindexconvfailed.yfilter)
	|| ydk::is_set(syncprocrespsent.yfilter)
	|| ydk::is_set(syncprocresprcvd.yfilter)
	|| ydk::is_set(syncprocresprcvderr.yfilter)
	|| ydk::is_set(syncprocrcvdmsg.yfilter)
	|| ydk::is_set(syncprocsendfailed.yfilter)
	|| ydk::is_set(syncproccfsreldlvryfailed.yfilter)
	|| ydk::is_set(syncproccfsreldlvrysuccess.yfilter)
	|| ydk::is_set(offlistprocdropptaddfailed.yfilter)
	|| ydk::is_set(offlistprocdropnomem.yfilter)
	|| ydk::is_set(offlistprocdroptmrcreatefailed.yfilter)
	|| ydk::is_set(offlistprocdropaddadjfailed.yfilter)
	|| ydk::is_set(offlistprocdropptlookupfailed.yfilter)
	|| ydk::is_set(offlistprocnodropvlanmismatch.yfilter)
	|| ydk::is_set(offlistprocdropsviinvalid.yfilter)
	|| ydk::is_set(offlistprocnodropsvidown.yfilter)
	|| ydk::is_set(offlistprocdropmctdown.yfilter)
	|| ydk::is_set(offlistprocdropctxtinvalid.yfilter)
	|| ydk::is_set(offlistprocdropvrfinvalid.yfilter)
	|| ydk::is_set(offlistprocdropl3addrinvalid.yfilter)
	|| ydk::is_set(offlistprocdropl3addrsanityfailed.yfilter)
	|| ydk::is_set(offlistprocdropmacsanityfailed.yfilter)
	|| ydk::is_set(offlistprocdropownmac.yfilter)
	|| ydk::is_set(offlistprocdropownipv6addr.yfilter)
	|| ydk::is_set(offlistprocdropownvipv6addr.yfilter)
	|| ydk::is_set(offlistprocdropcreateadjfailed.yfilter)
	|| ydk::is_set(offlistprocdropsubnetmismatch.yfilter)
	|| ydk::is_set(offlistprocdropadjalreadyexist.yfilter)
	|| ydk::is_set(offlistprocnodropipv6disabled.yfilter)
	|| ydk::is_set(offlistprocdropcount.yfilter)
	|| ydk::is_set(offlistprocnodropcount.yfilter)
	|| ydk::is_set(offlistprocaddadj.yfilter)
	|| ydk::is_set(offlistprocdeladj.yfilter)
	|| ydk::is_set(offlistprocadjalreadyexist.yfilter);
}

std::string System::NdItems::InstItems::VpcstatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nd-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NdItems::InstItems::VpcstatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcstat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NdItems::InstItems::VpcstatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfsstatus.is_set || is_set(cfsstatus.yfilter)) leaf_name_data.push_back(cfsstatus.get_name_leafdata());
    if (layer3routing.is_set || is_set(layer3routing.yfilter)) leaf_name_data.push_back(layer3routing.get_name_leafdata());
    if (syncprocdroprecvpullreq.is_set || is_set(syncprocdroprecvpullreq.yfilter)) leaf_name_data.push_back(syncprocdroprecvpullreq.get_name_leafdata());
    if (syncprocdroprecvpushmsg.is_set || is_set(syncprocdroprecvpushmsg.yfilter)) leaf_name_data.push_back(syncprocdroprecvpushmsg.get_name_leafdata());
    if (syncignoresendpullreq.is_set || is_set(syncignoresendpullreq.yfilter)) leaf_name_data.push_back(syncignoresendpullreq.get_name_leafdata());
    if (syncignoresendpushmsg.is_set || is_set(syncignoresendpushmsg.yfilter)) leaf_name_data.push_back(syncignoresendpushmsg.get_name_leafdata());
    if (syncdropimapifailed.is_set || is_set(syncdropimapifailed.yfilter)) leaf_name_data.push_back(syncdropimapifailed.get_name_leafdata());
    if (syncdropmcemapifailed.is_set || is_set(syncdropmcemapifailed.yfilter)) leaf_name_data.push_back(syncdropmcemapifailed.get_name_leafdata());
    if (syncdropinvalidpciod.is_set || is_set(syncdropinvalidpciod.yfilter)) leaf_name_data.push_back(syncdropinvalidpciod.get_name_leafdata());
    if (syncprocdropptlookupfailed.is_set || is_set(syncprocdropptlookupfailed.yfilter)) leaf_name_data.push_back(syncprocdropptlookupfailed.get_name_leafdata());
    if (syncprocdroprespfailednomct.is_set || is_set(syncprocdroprespfailednomct.yfilter)) leaf_name_data.push_back(syncprocdroprespfailednomct.get_name_leafdata());
    if (syncprocdroprespfailed.is_set || is_set(syncprocdroprespfailed.yfilter)) leaf_name_data.push_back(syncprocdroprespfailed.get_name_leafdata());
    if (syncprocdropmcemifindexvpcconvfailed.is_set || is_set(syncprocdropmcemifindexvpcconvfailed.yfilter)) leaf_name_data.push_back(syncprocdropmcemifindexvpcconvfailed.get_name_leafdata());
    if (syncprocdropmcemvpcifindexconvfailed.is_set || is_set(syncprocdropmcemvpcifindexconvfailed.yfilter)) leaf_name_data.push_back(syncprocdropmcemvpcifindexconvfailed.get_name_leafdata());
    if (periodicsyncprocdropmcemifindexvpcconvfailed.is_set || is_set(periodicsyncprocdropmcemifindexvpcconvfailed.yfilter)) leaf_name_data.push_back(periodicsyncprocdropmcemifindexvpcconvfailed.get_name_leafdata());
    if (periodicsyncprocdropmcemvpcifindexconvfailed.is_set || is_set(periodicsyncprocdropmcemvpcifindexconvfailed.yfilter)) leaf_name_data.push_back(periodicsyncprocdropmcemvpcifindexconvfailed.get_name_leafdata());
    if (syncprocrespsent.is_set || is_set(syncprocrespsent.yfilter)) leaf_name_data.push_back(syncprocrespsent.get_name_leafdata());
    if (syncprocresprcvd.is_set || is_set(syncprocresprcvd.yfilter)) leaf_name_data.push_back(syncprocresprcvd.get_name_leafdata());
    if (syncprocresprcvderr.is_set || is_set(syncprocresprcvderr.yfilter)) leaf_name_data.push_back(syncprocresprcvderr.get_name_leafdata());
    if (syncprocrcvdmsg.is_set || is_set(syncprocrcvdmsg.yfilter)) leaf_name_data.push_back(syncprocrcvdmsg.get_name_leafdata());
    if (syncprocsendfailed.is_set || is_set(syncprocsendfailed.yfilter)) leaf_name_data.push_back(syncprocsendfailed.get_name_leafdata());
    if (syncproccfsreldlvryfailed.is_set || is_set(syncproccfsreldlvryfailed.yfilter)) leaf_name_data.push_back(syncproccfsreldlvryfailed.get_name_leafdata());
    if (syncproccfsreldlvrysuccess.is_set || is_set(syncproccfsreldlvrysuccess.yfilter)) leaf_name_data.push_back(syncproccfsreldlvrysuccess.get_name_leafdata());
    if (offlistprocdropptaddfailed.is_set || is_set(offlistprocdropptaddfailed.yfilter)) leaf_name_data.push_back(offlistprocdropptaddfailed.get_name_leafdata());
    if (offlistprocdropnomem.is_set || is_set(offlistprocdropnomem.yfilter)) leaf_name_data.push_back(offlistprocdropnomem.get_name_leafdata());
    if (offlistprocdroptmrcreatefailed.is_set || is_set(offlistprocdroptmrcreatefailed.yfilter)) leaf_name_data.push_back(offlistprocdroptmrcreatefailed.get_name_leafdata());
    if (offlistprocdropaddadjfailed.is_set || is_set(offlistprocdropaddadjfailed.yfilter)) leaf_name_data.push_back(offlistprocdropaddadjfailed.get_name_leafdata());
    if (offlistprocdropptlookupfailed.is_set || is_set(offlistprocdropptlookupfailed.yfilter)) leaf_name_data.push_back(offlistprocdropptlookupfailed.get_name_leafdata());
    if (offlistprocnodropvlanmismatch.is_set || is_set(offlistprocnodropvlanmismatch.yfilter)) leaf_name_data.push_back(offlistprocnodropvlanmismatch.get_name_leafdata());
    if (offlistprocdropsviinvalid.is_set || is_set(offlistprocdropsviinvalid.yfilter)) leaf_name_data.push_back(offlistprocdropsviinvalid.get_name_leafdata());
    if (offlistprocnodropsvidown.is_set || is_set(offlistprocnodropsvidown.yfilter)) leaf_name_data.push_back(offlistprocnodropsvidown.get_name_leafdata());
    if (offlistprocdropmctdown.is_set || is_set(offlistprocdropmctdown.yfilter)) leaf_name_data.push_back(offlistprocdropmctdown.get_name_leafdata());
    if (offlistprocdropctxtinvalid.is_set || is_set(offlistprocdropctxtinvalid.yfilter)) leaf_name_data.push_back(offlistprocdropctxtinvalid.get_name_leafdata());
    if (offlistprocdropvrfinvalid.is_set || is_set(offlistprocdropvrfinvalid.yfilter)) leaf_name_data.push_back(offlistprocdropvrfinvalid.get_name_leafdata());
    if (offlistprocdropl3addrinvalid.is_set || is_set(offlistprocdropl3addrinvalid.yfilter)) leaf_name_data.push_back(offlistprocdropl3addrinvalid.get_name_leafdata());
    if (offlistprocdropl3addrsanityfailed.is_set || is_set(offlistprocdropl3addrsanityfailed.yfilter)) leaf_name_data.push_back(offlistprocdropl3addrsanityfailed.get_name_leafdata());
    if (offlistprocdropmacsanityfailed.is_set || is_set(offlistprocdropmacsanityfailed.yfilter)) leaf_name_data.push_back(offlistprocdropmacsanityfailed.get_name_leafdata());
    if (offlistprocdropownmac.is_set || is_set(offlistprocdropownmac.yfilter)) leaf_name_data.push_back(offlistprocdropownmac.get_name_leafdata());
    if (offlistprocdropownipv6addr.is_set || is_set(offlistprocdropownipv6addr.yfilter)) leaf_name_data.push_back(offlistprocdropownipv6addr.get_name_leafdata());
    if (offlistprocdropownvipv6addr.is_set || is_set(offlistprocdropownvipv6addr.yfilter)) leaf_name_data.push_back(offlistprocdropownvipv6addr.get_name_leafdata());
    if (offlistprocdropcreateadjfailed.is_set || is_set(offlistprocdropcreateadjfailed.yfilter)) leaf_name_data.push_back(offlistprocdropcreateadjfailed.get_name_leafdata());
    if (offlistprocdropsubnetmismatch.is_set || is_set(offlistprocdropsubnetmismatch.yfilter)) leaf_name_data.push_back(offlistprocdropsubnetmismatch.get_name_leafdata());
    if (offlistprocdropadjalreadyexist.is_set || is_set(offlistprocdropadjalreadyexist.yfilter)) leaf_name_data.push_back(offlistprocdropadjalreadyexist.get_name_leafdata());
    if (offlistprocnodropipv6disabled.is_set || is_set(offlistprocnodropipv6disabled.yfilter)) leaf_name_data.push_back(offlistprocnodropipv6disabled.get_name_leafdata());
    if (offlistprocdropcount.is_set || is_set(offlistprocdropcount.yfilter)) leaf_name_data.push_back(offlistprocdropcount.get_name_leafdata());
    if (offlistprocnodropcount.is_set || is_set(offlistprocnodropcount.yfilter)) leaf_name_data.push_back(offlistprocnodropcount.get_name_leafdata());
    if (offlistprocaddadj.is_set || is_set(offlistprocaddadj.yfilter)) leaf_name_data.push_back(offlistprocaddadj.get_name_leafdata());
    if (offlistprocdeladj.is_set || is_set(offlistprocdeladj.yfilter)) leaf_name_data.push_back(offlistprocdeladj.get_name_leafdata());
    if (offlistprocadjalreadyexist.is_set || is_set(offlistprocadjalreadyexist.yfilter)) leaf_name_data.push_back(offlistprocadjalreadyexist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NdItems::InstItems::VpcstatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NdItems::InstItems::VpcstatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NdItems::InstItems::VpcstatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfsStatus")
    {
        cfsstatus = value;
        cfsstatus.value_namespace = name_space;
        cfsstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer3Routing")
    {
        layer3routing = value;
        layer3routing.value_namespace = name_space;
        layer3routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropRecvPullReq")
    {
        syncprocdroprecvpullreq = value;
        syncprocdroprecvpullreq.value_namespace = name_space;
        syncprocdroprecvpullreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropRecvPushMsg")
    {
        syncprocdroprecvpushmsg = value;
        syncprocdroprecvpushmsg.value_namespace = name_space;
        syncprocdroprecvpushmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncIgnoreSendPullReq")
    {
        syncignoresendpullreq = value;
        syncignoresendpullreq.value_namespace = name_space;
        syncignoresendpullreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncIgnoreSendPushMsg")
    {
        syncignoresendpushmsg = value;
        syncignoresendpushmsg.value_namespace = name_space;
        syncignoresendpushmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncDropIMApiFailed")
    {
        syncdropimapifailed = value;
        syncdropimapifailed.value_namespace = name_space;
        syncdropimapifailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncDropMcemApiFailed")
    {
        syncdropmcemapifailed = value;
        syncdropmcemapifailed.value_namespace = name_space;
        syncdropmcemapifailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncDropInvalidPcIod")
    {
        syncdropinvalidpciod = value;
        syncdropinvalidpciod.value_namespace = name_space;
        syncdropinvalidpciod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropPtLookupFailed")
    {
        syncprocdropptlookupfailed = value;
        syncprocdropptlookupfailed.value_namespace = name_space;
        syncprocdropptlookupfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropRespFailedNomct")
    {
        syncprocdroprespfailednomct = value;
        syncprocdroprespfailednomct.value_namespace = name_space;
        syncprocdroprespfailednomct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropRespFailed")
    {
        syncprocdroprespfailed = value;
        syncprocdroprespfailed.value_namespace = name_space;
        syncprocdroprespfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropMCEMIfindexVpcConvFailed")
    {
        syncprocdropmcemifindexvpcconvfailed = value;
        syncprocdropmcemifindexvpcconvfailed.value_namespace = name_space;
        syncprocdropmcemifindexvpcconvfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcDropMCEMVpcIfindexConvFailed")
    {
        syncprocdropmcemvpcifindexconvfailed = value;
        syncprocdropmcemvpcifindexconvfailed.value_namespace = name_space;
        syncprocdropmcemvpcifindexconvfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "PeriodicSyncProcDropMCEMIfindexVpcConvFailed")
    {
        periodicsyncprocdropmcemifindexvpcconvfailed = value;
        periodicsyncprocdropmcemifindexvpcconvfailed.value_namespace = name_space;
        periodicsyncprocdropmcemifindexvpcconvfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodicSyncProcDropMCEMVpcIfindexConvFailed")
    {
        periodicsyncprocdropmcemvpcifindexconvfailed = value;
        periodicsyncprocdropmcemvpcifindexconvfailed.value_namespace = name_space;
        periodicsyncprocdropmcemvpcifindexconvfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcRespSent")
    {
        syncprocrespsent = value;
        syncprocrespsent.value_namespace = name_space;
        syncprocrespsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcRespRcvd")
    {
        syncprocresprcvd = value;
        syncprocresprcvd.value_namespace = name_space;
        syncprocresprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcRespRcvdErr")
    {
        syncprocresprcvderr = value;
        syncprocresprcvderr.value_namespace = name_space;
        syncprocresprcvderr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcRcvdMsg")
    {
        syncprocrcvdmsg = value;
        syncprocrcvdmsg.value_namespace = name_space;
        syncprocrcvdmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcSendFailed")
    {
        syncprocsendfailed = value;
        syncprocsendfailed.value_namespace = name_space;
        syncprocsendfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcCfsRelDlvryFailed")
    {
        syncproccfsreldlvryfailed = value;
        syncproccfsreldlvryfailed.value_namespace = name_space;
        syncproccfsreldlvryfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncProcCfsRelDlvrySuccess")
    {
        syncproccfsreldlvrysuccess = value;
        syncproccfsreldlvrysuccess.value_namespace = name_space;
        syncproccfsreldlvrysuccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropPtAddFailed")
    {
        offlistprocdropptaddfailed = value;
        offlistprocdropptaddfailed.value_namespace = name_space;
        offlistprocdropptaddfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropNoMem")
    {
        offlistprocdropnomem = value;
        offlistprocdropnomem.value_namespace = name_space;
        offlistprocdropnomem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropTmrCreateFailed")
    {
        offlistprocdroptmrcreatefailed = value;
        offlistprocdroptmrcreatefailed.value_namespace = name_space;
        offlistprocdroptmrcreatefailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropAddAdjFailed")
    {
        offlistprocdropaddadjfailed = value;
        offlistprocdropaddadjfailed.value_namespace = name_space;
        offlistprocdropaddadjfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropPtLookupFailed")
    {
        offlistprocdropptlookupfailed = value;
        offlistprocdropptlookupfailed.value_namespace = name_space;
        offlistprocdropptlookupfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcNoDropVlanMismatch")
    {
        offlistprocnodropvlanmismatch = value;
        offlistprocnodropvlanmismatch.value_namespace = name_space;
        offlistprocnodropvlanmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropSVIInvalid")
    {
        offlistprocdropsviinvalid = value;
        offlistprocdropsviinvalid.value_namespace = name_space;
        offlistprocdropsviinvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcNoDropSVIDown")
    {
        offlistprocnodropsvidown = value;
        offlistprocnodropsvidown.value_namespace = name_space;
        offlistprocnodropsvidown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropMCTDown")
    {
        offlistprocdropmctdown = value;
        offlistprocdropmctdown.value_namespace = name_space;
        offlistprocdropmctdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropCtxtInvalid")
    {
        offlistprocdropctxtinvalid = value;
        offlistprocdropctxtinvalid.value_namespace = name_space;
        offlistprocdropctxtinvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropVRFInvalid")
    {
        offlistprocdropvrfinvalid = value;
        offlistprocdropvrfinvalid.value_namespace = name_space;
        offlistprocdropvrfinvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropL3addrInvalid")
    {
        offlistprocdropl3addrinvalid = value;
        offlistprocdropl3addrinvalid.value_namespace = name_space;
        offlistprocdropl3addrinvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropL3addrSanityFailed")
    {
        offlistprocdropl3addrsanityfailed = value;
        offlistprocdropl3addrsanityfailed.value_namespace = name_space;
        offlistprocdropl3addrsanityfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropMacSanityFailed")
    {
        offlistprocdropmacsanityfailed = value;
        offlistprocdropmacsanityfailed.value_namespace = name_space;
        offlistprocdropmacsanityfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropOwnMac")
    {
        offlistprocdropownmac = value;
        offlistprocdropownmac.value_namespace = name_space;
        offlistprocdropownmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropOwnIpv6Addr")
    {
        offlistprocdropownipv6addr = value;
        offlistprocdropownipv6addr.value_namespace = name_space;
        offlistprocdropownipv6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropOwnVIPv6Addr")
    {
        offlistprocdropownvipv6addr = value;
        offlistprocdropownvipv6addr.value_namespace = name_space;
        offlistprocdropownvipv6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropCreateAdjFailed")
    {
        offlistprocdropcreateadjfailed = value;
        offlistprocdropcreateadjfailed.value_namespace = name_space;
        offlistprocdropcreateadjfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropSubnetMismatch")
    {
        offlistprocdropsubnetmismatch = value;
        offlistprocdropsubnetmismatch.value_namespace = name_space;
        offlistprocdropsubnetmismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropAdjAlreadyExist")
    {
        offlistprocdropadjalreadyexist = value;
        offlistprocdropadjalreadyexist.value_namespace = name_space;
        offlistprocdropadjalreadyexist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcNoDropIpv6Disabled")
    {
        offlistprocnodropipv6disabled = value;
        offlistprocnodropipv6disabled.value_namespace = name_space;
        offlistprocnodropipv6disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDropCount")
    {
        offlistprocdropcount = value;
        offlistprocdropcount.value_namespace = name_space;
        offlistprocdropcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcNoDropCount")
    {
        offlistprocnodropcount = value;
        offlistprocnodropcount.value_namespace = name_space;
        offlistprocnodropcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcAddAdj")
    {
        offlistprocaddadj = value;
        offlistprocaddadj.value_namespace = name_space;
        offlistprocaddadj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcDelAdj")
    {
        offlistprocdeladj = value;
        offlistprocdeladj.value_namespace = name_space;
        offlistprocdeladj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offlistProcAdjAlreadyExist")
    {
        offlistprocadjalreadyexist = value;
        offlistprocadjalreadyexist.value_namespace = name_space;
        offlistprocadjalreadyexist.value_namespace_prefix = name_space_prefix;
    }
}

void System::NdItems::InstItems::VpcstatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfsStatus")
    {
        cfsstatus.yfilter = yfilter;
    }
    if(value_path == "layer3Routing")
    {
        layer3routing.yfilter = yfilter;
    }
    if(value_path == "syncProcDropRecvPullReq")
    {
        syncprocdroprecvpullreq.yfilter = yfilter;
    }
    if(value_path == "syncProcDropRecvPushMsg")
    {
        syncprocdroprecvpushmsg.yfilter = yfilter;
    }
    if(value_path == "syncIgnoreSendPullReq")
    {
        syncignoresendpullreq.yfilter = yfilter;
    }
    if(value_path == "syncIgnoreSendPushMsg")
    {
        syncignoresendpushmsg.yfilter = yfilter;
    }
    if(value_path == "syncDropIMApiFailed")
    {
        syncdropimapifailed.yfilter = yfilter;
    }
    if(value_path == "syncDropMcemApiFailed")
    {
        syncdropmcemapifailed.yfilter = yfilter;
    }
    if(value_path == "syncDropInvalidPcIod")
    {
        syncdropinvalidpciod.yfilter = yfilter;
    }
    if(value_path == "syncProcDropPtLookupFailed")
    {
        syncprocdropptlookupfailed.yfilter = yfilter;
    }
    if(value_path == "syncProcDropRespFailedNomct")
    {
        syncprocdroprespfailednomct.yfilter = yfilter;
    }
    if(value_path == "syncProcDropRespFailed")
    {
        syncprocdroprespfailed.yfilter = yfilter;
    }
    if(value_path == "syncProcDropMCEMIfindexVpcConvFailed")
    {
        syncprocdropmcemifindexvpcconvfailed.yfilter = yfilter;
    }
    if(value_path == "syncProcDropMCEMVpcIfindexConvFailed")
    {
        syncprocdropmcemvpcifindexconvfailed.yfilter = yfilter;
    }
    if(value_path == "PeriodicSyncProcDropMCEMIfindexVpcConvFailed")
    {
        periodicsyncprocdropmcemifindexvpcconvfailed.yfilter = yfilter;
    }
    if(value_path == "periodicSyncProcDropMCEMVpcIfindexConvFailed")
    {
        periodicsyncprocdropmcemvpcifindexconvfailed.yfilter = yfilter;
    }
    if(value_path == "syncProcRespSent")
    {
        syncprocrespsent.yfilter = yfilter;
    }
    if(value_path == "syncProcRespRcvd")
    {
        syncprocresprcvd.yfilter = yfilter;
    }
    if(value_path == "syncProcRespRcvdErr")
    {
        syncprocresprcvderr.yfilter = yfilter;
    }
    if(value_path == "syncProcRcvdMsg")
    {
        syncprocrcvdmsg.yfilter = yfilter;
    }
    if(value_path == "syncProcSendFailed")
    {
        syncprocsendfailed.yfilter = yfilter;
    }
    if(value_path == "syncProcCfsRelDlvryFailed")
    {
        syncproccfsreldlvryfailed.yfilter = yfilter;
    }
    if(value_path == "syncProcCfsRelDlvrySuccess")
    {
        syncproccfsreldlvrysuccess.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropPtAddFailed")
    {
        offlistprocdropptaddfailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropNoMem")
    {
        offlistprocdropnomem.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropTmrCreateFailed")
    {
        offlistprocdroptmrcreatefailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropAddAdjFailed")
    {
        offlistprocdropaddadjfailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropPtLookupFailed")
    {
        offlistprocdropptlookupfailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcNoDropVlanMismatch")
    {
        offlistprocnodropvlanmismatch.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropSVIInvalid")
    {
        offlistprocdropsviinvalid.yfilter = yfilter;
    }
    if(value_path == "offlistProcNoDropSVIDown")
    {
        offlistprocnodropsvidown.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropMCTDown")
    {
        offlistprocdropmctdown.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropCtxtInvalid")
    {
        offlistprocdropctxtinvalid.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropVRFInvalid")
    {
        offlistprocdropvrfinvalid.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropL3addrInvalid")
    {
        offlistprocdropl3addrinvalid.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropL3addrSanityFailed")
    {
        offlistprocdropl3addrsanityfailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropMacSanityFailed")
    {
        offlistprocdropmacsanityfailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropOwnMac")
    {
        offlistprocdropownmac.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropOwnIpv6Addr")
    {
        offlistprocdropownipv6addr.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropOwnVIPv6Addr")
    {
        offlistprocdropownvipv6addr.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropCreateAdjFailed")
    {
        offlistprocdropcreateadjfailed.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropSubnetMismatch")
    {
        offlistprocdropsubnetmismatch.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropAdjAlreadyExist")
    {
        offlistprocdropadjalreadyexist.yfilter = yfilter;
    }
    if(value_path == "offlistProcNoDropIpv6Disabled")
    {
        offlistprocnodropipv6disabled.yfilter = yfilter;
    }
    if(value_path == "offlistProcDropCount")
    {
        offlistprocdropcount.yfilter = yfilter;
    }
    if(value_path == "offlistProcNoDropCount")
    {
        offlistprocnodropcount.yfilter = yfilter;
    }
    if(value_path == "offlistProcAddAdj")
    {
        offlistprocaddadj.yfilter = yfilter;
    }
    if(value_path == "offlistProcDelAdj")
    {
        offlistprocdeladj.yfilter = yfilter;
    }
    if(value_path == "offlistProcAdjAlreadyExist")
    {
        offlistprocadjalreadyexist.yfilter = yfilter;
    }
}

bool System::NdItems::InstItems::VpcstatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfsStatus" || name == "layer3Routing" || name == "syncProcDropRecvPullReq" || name == "syncProcDropRecvPushMsg" || name == "syncIgnoreSendPullReq" || name == "syncIgnoreSendPushMsg" || name == "syncDropIMApiFailed" || name == "syncDropMcemApiFailed" || name == "syncDropInvalidPcIod" || name == "syncProcDropPtLookupFailed" || name == "syncProcDropRespFailedNomct" || name == "syncProcDropRespFailed" || name == "syncProcDropMCEMIfindexVpcConvFailed" || name == "syncProcDropMCEMVpcIfindexConvFailed" || name == "PeriodicSyncProcDropMCEMIfindexVpcConvFailed" || name == "periodicSyncProcDropMCEMVpcIfindexConvFailed" || name == "syncProcRespSent" || name == "syncProcRespRcvd" || name == "syncProcRespRcvdErr" || name == "syncProcRcvdMsg" || name == "syncProcSendFailed" || name == "syncProcCfsRelDlvryFailed" || name == "syncProcCfsRelDlvrySuccess" || name == "offlistProcDropPtAddFailed" || name == "offlistProcDropNoMem" || name == "offlistProcDropTmrCreateFailed" || name == "offlistProcDropAddAdjFailed" || name == "offlistProcDropPtLookupFailed" || name == "offlistProcNoDropVlanMismatch" || name == "offlistProcDropSVIInvalid" || name == "offlistProcNoDropSVIDown" || name == "offlistProcDropMCTDown" || name == "offlistProcDropCtxtInvalid" || name == "offlistProcDropVRFInvalid" || name == "offlistProcDropL3addrInvalid" || name == "offlistProcDropL3addrSanityFailed" || name == "offlistProcDropMacSanityFailed" || name == "offlistProcDropOwnMac" || name == "offlistProcDropOwnIpv6Addr" || name == "offlistProcDropOwnVIPv6Addr" || name == "offlistProcDropCreateAdjFailed" || name == "offlistProcDropSubnetMismatch" || name == "offlistProcDropAdjAlreadyExist" || name == "offlistProcNoDropIpv6Disabled" || name == "offlistProcDropCount" || name == "offlistProcNoDropCount" || name == "offlistProcAddAdj" || name == "offlistProcDelAdj" || name == "offlistProcAdjAlreadyExist")
        return true;
    return false;
}

System::NgmvpnItems::NgmvpnItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::NgmvpnItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "ngmvpn-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgmvpnItems::~NgmvpnItems()
{
}

bool System::NgmvpnItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NgmvpnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NgmvpnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgmvpnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ngmvpn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NgmvpnItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::NgmvpnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::InstItems()
    :
    pruning{YType::str, "pruning"},
    switchrole{YType::str, "switchRole"},
    fabctrlseg{YType::str, "fabCtrlSeg"},
    peerfabctrlseg{YType::str, "peerFabCtrlSeg"},
    advvpcrpfrt{YType::str, "advVpcRpfRt"},
    vnilist{YType::str, "vniList"},
    overlaydistributeddr{YType::boolean, "overlayDistributedDr"},
    overlaysptonly{YType::boolean, "overlaySptOnly"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    af_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems>())
{
    af_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "ngmvpn-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgmvpnItems::InstItems::~InstItems()
{
}

bool System::NgmvpnItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return pruning.is_set
	|| switchrole.is_set
	|| fabctrlseg.is_set
	|| peerfabctrlseg.is_set
	|| advvpcrpfrt.is_set
	|| vnilist.is_set
	|| overlaydistributeddr.is_set
	|| overlaysptonly.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::NgmvpnItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pruning.yfilter)
	|| ydk::is_set(switchrole.yfilter)
	|| ydk::is_set(fabctrlseg.yfilter)
	|| ydk::is_set(peerfabctrlseg.yfilter)
	|| ydk::is_set(advvpcrpfrt.yfilter)
	|| ydk::is_set(vnilist.yfilter)
	|| ydk::is_set(overlaydistributeddr.yfilter)
	|| ydk::is_set(overlaysptonly.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngmvpn-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgmvpnItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pruning.is_set || is_set(pruning.yfilter)) leaf_name_data.push_back(pruning.get_name_leafdata());
    if (switchrole.is_set || is_set(switchrole.yfilter)) leaf_name_data.push_back(switchrole.get_name_leafdata());
    if (fabctrlseg.is_set || is_set(fabctrlseg.yfilter)) leaf_name_data.push_back(fabctrlseg.get_name_leafdata());
    if (peerfabctrlseg.is_set || is_set(peerfabctrlseg.yfilter)) leaf_name_data.push_back(peerfabctrlseg.get_name_leafdata());
    if (advvpcrpfrt.is_set || is_set(advvpcrpfrt.yfilter)) leaf_name_data.push_back(advvpcrpfrt.get_name_leafdata());
    if (vnilist.is_set || is_set(vnilist.yfilter)) leaf_name_data.push_back(vnilist.get_name_leafdata());
    if (overlaydistributeddr.is_set || is_set(overlaydistributeddr.yfilter)) leaf_name_data.push_back(overlaydistributeddr.get_name_leafdata());
    if (overlaysptonly.is_set || is_set(overlaysptonly.yfilter)) leaf_name_data.push_back(overlaysptonly.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pruning")
    {
        pruning = value;
        pruning.value_namespace = name_space;
        pruning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchRole")
    {
        switchrole = value;
        switchrole.value_namespace = name_space;
        switchrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabCtrlSeg")
    {
        fabctrlseg = value;
        fabctrlseg.value_namespace = name_space;
        fabctrlseg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerFabCtrlSeg")
    {
        peerfabctrlseg = value;
        peerfabctrlseg.value_namespace = name_space;
        peerfabctrlseg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advVpcRpfRt")
    {
        advvpcrpfrt = value;
        advvpcrpfrt.value_namespace = name_space;
        advvpcrpfrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniList")
    {
        vnilist = value;
        vnilist.value_namespace = name_space;
        vnilist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlayDistributedDr")
    {
        overlaydistributeddr = value;
        overlaydistributeddr.value_namespace = name_space;
        overlaydistributeddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlaySptOnly")
    {
        overlaysptonly = value;
        overlaysptonly.value_namespace = name_space;
        overlaysptonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pruning")
    {
        pruning.yfilter = yfilter;
    }
    if(value_path == "switchRole")
    {
        switchrole.yfilter = yfilter;
    }
    if(value_path == "fabCtrlSeg")
    {
        fabctrlseg.yfilter = yfilter;
    }
    if(value_path == "peerFabCtrlSeg")
    {
        peerfabctrlseg.yfilter = yfilter;
    }
    if(value_path == "advVpcRpfRt")
    {
        advvpcrpfrt.yfilter = yfilter;
    }
    if(value_path == "vniList")
    {
        vnilist.yfilter = yfilter;
    }
    if(value_path == "overlayDistributedDr")
    {
        overlaydistributeddr.yfilter = yfilter;
    }
    if(value_path == "overlaySptOnly")
    {
        overlaysptonly.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "pruning" || name == "switchRole" || name == "fabCtrlSeg" || name == "peerFabCtrlSeg" || name == "advVpcRpfRt" || name == "vniList" || name == "overlayDistributedDr" || name == "overlaySptOnly" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfItems()
    :
    af_list(this, {"type"})
{

    yang_name = "af-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgmvpnItems::InstItems::AfItems::~AfItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::has_operation() const
{
    for (std::size_t index=0; index<af_list.len(); index++)
    {
        if(af_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngmvpn-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgmvpnItems::InstItems::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Af-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList>();
        c->parent = this;
        af_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : af_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Af-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::AfList()
    :
    type{YType::enumeration, "type"}
        ,
    db_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Af-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::~AfList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ngmvpn-items/inst-items/af-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Af-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "type")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbItems()
    :
    db_list(this, {"dbtype"})
{

    yang_name = "db-items"; yang_parent_name = "Af-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::~DbItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::DbList()
    :
    dbtype{YType::enumeration, "dbtype"},
    name{YType::str, "name"}
        ,
    vni_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems>())
    , vrf_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems>())
{
    vni_items->parent = this;
    vrf_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::~DbList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return dbtype.is_set
	|| name.is_set
	|| (vni_items !=  nullptr && vni_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dbtype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (vni_items !=  nullptr && vni_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(dbtype, "dbtype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dbtype.is_set || is_set(dbtype.yfilter)) leaf_name_data.push_back(dbtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vni-items")
    {
        if(vni_items == nullptr)
        {
            vni_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems>();
        }
        return vni_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems>();
        }
        return vrf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vni_items != nullptr)
    {
        children["vni-items"] = vni_items;
    }

    if(vrf_items != nullptr)
    {
        children["vrf-items"] = vrf_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dbtype")
    {
        dbtype = value;
        dbtype.value_namespace = name_space;
        dbtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dbtype")
    {
        dbtype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni-items" || name == "vrf-items" || name == "dbtype" || name == "name")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniItems()
    :
    vni_list(this, {"id"})
{

    yang_name = "vni-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::~VniItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vni_list.len(); index++)
    {
        if(vni_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::has_operation() const
{
    for (std::size_t index=0; index<vni_list.len(); index++)
    {
        if(vni_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vni-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList>();
        c->parent = this;
        vni_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vni_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vni-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::VniList()
    :
    id{YType::uint32, "id"}
        ,
    l2route_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems>())
{
    l2route_items->parent = this;

    yang_name = "Vni-list"; yang_parent_name = "vni-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::~VniList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (l2route_items !=  nullptr && l2route_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (l2route_items !=  nullptr && l2route_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vni-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2route-items")
    {
        if(l2route_items == nullptr)
        {
            l2route_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems>();
        }
        return l2route_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2route_items != nullptr)
    {
        children["l2route-items"] = l2route_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2route-items" || name == "id")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeItems()
    :
    l2route_list(this, {"src", "grp"})
{

    yang_name = "l2route-items"; yang_parent_name = "Vni-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::~L2routeItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2route_list.len(); index++)
    {
        if(l2route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::has_operation() const
{
    for (std::size_t index=0; index<l2route_list.len(); index++)
    {
        if(l2route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2route-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2route-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList>();
        c->parent = this;
        l2route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : l2route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2route-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::L2routeList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    masklen{YType::uint32, "maskLen"}
        ,
    fabnode_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems>())
{
    fabnode_items->parent = this;

    yang_name = "L2route-list"; yang_parent_name = "l2route-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::~L2routeList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| masklen.is_set
	|| (fabnode_items !=  nullptr && fabnode_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(masklen.yfilter)
	|| (fabnode_items !=  nullptr && fabnode_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (masklen.is_set || is_set(masklen.yfilter)) leaf_name_data.push_back(masklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabNode-items")
    {
        if(fabnode_items == nullptr)
        {
            fabnode_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems>();
        }
        return fabnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabnode_items != nullptr)
    {
        children["fabNode-items"] = fabnode_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLen")
    {
        masklen = value;
        masklen.value_namespace = name_space;
        masklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "maskLen")
    {
        masklen.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabNode-items" || name == "src" || name == "grp" || name == "maskLen")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeItems()
    :
    fabnode_list(this, {"ipaddr"})
{

    yang_name = "fabNode-items"; yang_parent_name = "L2route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::~FabNodeItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabnode_list.len(); index++)
    {
        if(fabnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::has_operation() const
{
    for (std::size_t index=0; index<fabnode_list.len(); index++)
    {
        if(fabnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabNode-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList>();
        c->parent = this;
        fabnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabNode-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::FabNodeList()
    :
    ipaddr{YType::str, "ipAddr"},
    rpfnbr{YType::str, "rpfNbr"}
{

    yang_name = "FabNode-list"; yang_parent_name = "fabNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::~FabNodeList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::has_data() const
{
    if (is_presence_container) return true;
    return ipaddr.is_set
	|| rpfnbr.is_set;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(rpfnbr.yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabNode-list";
    ADD_KEY_TOKEN(ipaddr, "ipAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VniItems::VniList::L2routeItems::L2routeList::FabNodeItems::FabNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddr" || name == "rpfNbr")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfItems()
    :
    vrf_list(this, {"name"})
{

    yang_name = "vrf-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::~VrfItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::has_operation() const
{
    for (std::size_t index=0; index<vrf_list.len(); index++)
    {
        if(vrf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vrf-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList>();
        c->parent = this;
        vrf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vrf-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::VrfList()
    :
    name{YType::str, "name"}
        ,
    group_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "Vrf-list"; yang_parent_name = "vrf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::~VrfList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vrf-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_items != nullptr)
    {
        children["group-items"] = group_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "name")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupItems()
    :
    group_list(this, {"grpaddr"})
{

    yang_name = "group-items"; yang_parent_name = "Vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::~GroupItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<group_list.len(); index++)
    {
        if(group_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Group-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList>();
        c->parent = this;
        group_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Group-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::GroupList()
    :
    grpaddr{YType::str, "grpAddr"},
    masklen{YType::uint32, "maskLen"}
        ,
    source_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>())
{
    source_items->parent = this;

    yang_name = "Group-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::~GroupList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_data() const
{
    if (is_presence_container) return true;
    return grpaddr.is_set
	|| masklen.is_set
	|| (source_items !=  nullptr && source_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grpaddr.yfilter)
	|| ydk::is_set(masklen.yfilter)
	|| (source_items !=  nullptr && source_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Group-list";
    ADD_KEY_TOKEN(grpaddr, "grpAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grpaddr.is_set || is_set(grpaddr.yfilter)) leaf_name_data.push_back(grpaddr.get_name_leafdata());
    if (masklen.is_set || is_set(masklen.yfilter)) leaf_name_data.push_back(masklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems>();
        }
        return source_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_items != nullptr)
    {
        children["source-items"] = source_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpAddr")
    {
        grpaddr = value;
        grpaddr.value_namespace = name_space;
        grpaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLen")
    {
        masklen = value;
        masklen.value_namespace = name_space;
        masklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpAddr")
    {
        grpaddr.yfilter = yfilter;
    }
    if(value_path == "maskLen")
    {
        masklen.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-items" || name == "grpAddr" || name == "maskLen")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceItems()
    :
    source_list(this, {"srcaddr"})
{

    yang_name = "source-items"; yang_parent_name = "Group-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::~SourceItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_operation() const
{
    for (std::size_t index=0; index<source_list.len(); index++)
    {
        if(source_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Source-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList>();
        c->parent = this;
        source_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : source_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Source-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::SourceList()
    :
    srcaddr{YType::str, "srcAddr"},
    masklen{YType::uint32, "maskLen"},
    uptime{YType::str, "uptime"}
        ,
    fabnode_items(std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems>())
{
    fabnode_items->parent = this;

    yang_name = "Source-list"; yang_parent_name = "source-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::~SourceList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_data() const
{
    if (is_presence_container) return true;
    return srcaddr.is_set
	|| masklen.is_set
	|| uptime.is_set
	|| (fabnode_items !=  nullptr && fabnode_items->has_data());
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srcaddr.yfilter)
	|| ydk::is_set(masklen.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (fabnode_items !=  nullptr && fabnode_items->has_operation());
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Source-list";
    ADD_KEY_TOKEN(srcaddr, "srcAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srcaddr.is_set || is_set(srcaddr.yfilter)) leaf_name_data.push_back(srcaddr.get_name_leafdata());
    if (masklen.is_set || is_set(masklen.yfilter)) leaf_name_data.push_back(masklen.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabNode-items")
    {
        if(fabnode_items == nullptr)
        {
            fabnode_items = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems>();
        }
        return fabnode_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fabnode_items != nullptr)
    {
        children["fabNode-items"] = fabnode_items;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srcAddr")
    {
        srcaddr = value;
        srcaddr.value_namespace = name_space;
        srcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maskLen")
    {
        masklen = value;
        masklen.value_namespace = name_space;
        masklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srcAddr")
    {
        srcaddr.yfilter = yfilter;
    }
    if(value_path == "maskLen")
    {
        masklen.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabNode-items" || name == "srcAddr" || name == "maskLen" || name == "uptime")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeItems()
    :
    fabnode_list(this, {"ipaddr"})
{

    yang_name = "fabNode-items"; yang_parent_name = "Source-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::~FabNodeItems()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabnode_list.len(); index++)
    {
        if(fabnode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::has_operation() const
{
    for (std::size_t index=0; index<fabnode_list.len(); index++)
    {
        if(fabnode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabNode-list")
    {
        auto c = std::make_shared<System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList>();
        c->parent = this;
        fabnode_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fabnode_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabNode-list")
        return true;
    return false;
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::FabNodeList()
    :
    ipaddr{YType::str, "ipAddr"},
    rpfnbr{YType::str, "rpfNbr"}
{

    yang_name = "FabNode-list"; yang_parent_name = "fabNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::~FabNodeList()
{
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::has_data() const
{
    if (is_presence_container) return true;
    return ipaddr.is_set
	|| rpfnbr.is_set;
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(rpfnbr.yfilter);
}

std::string System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabNode-list";
    ADD_KEY_TOKEN(ipaddr, "ipAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
}

void System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
}

bool System::NgmvpnItems::InstItems::AfItems::AfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::FabNodeItems::FabNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipAddr" || name == "rpfNbr")
        return true;
    return false;
}

System::Ospfv3Items::Ospfv3Items()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::Ospfv3Items::InstItems>())
    , if_items(std::make_shared<System::Ospfv3Items::IfItems>())
{
    inst_items->parent = this;
    if_items->parent = this;

    yang_name = "ospfv3-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ospfv3Items::~Ospfv3Items()
{
}

bool System::Ospfv3Items::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::Ospfv3Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::Ospfv3Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ospfv3Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::Ospfv3Items::InstItems>();
        }
        return inst_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Ospfv3Items::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    return children;
}

void System::Ospfv3Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "if-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstItems()
    :
    inst_list(this, {"name"})
{

    yang_name = "inst-items"; yang_parent_name = "ospfv3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ospfv3Items::InstItems::~InstItems()
{
}

bool System::Ospfv3Items::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::has_operation() const
{
    for (std::size_t index=0; index<inst_list.len(); index++)
    {
        if(inst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospfv3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ospfv3Items::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Inst-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList>();
        c->parent = this;
        inst_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : inst_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Inst-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::InstList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    memalert{YType::enumeration, "memAlert"},
    deletedviacli{YType::boolean, "deletedViaCLI"}
        ,
    dom_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems>())
    , evtlogs_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::EvtLogsItems>())
{
    dom_items->parent = this;
    evtlogs_items->parent = this;

    yang_name = "Inst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ospfv3Items::InstItems::InstList::~InstList()
{
}

bool System::Ospfv3Items::InstItems::InstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| memalert.is_set
	|| deletedviacli.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(memalert.yfilter)
	|| ydk::is_set(deletedviacli.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospfv3-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ospfv3Items::InstItems::InstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Inst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (memalert.is_set || is_set(memalert.yfilter)) leaf_name_data.push_back(memalert.get_name_leafdata());
    if (deletedviacli.is_set || is_set(deletedviacli.yfilter)) leaf_name_data.push_back(deletedviacli.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "evtLogs-items")
    {
        if(evtlogs_items == nullptr)
        {
            evtlogs_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::EvtLogsItems>();
        }
        return evtlogs_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(evtlogs_items != nullptr)
    {
        children["evtLogs-items"] = evtlogs_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memAlert")
    {
        memalert = value;
        memalert.value_namespace = name_space;
        memalert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli = value;
        deletedviacli.value_namespace = name_space;
        deletedviacli.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "memAlert")
    {
        memalert.yfilter = yfilter;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "evtLogs-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "memAlert" || name == "deletedViaCLI")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::~DomItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    rtrid{YType::str, "rtrId"},
    ctrl{YType::str, "ctrl"},
    adminst{YType::enumeration, "adminSt"},
    dist{YType::uint8, "dist"},
    maxecmp{YType::uint8, "maxEcmp"},
    bwref{YType::uint32, "bwRef"},
    bwrefunit{YType::enumeration, "bwRefUnit"},
    defmetric{YType::uint32, "defMetric"},
    rfc1583compat{YType::boolean, "rfc1583Compat"},
    deletedviacli{YType::boolean, "deletedViaCLI"},
    adjchangeloglevel{YType::enumeration, "adjChangeLogLevel"},
    operst{YType::enumeration, "operSt"},
    operrtrid{YType::str, "operRtrId"},
    discardroute{YType::str, "discardRoute"},
    downbitignore{YType::boolean, "downbitIgnore"},
    capvrflite{YType::enumeration, "capVrfLite"}
        ,
    area_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems>())
    , db_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems>())
    , domaf_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems>())
    , spfcomp_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems>())
    , lsactrl_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems>())
    , domstats_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems>())
    , gr_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems>())
    , if_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems>())
    , maxmetriclsap_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems>())
    , trstats_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems>())
{
    area_items->parent = this;
    db_items->parent = this;
    domaf_items->parent = this;
    spfcomp_items->parent = this;
    lsactrl_items->parent = this;
    domstats_items->parent = this;
    gr_items->parent = this;
    if_items->parent = this;
    maxmetriclsap_items->parent = this;
    trstats_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::~DomList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rtrid.is_set
	|| ctrl.is_set
	|| adminst.is_set
	|| dist.is_set
	|| maxecmp.is_set
	|| bwref.is_set
	|| bwrefunit.is_set
	|| defmetric.is_set
	|| rfc1583compat.is_set
	|| deletedviacli.is_set
	|| adjchangeloglevel.is_set
	|| operst.is_set
	|| operrtrid.is_set
	|| discardroute.is_set
	|| downbitignore.is_set
	|| capvrflite.is_set
	|| (area_items !=  nullptr && area_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (domaf_items !=  nullptr && domaf_items->has_data())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_data())
	|| (lsactrl_items !=  nullptr && lsactrl_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (maxmetriclsap_items !=  nullptr && maxmetriclsap_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rtrid.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| ydk::is_set(maxecmp.yfilter)
	|| ydk::is_set(bwref.yfilter)
	|| ydk::is_set(bwrefunit.yfilter)
	|| ydk::is_set(defmetric.yfilter)
	|| ydk::is_set(rfc1583compat.yfilter)
	|| ydk::is_set(deletedviacli.yfilter)
	|| ydk::is_set(adjchangeloglevel.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operrtrid.yfilter)
	|| ydk::is_set(discardroute.yfilter)
	|| ydk::is_set(downbitignore.yfilter)
	|| ydk::is_set(capvrflite.yfilter)
	|| (area_items !=  nullptr && area_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (domaf_items !=  nullptr && domaf_items->has_operation())
	|| (spfcomp_items !=  nullptr && spfcomp_items->has_operation())
	|| (lsactrl_items !=  nullptr && lsactrl_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (maxmetriclsap_items !=  nullptr && maxmetriclsap_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rtrid.is_set || is_set(rtrid.yfilter)) leaf_name_data.push_back(rtrid.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());
    if (maxecmp.is_set || is_set(maxecmp.yfilter)) leaf_name_data.push_back(maxecmp.get_name_leafdata());
    if (bwref.is_set || is_set(bwref.yfilter)) leaf_name_data.push_back(bwref.get_name_leafdata());
    if (bwrefunit.is_set || is_set(bwrefunit.yfilter)) leaf_name_data.push_back(bwrefunit.get_name_leafdata());
    if (defmetric.is_set || is_set(defmetric.yfilter)) leaf_name_data.push_back(defmetric.get_name_leafdata());
    if (rfc1583compat.is_set || is_set(rfc1583compat.yfilter)) leaf_name_data.push_back(rfc1583compat.get_name_leafdata());
    if (deletedviacli.is_set || is_set(deletedviacli.yfilter)) leaf_name_data.push_back(deletedviacli.get_name_leafdata());
    if (adjchangeloglevel.is_set || is_set(adjchangeloglevel.yfilter)) leaf_name_data.push_back(adjchangeloglevel.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operrtrid.is_set || is_set(operrtrid.yfilter)) leaf_name_data.push_back(operrtrid.get_name_leafdata());
    if (discardroute.is_set || is_set(discardroute.yfilter)) leaf_name_data.push_back(discardroute.get_name_leafdata());
    if (downbitignore.is_set || is_set(downbitignore.yfilter)) leaf_name_data.push_back(downbitignore.get_name_leafdata());
    if (capvrflite.is_set || is_set(capvrflite.yfilter)) leaf_name_data.push_back(capvrflite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-items")
    {
        if(area_items == nullptr)
        {
            area_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems>();
        }
        return area_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domaf-items")
    {
        if(domaf_items == nullptr)
        {
            domaf_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems>();
        }
        return domaf_items;
    }

    if(child_yang_name == "spfcomp-items")
    {
        if(spfcomp_items == nullptr)
        {
            spfcomp_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems>();
        }
        return spfcomp_items;
    }

    if(child_yang_name == "lsactrl-items")
    {
        if(lsactrl_items == nullptr)
        {
            lsactrl_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems>();
        }
        return lsactrl_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems>();
        }
        return gr_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "maxmetriclsap-items")
    {
        if(maxmetriclsap_items == nullptr)
        {
            maxmetriclsap_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems>();
        }
        return maxmetriclsap_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems>();
        }
        return trstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_items != nullptr)
    {
        children["area-items"] = area_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(domaf_items != nullptr)
    {
        children["domaf-items"] = domaf_items;
    }

    if(spfcomp_items != nullptr)
    {
        children["spfcomp-items"] = spfcomp_items;
    }

    if(lsactrl_items != nullptr)
    {
        children["lsactrl-items"] = lsactrl_items;
    }

    if(domstats_items != nullptr)
    {
        children["domstats-items"] = domstats_items;
    }

    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(maxmetriclsap_items != nullptr)
    {
        children["maxmetriclsap-items"] = maxmetriclsap_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtrId")
    {
        rtrid = value;
        rtrid.value_namespace = name_space;
        rtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp = value;
        maxecmp.value_namespace = name_space;
        maxecmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwRef")
    {
        bwref = value;
        bwref.value_namespace = name_space;
        bwref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit = value;
        bwrefunit.value_namespace = name_space;
        bwrefunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "defMetric")
    {
        defmetric = value;
        defmetric.value_namespace = name_space;
        defmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc1583Compat")
    {
        rfc1583compat = value;
        rfc1583compat.value_namespace = name_space;
        rfc1583compat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli = value;
        deletedviacli.value_namespace = name_space;
        deletedviacli.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjChangeLogLevel")
    {
        adjchangeloglevel = value;
        adjchangeloglevel.value_namespace = name_space;
        adjchangeloglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRtrId")
    {
        operrtrid = value;
        operrtrid.value_namespace = name_space;
        operrtrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discardRoute")
    {
        discardroute = value;
        discardroute.value_namespace = name_space;
        discardroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downbitIgnore")
    {
        downbitignore = value;
        downbitignore.value_namespace = name_space;
        downbitignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capVrfLite")
    {
        capvrflite = value;
        capvrflite.value_namespace = name_space;
        capvrflite.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rtrId")
    {
        rtrid.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
    if(value_path == "maxEcmp")
    {
        maxecmp.yfilter = yfilter;
    }
    if(value_path == "bwRef")
    {
        bwref.yfilter = yfilter;
    }
    if(value_path == "bwRefUnit")
    {
        bwrefunit.yfilter = yfilter;
    }
    if(value_path == "defMetric")
    {
        defmetric.yfilter = yfilter;
    }
    if(value_path == "rfc1583Compat")
    {
        rfc1583compat.yfilter = yfilter;
    }
    if(value_path == "deletedViaCLI")
    {
        deletedviacli.yfilter = yfilter;
    }
    if(value_path == "adjChangeLogLevel")
    {
        adjchangeloglevel.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operRtrId")
    {
        operrtrid.yfilter = yfilter;
    }
    if(value_path == "discardRoute")
    {
        discardroute.yfilter = yfilter;
    }
    if(value_path == "downbitIgnore")
    {
        downbitignore.yfilter = yfilter;
    }
    if(value_path == "capVrfLite")
    {
        capvrflite.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-items" || name == "db-items" || name == "domaf-items" || name == "spfcomp-items" || name == "lsactrl-items" || name == "domstats-items" || name == "gr-items" || name == "if-items" || name == "maxmetriclsap-items" || name == "trstats-items" || name == "name" || name == "rtrId" || name == "ctrl" || name == "adminSt" || name == "dist" || name == "maxEcmp" || name == "bwRef" || name == "bwRefUnit" || name == "defMetric" || name == "rfc1583Compat" || name == "deletedViaCLI" || name == "adjChangeLogLevel" || name == "operSt" || name == "operRtrId" || name == "discardRoute" || name == "downbitIgnore" || name == "capVrfLite")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaItems()
    :
    area_list(this, {"id"})
{

    yang_name = "area-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::~AreaItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area_list.len(); index++)
    {
        if(area_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::has_operation() const
{
    for (std::size_t index=0; index<area_list.len(); index++)
    {
        if(area_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Area-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList>();
        c->parent = this;
        area_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : area_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Area-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    ctrl{YType::str, "ctrl"},
    cost{YType::uint32, "cost"},
    nssatransrole{YType::enumeration, "nssaTransRole"},
    brcnt{YType::uint32, "brCnt"},
    asbrcnt{YType::uint32, "asbrCnt"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    nssatransst{YType::enumeration, "nssaTransSt"},
    nssatransstabintvl{YType::uint32, "nssaTransStabIntvl"},
    authtype{YType::enumeration, "authType"}
        ,
    areaaf_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems>())
    , areastats_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems>())
    , db_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems>())
{
    areaaf_items->parent = this;
    areastats_items->parent = this;
    db_items->parent = this;

    yang_name = "Area-list"; yang_parent_name = "area-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::~AreaList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| type.is_set
	|| ctrl.is_set
	|| cost.is_set
	|| nssatransrole.is_set
	|| brcnt.is_set
	|| asbrcnt.is_set
	|| lsacksumsum.is_set
	|| nssatransst.is_set
	|| nssatransstabintvl.is_set
	|| authtype.is_set
	|| (areaaf_items !=  nullptr && areaaf_items->has_data())
	|| (areastats_items !=  nullptr && areastats_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(nssatransrole.yfilter)
	|| ydk::is_set(brcnt.yfilter)
	|| ydk::is_set(asbrcnt.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(nssatransst.yfilter)
	|| ydk::is_set(nssatransstabintvl.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| (areaaf_items !=  nullptr && areaaf_items->has_operation())
	|| (areastats_items !=  nullptr && areastats_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Area-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (nssatransrole.is_set || is_set(nssatransrole.yfilter)) leaf_name_data.push_back(nssatransrole.get_name_leafdata());
    if (brcnt.is_set || is_set(brcnt.yfilter)) leaf_name_data.push_back(brcnt.get_name_leafdata());
    if (asbrcnt.is_set || is_set(asbrcnt.yfilter)) leaf_name_data.push_back(asbrcnt.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (nssatransst.is_set || is_set(nssatransst.yfilter)) leaf_name_data.push_back(nssatransst.get_name_leafdata());
    if (nssatransstabintvl.is_set || is_set(nssatransstabintvl.yfilter)) leaf_name_data.push_back(nssatransstabintvl.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areaaf-items")
    {
        if(areaaf_items == nullptr)
        {
            areaaf_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems>();
        }
        return areaaf_items;
    }

    if(child_yang_name == "areastats-items")
    {
        if(areastats_items == nullptr)
        {
            areastats_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems>();
        }
        return areastats_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(areaaf_items != nullptr)
    {
        children["areaaf-items"] = areaaf_items;
    }

    if(areastats_items != nullptr)
    {
        children["areastats-items"] = areastats_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransRole")
    {
        nssatransrole = value;
        nssatransrole.value_namespace = name_space;
        nssatransrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brCnt")
    {
        brcnt = value;
        brcnt.value_namespace = name_space;
        brcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asbrCnt")
    {
        asbrcnt = value;
        asbrcnt.value_namespace = name_space;
        asbrcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransSt")
    {
        nssatransst = value;
        nssatransst.value_namespace = name_space;
        nssatransst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaTransStabIntvl")
    {
        nssatransstabintvl = value;
        nssatransstabintvl.value_namespace = name_space;
        nssatransstabintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "nssaTransRole")
    {
        nssatransrole.yfilter = yfilter;
    }
    if(value_path == "brCnt")
    {
        brcnt.yfilter = yfilter;
    }
    if(value_path == "asbrCnt")
    {
        asbrcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "nssaTransSt")
    {
        nssatransst.yfilter = yfilter;
    }
    if(value_path == "nssaTransStabIntvl")
    {
        nssatransstabintvl.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areaaf-items" || name == "areastats-items" || name == "db-items" || name == "id" || name == "name" || name == "type" || name == "ctrl" || name == "cost" || name == "nssaTransRole" || name == "brCnt" || name == "asbrCnt" || name == "lsaCksumSum" || name == "nssaTransSt" || name == "nssaTransStabIntvl" || name == "authType")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaafItems()
    :
    areaaf_list(this, {"type"})
{

    yang_name = "areaaf-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::~AreaafItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<areaaf_list.len(); index++)
    {
        if(areaaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::has_operation() const
{
    for (std::size_t index=0; index<areaaf_list.len(); index++)
    {
        if(areaaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areaaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AreaAf-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList>();
        c->parent = this;
        areaaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : areaaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AreaAf-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::AreaAfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    iartsum_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems>())
{
    iartsum_items->parent = this;

    yang_name = "AreaAf-list"; yang_parent_name = "areaaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::~AreaAfList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (iartsum_items !=  nullptr && iartsum_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (iartsum_items !=  nullptr && iartsum_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AreaAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iartsum-items")
    {
        if(iartsum_items == nullptr)
        {
            iartsum_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems>();
        }
        return iartsum_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iartsum_items != nullptr)
    {
        children["iartsum-items"] = iartsum_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iartsum-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::IartsumItems()
    :
    interareartsum_list(this, {"addr"})
{

    yang_name = "iartsum-items"; yang_parent_name = "AreaAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::~IartsumItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interareartsum_list.len(); index++)
    {
        if(interareartsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::has_operation() const
{
    for (std::size_t index=0; index<interareartsum_list.len(); index++)
    {
        if(interareartsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iartsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterAreaRtSum-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList>();
        c->parent = this;
        interareartsum_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interareartsum_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterAreaRtSum-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::InterAreaRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    cost{YType::uint32, "cost"}
{

    yang_name = "InterAreaRtSum-list"; yang_parent_name = "iartsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::~InterAreaRtSumList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| cost.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterAreaRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt = value;
        comprtcnt.value_namespace = name_space;
        comprtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreaafItems::AreaAfList::IartsumItems::InterAreaRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "cost")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::AreastatsItems()
    :
    areacreatedts{YType::str, "areaCreatedTs"},
    spfruns{YType::uint32, "spfRuns"},
    lsacnt{YType::uint32, "lsaCnt"},
    lastspfduration{YType::uint32, "lastSpfDuration"},
    ifcnt{YType::uint32, "ifCnt"},
    activeifcnt{YType::uint32, "activeIfCnt"},
    passiveifcnt{YType::uint32, "passiveIfCnt"},
    lpbkifcnt{YType::uint32, "lpbkIfCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "areastats-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::~AreastatsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_data() const
{
    if (is_presence_container) return true;
    return areacreatedts.is_set
	|| spfruns.is_set
	|| lsacnt.is_set
	|| lastspfduration.is_set
	|| ifcnt.is_set
	|| activeifcnt.is_set
	|| passiveifcnt.is_set
	|| lpbkifcnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(areacreatedts.yfilter)
	|| ydk::is_set(spfruns.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(lastspfduration.yfilter)
	|| ydk::is_set(ifcnt.yfilter)
	|| ydk::is_set(activeifcnt.yfilter)
	|| ydk::is_set(passiveifcnt.yfilter)
	|| ydk::is_set(lpbkifcnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areastats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (areacreatedts.is_set || is_set(areacreatedts.yfilter)) leaf_name_data.push_back(areacreatedts.get_name_leafdata());
    if (spfruns.is_set || is_set(spfruns.yfilter)) leaf_name_data.push_back(spfruns.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (lastspfduration.is_set || is_set(lastspfduration.yfilter)) leaf_name_data.push_back(lastspfduration.get_name_leafdata());
    if (ifcnt.is_set || is_set(ifcnt.yfilter)) leaf_name_data.push_back(ifcnt.get_name_leafdata());
    if (activeifcnt.is_set || is_set(activeifcnt.yfilter)) leaf_name_data.push_back(activeifcnt.get_name_leafdata());
    if (passiveifcnt.is_set || is_set(passiveifcnt.yfilter)) leaf_name_data.push_back(passiveifcnt.get_name_leafdata());
    if (lpbkifcnt.is_set || is_set(lpbkifcnt.yfilter)) leaf_name_data.push_back(lpbkifcnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "areaCreatedTs")
    {
        areacreatedts = value;
        areacreatedts.value_namespace = name_space;
        areacreatedts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spfRuns")
    {
        spfruns = value;
        spfruns.value_namespace = name_space;
        spfruns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastSpfDuration")
    {
        lastspfduration = value;
        lastspfduration.value_namespace = name_space;
        lastspfduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifCnt")
    {
        ifcnt = value;
        ifcnt.value_namespace = name_space;
        ifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeIfCnt")
    {
        activeifcnt = value;
        activeifcnt.value_namespace = name_space;
        activeifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIfCnt")
    {
        passiveifcnt = value;
        passiveifcnt.value_namespace = name_space;
        passiveifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpbkIfCnt")
    {
        lpbkifcnt = value;
        lpbkifcnt.value_namespace = name_space;
        lpbkifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCnt")
    {
        adjcnt = value;
        adjcnt.value_namespace = name_space;
        adjcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt = value;
        grhelperpeercnt.value_namespace = name_space;
        grhelperpeercnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "areaCreatedTs")
    {
        areacreatedts.yfilter = yfilter;
    }
    if(value_path == "spfRuns")
    {
        spfruns.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "lastSpfDuration")
    {
        lastspfduration.yfilter = yfilter;
    }
    if(value_path == "ifCnt")
    {
        ifcnt.yfilter = yfilter;
    }
    if(value_path == "activeIfCnt")
    {
        activeifcnt.yfilter = yfilter;
    }
    if(value_path == "passiveIfCnt")
    {
        passiveifcnt.yfilter = yfilter;
    }
    if(value_path == "lpbkIfCnt")
    {
        lpbkifcnt.yfilter = yfilter;
    }
    if(value_path == "adjCnt")
    {
        adjcnt.yfilter = yfilter;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::AreastatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areaCreatedTs" || name == "spfRuns" || name == "lsaCnt" || name == "lastSpfDuration" || name == "ifCnt" || name == "activeIfCnt" || name == "passiveIfCnt" || name == "lpbkIfCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Area-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::~DbItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::~DbList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_items != nullptr)
    {
        children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList>();
        c->parent = this;
        lsarec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsarec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    name{YType::str, "name"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
{

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| name.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "advRtr" || name == "name" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"}
        ,
    ucnh_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ucnh_items != nullptr)
    {
        children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        children["mcnh-items"] = mcnh_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ucnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::AreaItems::AreaList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}


}
}

