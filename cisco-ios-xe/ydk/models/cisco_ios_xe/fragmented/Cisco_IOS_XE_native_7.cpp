
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_8.hpp"
#include "Cisco_IOS_XE_native_12.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast>())
{
    action->parent = this;
    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice>())
{
    access->parent = this;
    block->parent = this;
    mode->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::SWITCHINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::TPINTERFACETEMPLATE()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip>())
	,service_policy(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl>())
	,switchport(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport>())
{
    ip->parent = this;
    service_policy->parent = this;
    storm_control->parent = this;
    switchport->parent = this;

    yang_name = "TP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::~TPINTERFACETEMPLATE()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TP_INTERFACE_TEMPLATE";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "input"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{

    yang_name = "output"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast>())
{
    bpduguard->parent = this;
    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpduguard != nullptr)
    {
        children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast>())
{
    action->parent = this;
    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice>())
{
    access->parent = this;
    block->parent = this;
    mode->parent = this;
    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::~Switchport()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(port_security != nullptr)
    {
        children["port-security"] = port_security;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::~Block()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;
    maximum->parent = this;
    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(violation != nullptr)
    {
        children["violation"] = violation;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{

    yang_name = "type"; yang_parent_name = "aging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Maximum()
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "maximum"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{

    yang_name = "vlan"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "violation"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restrict")
    {
        restrict = value;
        restrict.value_namespace = name_space;
        restrict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restrict")
    {
        restrict.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false;
}

Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIOSXESwitchTemplate::TPINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Cisp::Cisp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cisp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cisp::~Cisp()
{
}

bool Native::Cisp::has_data() const
{
    return enable.is_set;
}

bool Native::Cisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Cisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Clock_::Clock_()
    :
    calendar_valid(nullptr) // presence node
	,summer_time(std::make_shared<Native::Clock_::SummerTime>())
	,timezone(std::make_shared<Native::Clock_::Timezone>())
{
    summer_time->parent = this;
    timezone->parent = this;

    yang_name = "clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Clock_::~Clock_()
{
}

bool Native::Clock_::has_data() const
{
    return (calendar_valid !=  nullptr && calendar_valid->has_data())
	|| (summer_time !=  nullptr && summer_time->has_data())
	|| (timezone !=  nullptr && timezone->has_data());
}

bool Native::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| (calendar_valid !=  nullptr && calendar_valid->has_operation())
	|| (summer_time !=  nullptr && summer_time->has_operation())
	|| (timezone !=  nullptr && timezone->has_operation());
}

std::string Native::Clock_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "calendar-valid")
    {
        if(calendar_valid == nullptr)
        {
            calendar_valid = std::make_shared<Native::Clock_::CalendarValid>();
        }
        return calendar_valid;
    }

    if(child_yang_name == "summer-time")
    {
        if(summer_time == nullptr)
        {
            summer_time = std::make_shared<Native::Clock_::SummerTime>();
        }
        return summer_time;
    }

    if(child_yang_name == "timezone")
    {
        if(timezone == nullptr)
        {
            timezone = std::make_shared<Native::Clock_::Timezone>();
        }
        return timezone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(calendar_valid != nullptr)
    {
        children["calendar-valid"] = calendar_valid;
    }

    if(summer_time != nullptr)
    {
        children["summer-time"] = summer_time;
    }

    if(timezone != nullptr)
    {
        children["timezone"] = timezone;
    }

    return children;
}

void Native::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "calendar-valid" || name == "summer-time" || name == "timezone")
        return true;
    return false;
}

Native::Clock_::CalendarValid::CalendarValid()
{

    yang_name = "calendar-valid"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Clock_::CalendarValid::~CalendarValid()
{
}

bool Native::Clock_::CalendarValid::has_data() const
{
    return false;
}

bool Native::Clock_::CalendarValid::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Clock_::CalendarValid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock_::CalendarValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calendar-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock_::CalendarValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Clock_::CalendarValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock_::CalendarValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Clock_::CalendarValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Clock_::CalendarValid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Clock_::CalendarValid::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Clock_::SummerTime::SummerTime()
    :
    date{YType::empty, "date"},
    date_end_day{YType::uint8, "date-end-day"},
    date_end_month{YType::enumeration, "date-end-month"},
    date_end_time{YType::str, "date-end-time"},
    date_end_year{YType::uint32, "date-end-year"},
    offset{YType::uint16, "offset"},
    recurring{YType::empty, "recurring"},
    recurring_end{YType::str, "recurring-end"},
    recurring_end_day{YType::enumeration, "recurring-end-day"},
    recurring_end_month{YType::enumeration, "recurring-end-month"},
    recurring_end_time{YType::str, "recurring-end-time"},
    recurring_offset{YType::uint16, "recurring-offset"},
    recurring_start{YType::str, "recurring-start"},
    recurring_start_day{YType::enumeration, "recurring-start-day"},
    recurring_start_month{YType::enumeration, "recurring-start-month"},
    recurring_start_time{YType::str, "recurring-start-time"},
    start_day{YType::uint8, "start-day"},
    start_month{YType::enumeration, "start-month"},
    start_time{YType::str, "start-time"},
    start_year{YType::uint32, "start-year"},
    zone{YType::str, "zone"}
{

    yang_name = "summer-time"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Clock_::SummerTime::~SummerTime()
{
}

bool Native::Clock_::SummerTime::has_data() const
{
    return date.is_set
	|| date_end_day.is_set
	|| date_end_month.is_set
	|| date_end_time.is_set
	|| date_end_year.is_set
	|| offset.is_set
	|| recurring.is_set
	|| recurring_end.is_set
	|| recurring_end_day.is_set
	|| recurring_end_month.is_set
	|| recurring_end_time.is_set
	|| recurring_offset.is_set
	|| recurring_start.is_set
	|| recurring_start_day.is_set
	|| recurring_start_month.is_set
	|| recurring_start_time.is_set
	|| start_day.is_set
	|| start_month.is_set
	|| start_time.is_set
	|| start_year.is_set
	|| zone.is_set;
}

bool Native::Clock_::SummerTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(date_end_day.yfilter)
	|| ydk::is_set(date_end_month.yfilter)
	|| ydk::is_set(date_end_time.yfilter)
	|| ydk::is_set(date_end_year.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| ydk::is_set(recurring_end.yfilter)
	|| ydk::is_set(recurring_end_day.yfilter)
	|| ydk::is_set(recurring_end_month.yfilter)
	|| ydk::is_set(recurring_end_time.yfilter)
	|| ydk::is_set(recurring_offset.yfilter)
	|| ydk::is_set(recurring_start.yfilter)
	|| ydk::is_set(recurring_start_day.yfilter)
	|| ydk::is_set(recurring_start_month.yfilter)
	|| ydk::is_set(recurring_start_time.yfilter)
	|| ydk::is_set(start_day.yfilter)
	|| ydk::is_set(start_month.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(start_year.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Native::Clock_::SummerTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock_::SummerTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summer-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock_::SummerTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (date_end_day.is_set || is_set(date_end_day.yfilter)) leaf_name_data.push_back(date_end_day.get_name_leafdata());
    if (date_end_month.is_set || is_set(date_end_month.yfilter)) leaf_name_data.push_back(date_end_month.get_name_leafdata());
    if (date_end_time.is_set || is_set(date_end_time.yfilter)) leaf_name_data.push_back(date_end_time.get_name_leafdata());
    if (date_end_year.is_set || is_set(date_end_year.yfilter)) leaf_name_data.push_back(date_end_year.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());
    if (recurring_end.is_set || is_set(recurring_end.yfilter)) leaf_name_data.push_back(recurring_end.get_name_leafdata());
    if (recurring_end_day.is_set || is_set(recurring_end_day.yfilter)) leaf_name_data.push_back(recurring_end_day.get_name_leafdata());
    if (recurring_end_month.is_set || is_set(recurring_end_month.yfilter)) leaf_name_data.push_back(recurring_end_month.get_name_leafdata());
    if (recurring_end_time.is_set || is_set(recurring_end_time.yfilter)) leaf_name_data.push_back(recurring_end_time.get_name_leafdata());
    if (recurring_offset.is_set || is_set(recurring_offset.yfilter)) leaf_name_data.push_back(recurring_offset.get_name_leafdata());
    if (recurring_start.is_set || is_set(recurring_start.yfilter)) leaf_name_data.push_back(recurring_start.get_name_leafdata());
    if (recurring_start_day.is_set || is_set(recurring_start_day.yfilter)) leaf_name_data.push_back(recurring_start_day.get_name_leafdata());
    if (recurring_start_month.is_set || is_set(recurring_start_month.yfilter)) leaf_name_data.push_back(recurring_start_month.get_name_leafdata());
    if (recurring_start_time.is_set || is_set(recurring_start_time.yfilter)) leaf_name_data.push_back(recurring_start_time.get_name_leafdata());
    if (start_day.is_set || is_set(start_day.yfilter)) leaf_name_data.push_back(start_day.get_name_leafdata());
    if (start_month.is_set || is_set(start_month.yfilter)) leaf_name_data.push_back(start_month.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (start_year.is_set || is_set(start_year.yfilter)) leaf_name_data.push_back(start_year.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Clock_::SummerTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock_::SummerTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Clock_::SummerTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-day")
    {
        date_end_day = value;
        date_end_day.value_namespace = name_space;
        date_end_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-month")
    {
        date_end_month = value;
        date_end_month.value_namespace = name_space;
        date_end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-time")
    {
        date_end_time = value;
        date_end_time.value_namespace = name_space;
        date_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "date-end-year")
    {
        date_end_year = value;
        date_end_year.value_namespace = name_space;
        date_end_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end")
    {
        recurring_end = value;
        recurring_end.value_namespace = name_space;
        recurring_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end-day")
    {
        recurring_end_day = value;
        recurring_end_day.value_namespace = name_space;
        recurring_end_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end-month")
    {
        recurring_end_month = value;
        recurring_end_month.value_namespace = name_space;
        recurring_end_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-end-time")
    {
        recurring_end_time = value;
        recurring_end_time.value_namespace = name_space;
        recurring_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-offset")
    {
        recurring_offset = value;
        recurring_offset.value_namespace = name_space;
        recurring_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start")
    {
        recurring_start = value;
        recurring_start.value_namespace = name_space;
        recurring_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start-day")
    {
        recurring_start_day = value;
        recurring_start_day.value_namespace = name_space;
        recurring_start_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start-month")
    {
        recurring_start_month = value;
        recurring_start_month.value_namespace = name_space;
        recurring_start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring-start-time")
    {
        recurring_start_time = value;
        recurring_start_time.value_namespace = name_space;
        recurring_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-day")
    {
        start_day = value;
        start_day.value_namespace = name_space;
        start_day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-month")
    {
        start_month = value;
        start_month.value_namespace = name_space;
        start_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-year")
    {
        start_year = value;
        start_year.value_namespace = name_space;
        start_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Clock_::SummerTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "date-end-day")
    {
        date_end_day.yfilter = yfilter;
    }
    if(value_path == "date-end-month")
    {
        date_end_month.yfilter = yfilter;
    }
    if(value_path == "date-end-time")
    {
        date_end_time.yfilter = yfilter;
    }
    if(value_path == "date-end-year")
    {
        date_end_year.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
    if(value_path == "recurring-end")
    {
        recurring_end.yfilter = yfilter;
    }
    if(value_path == "recurring-end-day")
    {
        recurring_end_day.yfilter = yfilter;
    }
    if(value_path == "recurring-end-month")
    {
        recurring_end_month.yfilter = yfilter;
    }
    if(value_path == "recurring-end-time")
    {
        recurring_end_time.yfilter = yfilter;
    }
    if(value_path == "recurring-offset")
    {
        recurring_offset.yfilter = yfilter;
    }
    if(value_path == "recurring-start")
    {
        recurring_start.yfilter = yfilter;
    }
    if(value_path == "recurring-start-day")
    {
        recurring_start_day.yfilter = yfilter;
    }
    if(value_path == "recurring-start-month")
    {
        recurring_start_month.yfilter = yfilter;
    }
    if(value_path == "recurring-start-time")
    {
        recurring_start_time.yfilter = yfilter;
    }
    if(value_path == "start-day")
    {
        start_day.yfilter = yfilter;
    }
    if(value_path == "start-month")
    {
        start_month.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "start-year")
    {
        start_year.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Native::Clock_::SummerTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date" || name == "date-end-day" || name == "date-end-month" || name == "date-end-time" || name == "date-end-year" || name == "offset" || name == "recurring" || name == "recurring-end" || name == "recurring-end-day" || name == "recurring-end-month" || name == "recurring-end-time" || name == "recurring-offset" || name == "recurring-start" || name == "recurring-start-day" || name == "recurring-start-month" || name == "recurring-start-time" || name == "start-day" || name == "start-month" || name == "start-time" || name == "start-year" || name == "zone")
        return true;
    return false;
}

Native::Clock_::Timezone::Timezone()
    :
    hours{YType::int8, "hours"},
    minutes{YType::int8, "minutes"},
    offset{YType::enumeration, "offset"},
    zone{YType::str, "zone"}
{

    yang_name = "timezone"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Clock_::Timezone::~Timezone()
{
}

bool Native::Clock_::Timezone::has_data() const
{
    return hours.is_set
	|| minutes.is_set
	|| offset.is_set
	|| zone.is_set;
}

bool Native::Clock_::Timezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Native::Clock_::Timezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Clock_::Timezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Clock_::Timezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Clock_::Timezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Clock_::Timezone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Clock_::Timezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Clock_::Timezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Native::Clock_::Timezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hours" || name == "minutes" || name == "offset" || name == "zone")
        return true;
    return false;
}

Native::Coap::Coap()
    :
    http(std::make_shared<Native::Coap::Http>())
{
    http->parent = this;

    yang_name = "coap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Coap::~Coap()
{
}

bool Native::Coap::has_data() const
{
    return (http !=  nullptr && http->has_data());
}

bool Native::Coap::has_operation() const
{
    return is_set(yfilter)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Coap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-coap:coap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Coap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Coap::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http != nullptr)
    {
        children["http"] = http;
    }

    return children;
}

void Native::Coap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Coap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Coap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Coap::Http::Http()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "http"; yang_parent_name = "coap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Coap::Http::~Http()
{
}

bool Native::Coap::Http::has_data() const
{
    return enable.is_set;
}

bool Native::Coap::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Coap::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-coap:coap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Coap::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Coap::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Coap::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Coap::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::ControlPlane::ControlPlane()
    :
    service_policy(std::make_shared<Native::ControlPlane::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "control-plane"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ControlPlane::~ControlPlane()
{
}

bool Native::ControlPlane::has_data() const
{
    return (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::ControlPlane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::ControlPlane::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

Native::ControlPlane::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ControlPlane::ServicePolicy::~ServicePolicy()
{
}

bool Native::ControlPlane::ServicePolicy::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::ControlPlane::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::ControlPlane::ServicePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlane::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlane::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlane::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlane::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ControlPlane::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ControlPlane::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::ControlPlane::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlaneHost()
    :
    control_plane(std::make_shared<Native::ControlPlaneHost::ControlPlane>())
{
    control_plane->parent = this;

    yang_name = "control-plane-host"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ControlPlaneHost::~ControlPlaneHost()
{
}

bool Native::ControlPlaneHost::has_data() const
{
    return (control_plane !=  nullptr && control_plane->has_data());
}

bool Native::ControlPlaneHost::has_operation() const
{
    return is_set(yfilter)
	|| (control_plane !=  nullptr && control_plane->has_operation());
}

std::string Native::ControlPlaneHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlaneHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::ControlPlaneHost::ControlPlane>();
        }
        return control_plane;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlaneHost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control_plane != nullptr)
    {
        children["control-plane"] = control_plane;
    }

    return children;
}

void Native::ControlPlaneHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlaneHost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlaneHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-plane")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::ControlPlane()
    :
    host(nullptr) // presence node
{

    yang_name = "control-plane"; yang_parent_name = "control-plane-host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ControlPlaneHost::ControlPlane::~ControlPlane()
{
}

bool Native::ControlPlaneHost::ControlPlane::has_data() const
{
    return (host !=  nullptr && host->has_data());
}

bool Native::ControlPlaneHost::ControlPlane::has_operation() const
{
    return is_set(yfilter)
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::ControlPlaneHost::ControlPlane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane-host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::ControlPlane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-plane";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlaneHost::ControlPlane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::ControlPlaneHost::ControlPlane::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlaneHost::ControlPlane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::ControlPlaneHost::ControlPlane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlaneHost::ControlPlane::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlaneHost::ControlPlane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::Host::Host()
{

    yang_name = "host"; yang_parent_name = "control-plane"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ControlPlaneHost::ControlPlane::Host::~Host()
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::has_data() const
{
    for (std::size_t index=0; index<management_interface.size(); index++)
    {
        if(management_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ControlPlaneHost::ControlPlane::Host::has_operation() const
{
    for (std::size_t index=0; index<management_interface.size(); index++)
    {
        if(management_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ControlPlaneHost::ControlPlane::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane-host/control-plane/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::ControlPlane::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlaneHost::ControlPlane::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "management-interface")
    {
        for(auto const & c : management_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface>();
        c->parent = this;
        management_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlaneHost::ControlPlane::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : management_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ControlPlaneHost::ControlPlane::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ControlPlaneHost::ControlPlane::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "management-interface")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::ManagementInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    allow(std::make_shared<Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow>())
{
    allow->parent = this;

    yang_name = "management-interface"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::~ManagementInterface()
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::has_data() const
{
    return interface_name.is_set
	|| (allow !=  nullptr && allow->has_data());
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/control-plane-host/control-plane/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "management-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "interface-name")
        return true;
    return false;
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::Allow()
    :
    beep{YType::empty, "beep"},
    ftp{YType::empty, "ftp"},
    http{YType::empty, "http"},
    https{YType::empty, "https"},
    snmp{YType::empty, "snmp"},
    ssh{YType::empty, "ssh"},
    telnet{YType::empty, "telnet"},
    tftp{YType::empty, "tftp"},
    tl1{YType::empty, "tl1"}
{

    yang_name = "allow"; yang_parent_name = "management-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::~Allow()
{
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::has_data() const
{
    return beep.is_set
	|| ftp.is_set
	|| http.is_set
	|| https.is_set
	|| snmp.is_set
	|| ssh.is_set
	|| telnet.is_set
	|| tftp.is_set
	|| tl1.is_set;
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(beep.yfilter)
	|| ydk::is_set(ftp.yfilter)
	|| ydk::is_set(http.yfilter)
	|| ydk::is_set(https.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(ssh.yfilter)
	|| ydk::is_set(telnet.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| ydk::is_set(tl1.yfilter);
}

std::string Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (beep.is_set || is_set(beep.yfilter)) leaf_name_data.push_back(beep.get_name_leafdata());
    if (ftp.is_set || is_set(ftp.yfilter)) leaf_name_data.push_back(ftp.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());
    if (https.is_set || is_set(https.yfilter)) leaf_name_data.push_back(https.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (ssh.is_set || is_set(ssh.yfilter)) leaf_name_data.push_back(ssh.get_name_leafdata());
    if (telnet.is_set || is_set(telnet.yfilter)) leaf_name_data.push_back(telnet.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (tl1.is_set || is_set(tl1.yfilter)) leaf_name_data.push_back(tl1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "beep")
    {
        beep = value;
        beep.value_namespace = name_space;
        beep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ftp")
    {
        ftp = value;
        ftp.value_namespace = name_space;
        ftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "https")
    {
        https = value;
        https.value_namespace = name_space;
        https.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssh")
    {
        ssh = value;
        ssh.value_namespace = name_space;
        ssh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telnet")
    {
        telnet = value;
        telnet.value_namespace = name_space;
        telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tl1")
    {
        tl1 = value;
        tl1.value_namespace = name_space;
        tl1.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "beep")
    {
        beep.yfilter = yfilter;
    }
    if(value_path == "ftp")
    {
        ftp.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
    if(value_path == "https")
    {
        https.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "ssh")
    {
        ssh.yfilter = yfilter;
    }
    if(value_path == "telnet")
    {
        telnet.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
    if(value_path == "tl1")
    {
        tl1.yfilter = yfilter;
    }
}

bool Native::ControlPlaneHost::ControlPlane::Host::ManagementInterface::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "beep" || name == "ftp" || name == "http" || name == "https" || name == "snmp" || name == "ssh" || name == "telnet" || name == "tftp" || name == "tl1")
        return true;
    return false;
}

Native::Controller::Controller()
{

    yang_name = "controller"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::~Controller()
{
}

bool Native::Controller::has_data() const
{
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<controller_tx_ex_list.size(); index++)
    {
        if(controller_tx_ex_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet.size(); index++)
    {
        if(sonet[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.size(); index++)
    {
        if(sonet_acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wanphy.size(); index++)
    {
        if(wanphy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::has_operation() const
{
    for (std::size_t index=0; index<cellular.size(); index++)
    {
        if(cellular[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<controller_tx_ex_list.size(); index++)
    {
        if(controller_tx_ex_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet.size(); index++)
    {
        if(sonet[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sonet_acr.size(); index++)
    {
        if(sonet_acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wanphy.size(); index++)
    {
        if(wanphy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cellular")
    {
        for(auto const & c : cellular)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Cellular>();
        c->parent = this;
        cellular.push_back(c);
        return c;
    }

    if(child_yang_name == "controller-tx-ex-list")
    {
        for(auto const & c : controller_tx_ex_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::ControllerTxExList>();
        c->parent = this;
        controller_tx_ex_list.push_back(c);
        return c;
    }

    if(child_yang_name == "SONET")
    {
        for(auto const & c : sonet)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET>();
        c->parent = this;
        sonet.push_back(c);
        return c;
    }

    if(child_yang_name == "SONET-ACR")
    {
        for(auto const & c : sonet_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR>();
        c->parent = this;
        sonet_acr.push_back(c);
        return c;
    }

    if(child_yang_name == "wanphy")
    {
        for(auto const & c : wanphy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::Wanphy>();
        c->parent = this;
        wanphy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cellular)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : controller_tx_ex_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sonet)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sonet_acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wanphy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cellular" || name == "controller-tx-ex-list" || name == "SONET" || name == "SONET-ACR" || name == "wanphy")
        return true;
    return false;
}

Native::Controller::Cellular::Cellular()
    :
    id{YType::str, "id"}
    	,
    lte(std::make_shared<Native::Controller::Cellular::Lte>())
{
    lte->parent = this;

    yang_name = "Cellular"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::Cellular::~Cellular()
{
}

bool Native::Controller::Cellular::has_data() const
{
    return id.is_set
	|| (lte !=  nullptr && lte->has_data());
}

bool Native::Controller::Cellular::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (lte !=  nullptr && lte->has_operation());
}

std::string Native::Controller::Cellular::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Cellular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:Cellular" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lte")
    {
        if(lte == nullptr)
        {
            lte = std::make_shared<Native::Controller::Cellular::Lte>();
        }
        return lte;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lte != nullptr)
    {
        children["lte"] = lte;
    }

    return children;
}

void Native::Controller::Cellular::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lte" || name == "id")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Lte()
    :
    modem(std::make_shared<Native::Controller::Cellular::Lte::Modem>())
{
    modem->parent = this;

    yang_name = "lte"; yang_parent_name = "Cellular"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::~Lte()
{
}

bool Native::Controller::Cellular::Lte::has_data() const
{
    return (modem !=  nullptr && modem->has_data());
}

bool Native::Controller::Cellular::Lte::has_operation() const
{
    return is_set(yfilter)
	|| (modem !=  nullptr && modem->has_operation());
}

std::string Native::Controller::Cellular::Lte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Controller::Cellular::Lte::Modem>();
        }
        return modem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    return children;
}

void Native::Controller::Cellular::Lte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modem")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::Modem()
    :
    link_recovery(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>())
{
    link_recovery->parent = this;

    yang_name = "modem"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::Modem::~Modem()
{
}

bool Native::Controller::Cellular::Lte::Modem::has_data() const
{
    return (link_recovery !=  nullptr && link_recovery->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::has_operation() const
{
    return is_set(yfilter)
	|| (link_recovery !=  nullptr && link_recovery->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-recovery")
    {
        if(link_recovery == nullptr)
        {
            link_recovery = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery>();
        }
        return link_recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_recovery != nullptr)
    {
        children["link-recovery"] = link_recovery;
    }

    return children;
}

void Native::Controller::Cellular::Lte::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::Cellular::Lte::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::Cellular::Lte::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-recovery")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::LinkRecovery()
    :
    debounce_count{YType::uint32, "debounce-count"},
    monitor_timer{YType::uint32, "monitor-timer"},
    wait_timer{YType::uint32, "wait-timer"}
    	,
    rssi(std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>())
{
    rssi->parent = this;

    yang_name = "link-recovery"; yang_parent_name = "modem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::~LinkRecovery()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_data() const
{
    return debounce_count.is_set
	|| monitor_timer.is_set
	|| wait_timer.is_set
	|| (rssi !=  nullptr && rssi->has_data());
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(debounce_count.yfilter)
	|| ydk::is_set(monitor_timer.yfilter)
	|| ydk::is_set(wait_timer.yfilter)
	|| (rssi !=  nullptr && rssi->has_operation());
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (debounce_count.is_set || is_set(debounce_count.yfilter)) leaf_name_data.push_back(debounce_count.get_name_leafdata());
    if (monitor_timer.is_set || is_set(monitor_timer.yfilter)) leaf_name_data.push_back(monitor_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.yfilter)) leaf_name_data.push_back(wait_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssi")
    {
        if(rssi == nullptr)
        {
            rssi = std::make_shared<Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi>();
        }
        return rssi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rssi != nullptr)
    {
        children["rssi"] = rssi;
    }

    return children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "debounce-count")
    {
        debounce_count = value;
        debounce_count.value_namespace = name_space;
        debounce_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-timer")
    {
        monitor_timer = value;
        monitor_timer.value_namespace = name_space;
        monitor_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
        wait_timer.value_namespace = name_space;
        wait_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "debounce-count")
    {
        debounce_count.yfilter = yfilter;
    }
    if(value_path == "monitor-timer")
    {
        monitor_timer.yfilter = yfilter;
    }
    if(value_path == "wait-timer")
    {
        wait_timer.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssi" || name == "debounce-count" || name == "monitor-timer" || name == "wait-timer")
        return true;
    return false;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::Rssi()
    :
    onset_threshold{YType::int32, "onset-threshold"}
{

    yang_name = "rssi"; yang_parent_name = "link-recovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::~Rssi()
{
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_data() const
{
    return onset_threshold.is_set;
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onset_threshold.yfilter);
}

std::string Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onset_threshold.is_set || is_set(onset_threshold.yfilter)) leaf_name_data.push_back(onset_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold = value;
        onset_threshold.value_namespace = name_space;
        onset_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onset-threshold")
    {
        onset_threshold.yfilter = yfilter;
    }
}

bool Native::Controller::Cellular::Lte::Modem::LinkRecovery::Rssi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onset-threshold")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::ControllerTxExList()
    :
    name{YType::enumeration, "name"},
    number{YType::str, "number"},
    atm{YType::empty, "atm"},
    framing{YType::str, "framing"},
    linecode{YType::enumeration, "linecode"}
    	,
    cablelength(std::make_shared<Native::Controller::ControllerTxExList::Cablelength>())
	,clock_(std::make_shared<Native::Controller::ControllerTxExList::Clock_>())
{
    cablelength->parent = this;
    clock_->parent = this;

    yang_name = "controller-tx-ex-list"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::ControllerTxExList::~ControllerTxExList()
{
}

bool Native::Controller::ControllerTxExList::has_data() const
{
    for (std::size_t index=0; index<channel_group.size(); index++)
    {
        if(channel_group[index]->has_data())
            return true;
    }
    return name.is_set
	|| number.is_set
	|| atm.is_set
	|| framing.is_set
	|| linecode.is_set
	|| (cablelength !=  nullptr && cablelength->has_data())
	|| (clock_ !=  nullptr && clock_->has_data());
}

bool Native::Controller::ControllerTxExList::has_operation() const
{
    for (std::size_t index=0; index<channel_group.size(); index++)
    {
        if(channel_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(linecode.yfilter)
	|| (cablelength !=  nullptr && cablelength->has_operation())
	|| (clock_ !=  nullptr && clock_->has_operation());
}

std::string Native::Controller::ControllerTxExList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::ControllerTxExList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:controller-tx-ex-list" <<"[name='" <<name <<"']" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (linecode.is_set || is_set(linecode.yfilter)) leaf_name_data.push_back(linecode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cablelength")
    {
        if(cablelength == nullptr)
        {
            cablelength = std::make_shared<Native::Controller::ControllerTxExList::Cablelength>();
        }
        return cablelength;
    }

    if(child_yang_name == "channel-group")
    {
        for(auto const & c : channel_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::ControllerTxExList::ChannelGroup>();
        c->parent = this;
        channel_group.push_back(c);
        return c;
    }

    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::ControllerTxExList::Clock_>();
        }
        return clock_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cablelength != nullptr)
    {
        children["cablelength"] = cablelength;
    }

    for (auto const & c : channel_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    return children;
}

void Native::Controller::ControllerTxExList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linecode")
    {
        linecode = value;
        linecode.value_namespace = name_space;
        linecode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "linecode")
    {
        linecode.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cablelength" || name == "channel-group" || name == "clock" || name == "name" || name == "number" || name == "atm" || name == "framing" || name == "linecode")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Cablelength::Cablelength()
    :
    long_{YType::str, "long"},
    short_{YType::str, "short"}
{

    yang_name = "cablelength"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Cablelength::~Cablelength()
{
}

bool Native::Controller::ControllerTxExList::Cablelength::has_data() const
{
    return long_.is_set
	|| short_.is_set;
}

bool Native::Controller::ControllerTxExList::Cablelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::Controller::ControllerTxExList::Cablelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cablelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Cablelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Cablelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Cablelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::Cablelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Cablelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Cablelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::ChannelGroup::ChannelGroup()
    :
    number{YType::uint8, "number"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "channel-group"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::ChannelGroup::~ChannelGroup()
{
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_data() const
{
    for (auto const & leaf : timeslots.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return number.is_set;
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_operation() const
{
    for (auto const & leaf : timeslots.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::ControllerTxExList::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    auto timeslots_name_datas = timeslots.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timeslots_name_datas.begin(), timeslots_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots.append(value);
    }
}

void Native::Controller::ControllerTxExList::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock_::Clock_()
    :
    source(std::make_shared<Native::Controller::ControllerTxExList::Clock_::Source>())
{
    source->parent = this;

    yang_name = "clock"; yang_parent_name = "controller-tx-ex-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Clock_::~Clock_()
{
}

bool Native::Controller::ControllerTxExList::Clock_::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Controller::ControllerTxExList::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Controller::ControllerTxExList::Clock_::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Controller::ControllerTxExList::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::ControllerTxExList::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::ControllerTxExList::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock_::Source::Source()
    :
    internal{YType::empty, "internal"},
    loop_timed{YType::empty, "loop-timed"}
    	,
    line(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Clock_::Source::~Source()
{
}

bool Native::Controller::ControllerTxExList::Clock_::Source::has_data() const
{
    return internal.is_set
	|| loop_timed.is_set
	|| (line !=  nullptr && line->has_data());
}

bool Native::Controller::ControllerTxExList::Clock_::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(loop_timed.yfilter)
	|| (line !=  nullptr && line->has_operation());
}

std::string Native::Controller::ControllerTxExList::Clock_::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock_::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (loop_timed.is_set || is_set(loop_timed.yfilter)) leaf_name_data.push_back(loop_timed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock_::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<Native::Controller::ControllerTxExList::Clock_::Source::Line>();
        }
        return line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock_::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line != nullptr)
    {
        children["line"] = line;
    }

    return children;
}

void Native::Controller::ControllerTxExList::Clock_::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-timed")
    {
        loop_timed = value;
        loop_timed.value_namespace = name_space;
        loop_timed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Clock_::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "loop-timed")
    {
        loop_timed.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Clock_::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line" || name == "internal" || name == "loop-timed")
        return true;
    return false;
}

Native::Controller::ControllerTxExList::Clock_::Source::Line::Line()
    :
    line_mode{YType::enumeration, "line-mode"}
{

    yang_name = "line"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::ControllerTxExList::Clock_::Source::Line::~Line()
{
}

bool Native::Controller::ControllerTxExList::Clock_::Source::Line::has_data() const
{
    return line_mode.is_set;
}

bool Native::Controller::ControllerTxExList::Clock_::Source::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_mode.yfilter);
}

std::string Native::Controller::ControllerTxExList::Clock_::Source::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::ControllerTxExList::Clock_::Source::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_mode.is_set || is_set(line_mode.yfilter)) leaf_name_data.push_back(line_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::ControllerTxExList::Clock_::Source::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::ControllerTxExList::Clock_::Source::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::ControllerTxExList::Clock_::Source::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-mode")
    {
        line_mode = value;
        line_mode.value_namespace = name_space;
        line_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::ControllerTxExList::Clock_::Source::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-mode")
    {
        line_mode.yfilter = yfilter;
    }
}

bool Native::Controller::ControllerTxExList::Clock_::Source::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-mode")
        return true;
    return false;
}

Native::Controller::SONET::SONET()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
    	,
    aps(std::make_shared<Native::Controller::SONET::Aps>())
	,au_4_atm(std::make_shared<Native::Controller::SONET::Au4Atm>())
	,aug(std::make_shared<Native::Controller::SONET::Aug>())
	,clock_(std::make_shared<Native::Controller::SONET::Clock_>())
{
    aps->parent = this;
    au_4_atm->parent = this;
    aug->parent = this;
    clock_->parent = this;

    yang_name = "SONET"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::SONET::~SONET()
{
}

bool Native::Controller::SONET::has_data() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (clock_ !=  nullptr && clock_->has_data());
}

bool Native::Controller::SONET::has_operation() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (clock_ !=  nullptr && clock_->has_operation());
}

std::string Native::Controller::SONET::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::SONET::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SONET::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "au-3")
    {
        for(auto const & c : au_3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au3>();
        c->parent = this;
        au_3.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4")
    {
        for(auto const & c : au_4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4>();
        c->parent = this;
        au_4.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SONET::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SONET::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::SONET::Clock_>();
        }
        return clock_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    for (auto const & c : au_3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : au_4)
    {
        children[c->get_segment_path()] = c;
    }

    if(au_4_atm != nullptr)
    {
        children["au-4-atm"] = au_4_atm;
    }

    if(aug != nullptr)
    {
        children["aug"] = aug;
    }

    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    return children;
}

void Native::Controller::SONET::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "au-3" || name == "au-4" || name == "au-4-atm" || name == "aug" || name == "clock" || name == "name" || name == "framing" || name == "shutdown")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Aps()
    :
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"},
    working{YType::int8, "working"}
    	,
    group(std::make_shared<Native::Controller::SONET::Aps::Group>())
	,interchassis(std::make_shared<Native::Controller::SONET::Aps::Interchassis>())
	,protect(std::make_shared<Native::Controller::SONET::Aps::Protect>())
{
    group->parent = this;
    interchassis->parent = this;
    protect->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::~Aps()
{
}

bool Native::Controller::SONET::Aps::has_data() const
{
    return hspw_icrm_grp.is_set
	|| working.is_set
	|| (group !=  nullptr && group->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data())
	|| (protect !=  nullptr && protect->has_data());
}

bool Native::Controller::SONET::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hspw_icrm_grp.yfilter)
	|| ydk::is_set(working.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation())
	|| (protect !=  nullptr && protect->has_operation());
}

std::string Native::Controller::SONET::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.yfilter)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());
    if (working.is_set || is_set(working.yfilter)) leaf_name_data.push_back(working.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SONET::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SONET::Aps::Interchassis>();
        }
        return interchassis;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SONET::Aps::Protect>();
        }
        return protect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    return children;
}

void Native::Controller::SONET::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
        hspw_icrm_grp.value_namespace = name_space;
        hspw_icrm_grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working")
    {
        working = value;
        working.value_namespace = name_space;
        working.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp.yfilter = yfilter;
    }
    if(value_path == "working")
    {
        working.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "interchassis" || name == "protect" || name == "hspw-icrm-grp" || name == "working")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Group::Group()
    :
    acr{YType::int8, "acr"},
    group_number{YType::uint8, "group-number"}
{

    yang_name = "group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::Group::~Group()
{
}

bool Native::Controller::SONET::Aps::Group::has_data() const
{
    return acr.is_set
	|| group_number.is_set;
}

bool Native::Controller::SONET::Aps::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter)
	|| ydk::is_set(group_number.yfilter);
}

std::string Native::Controller::SONET::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aps::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr" || name == "group-number")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{

    yang_name = "interchassis"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SONET::Aps::Interchassis::has_data() const
{
    return group.is_set;
}

bool Native::Controller::SONET::Aps::Interchassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Controller::SONET::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aps::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Controller::SONET::Aps::Protect::Protect()
    :
    ip_addr{YType::str, "ip-addr"},
    number{YType::int8, "number"}
{

    yang_name = "protect"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aps::Protect::~Protect()
{
}

bool Native::Controller::SONET::Aps::Protect::has_data() const
{
    return ip_addr.is_set
	|| number.is_set;
}

bool Native::Controller::SONET::Aps::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Controller::SONET::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aps::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aps::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aps::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aps::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "number")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Au3()
    :
    number{YType::int8, "number"}
    	,
    mode(std::make_shared<Native::Controller::SONET::Au3::Mode>())
	,overhead(std::make_shared<Native::Controller::SONET::Au3::Overhead>())
{
    mode->parent = this;
    overhead->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au3::~Au3()
{
}

bool Native::Controller::SONET::Au3::has_data() const
{
    return number.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (overhead !=  nullptr && overhead->has_data());
}

bool Native::Controller::SONET::Au3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (overhead !=  nullptr && overhead->has_operation());
}

std::string Native::Controller::SONET::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SONET::Au3::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SONET::Au3::Overhead>();
        }
        return overhead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(overhead != nullptr)
    {
        children["overhead"] = overhead;
    }

    return children;
}

void Native::Controller::SONET::Au3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "overhead" || name == "number")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "mode"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au3::Mode::~Mode()
{
}

bool Native::Controller::SONET::Au3::Mode::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONET::Au3::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONET::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au3::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONET::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{

    yang_name = "overhead"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SONET::Au3::Overhead::has_data() const
{
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SONET::Au3::Overhead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Native::Controller::SONET::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au3::Overhead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.yfilter)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au3::Overhead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte")
    {
        byte = value;
        byte.value_namespace = name_space;
        byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au3::Overhead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte")
    {
        byte.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au3::Overhead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte" || name == "length")
        return true;
    return false;
}

Native::Controller::SONET::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    cem_group{YType::int32, "cem-group"},
    framing{YType::enumeration, "framing"},
    mode{YType::enumeration, "mode"},
    unframed{YType::empty, "unframed"}
    	,
    cem_group_atm(std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm>())
	,cem_group_timeslots(std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots>())
	,cem_group_unframed(std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed>())
	,channel_group_timeslots(std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots>())
	,framing_unframed(std::make_shared<Native::Controller::SONET::Au4::FramingUnframed>())
	,ima_group(std::make_shared<Native::Controller::SONET::Au4::ImaGroup>())
{
    cem_group_atm->parent = this;
    cem_group_timeslots->parent = this;
    cem_group_unframed->parent = this;
    channel_group_timeslots->parent = this;
    framing_unframed->parent = this;
    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::~Au4()
{
}

bool Native::Controller::SONET::Au4::has_data() const
{
    return number.is_set
	|| tug_3.is_set
	|| cem_group.is_set
	|| framing.is_set
	|| mode.is_set
	|| unframed.is_set
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SONET::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(tug_3.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(unframed.yfilter)
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SONET::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4" <<"[number='" <<number <<"']" <<"[tug-3='" <<tug_3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.yfilter)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SONET::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SONET::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cem_group_atm != nullptr)
    {
        children["cem-group-atm"] = cem_group_atm;
    }

    if(cem_group_timeslots != nullptr)
    {
        children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        children["cem-group-unframed"] = cem_group_unframed;
    }

    if(channel_group_timeslots != nullptr)
    {
        children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(framing_unframed != nullptr)
    {
        children["framing-unframed"] = framing_unframed;
    }

    if(ima_group != nullptr)
    {
        children["ima-group"] = ima_group;
    }

    return children;
}

void Native::Controller::SONET::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
        tug_3.value_namespace = name_space;
        tug_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "tug-3")
    {
        tug_3.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cem-group-atm" || name == "cem-group-timeslots" || name == "cem-group-unframed" || name == "channel-group-timeslots" || name == "framing-unframed" || name == "ima-group" || name == "number" || name == "tug-3" || name == "cem-group" || name == "framing" || name == "mode" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupAtm::CemGroupAtm()
{

    yang_name = "cem-group-atm"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupAtm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::CemGroupAtm::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::CemGroupAtm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupAtm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupAtm::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupAtm::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::CemGroupTimeslots()
{

    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupUnframed::CemGroupUnframed()
{

    yang_name = "cem-group-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::CemGroupUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::CemGroupUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::CemGroupUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter);
}

std::string Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::CemGroupUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
{

    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(channel_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[channel-group='" <<channel_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::ChannelGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "channel-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONET::Au4::FramingUnframed::FramingUnframed()
{

    yang_name = "framing-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::FramingUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::FramingUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::FramingUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::FramingUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{

    yang_name = "tug-2"; yang_parent_name = "framing-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(framing.yfilter);
}

std::string Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::FramingUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::FramingUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ImaGroup::ImaGroup()
{

    yang_name = "ima-group"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SONET::Au4::ImaGroup::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONET::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONET::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ImaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONET::Au4::ImaGroup::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONET::Au4::ImaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4::ImaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4::ImaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONET::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{

    yang_name = "tug-2"; yang_parent_name = "ima-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(ima_group.yfilter);
}

std::string Native::Controller::SONET::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[ima-group='" <<ima_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4::ImaGroup::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.yfilter)) leaf_name_data.push_back(ima_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
        ima_group.value_namespace = name_space;
        ima_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4::ImaGroup::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "ima-group")
    {
        ima_group.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4::ImaGroup::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "ima-group")
        return true;
    return false;
}

Native::Controller::SONET::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SONET::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SONET::Au4Atm::has_data() const
{
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SONET::Au4Atm::has_operation() const
{
    return is_set(yfilter)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SONET::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SONET::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(au_4 != nullptr)
    {
        children["au-4"] = au_4;
    }

    return children;
}

void Native::Controller::SONET::Au4Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONET::Au4Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONET::Au4Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "au-4")
        return true;
    return false;
}

Native::Controller::SONET::Au4Atm::Au4::Au4()
    :
    atm{YType::empty, "atm"},
    number{YType::int8, "number"}
{

    yang_name = "au-4"; yang_parent_name = "au-4-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SONET::Au4Atm::Au4::has_data() const
{
    return atm.is_set
	|| number.is_set;
}

bool Native::Controller::SONET::Au4Atm::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Controller::SONET::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Au4Atm::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Au4Atm::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Au4Atm::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Au4Atm::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "number")
        return true;
    return false;
}

Native::Controller::SONET::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "aug"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Aug::~Aug()
{
}

bool Native::Controller::SONET::Aug::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONET::Aug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONET::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Aug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Aug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Aug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Aug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONET::Clock_::Clock_()
    :
    source{YType::enumeration, "source"}
{

    yang_name = "clock"; yang_parent_name = "SONET"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONET::Clock_::~Clock_()
{
}

bool Native::Controller::SONET::Clock_::has_data() const
{
    return source.is_set;
}

bool Native::Controller::SONET::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Controller::SONET::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONET::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONET::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONET::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONET::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONET::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Controller::SONET::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::SONETACR::SONETACR()
    :
    name{YType::str, "name"},
    framing{YType::enumeration, "framing"},
    shutdown{YType::empty, "shutdown"}
    	,
    aps(std::make_shared<Native::Controller::SONETACR::Aps>())
	,au_4_atm(std::make_shared<Native::Controller::SONETACR::Au4Atm>())
	,aug(std::make_shared<Native::Controller::SONETACR::Aug>())
	,clock_(std::make_shared<Native::Controller::SONETACR::Clock_>())
{
    aps->parent = this;
    au_4_atm->parent = this;
    aug->parent = this;
    clock_->parent = this;

    yang_name = "SONET-ACR"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::SONETACR::~SONETACR()
{
}

bool Native::Controller::SONETACR::has_data() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_data())
            return true;
    }
    return name.is_set
	|| framing.is_set
	|| shutdown.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (au_4_atm !=  nullptr && au_4_atm->has_data())
	|| (aug !=  nullptr && aug->has_data())
	|| (clock_ !=  nullptr && clock_->has_data());
}

bool Native::Controller::SONETACR::has_operation() const
{
    for (std::size_t index=0; index<au_3.size(); index++)
    {
        if(au_3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<au_4.size(); index++)
    {
        if(au_4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (aps !=  nullptr && aps->has_operation())
	|| (au_4_atm !=  nullptr && au_4_atm->has_operation())
	|| (aug !=  nullptr && aug->has_operation())
	|| (clock_ !=  nullptr && clock_->has_operation());
}

std::string Native::Controller::SONETACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::SONETACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:SONET-ACR" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<Native::Controller::SONETACR::Aps>();
        }
        return aps;
    }

    if(child_yang_name == "au-3")
    {
        for(auto const & c : au_3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au3>();
        c->parent = this;
        au_3.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4")
    {
        for(auto const & c : au_4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4>();
        c->parent = this;
        au_4.push_back(c);
        return c;
    }

    if(child_yang_name == "au-4-atm")
    {
        if(au_4_atm == nullptr)
        {
            au_4_atm = std::make_shared<Native::Controller::SONETACR::Au4Atm>();
        }
        return au_4_atm;
    }

    if(child_yang_name == "aug")
    {
        if(aug == nullptr)
        {
            aug = std::make_shared<Native::Controller::SONETACR::Aug>();
        }
        return aug;
    }

    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Controller::SONETACR::Clock_>();
        }
        return clock_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    for (auto const & c : au_3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : au_4)
    {
        children[c->get_segment_path()] = c;
    }

    if(au_4_atm != nullptr)
    {
        children["au-4-atm"] = au_4_atm;
    }

    if(aug != nullptr)
    {
        children["aug"] = aug;
    }

    if(clock_ != nullptr)
    {
        children["clock"] = clock_;
    }

    return children;
}

void Native::Controller::SONETACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps" || name == "au-3" || name == "au-4" || name == "au-4-atm" || name == "aug" || name == "clock" || name == "name" || name == "framing" || name == "shutdown")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Aps()
    :
    hspw_icrm_grp{YType::uint8, "hspw-icrm-grp"},
    working{YType::int8, "working"}
    	,
    group(std::make_shared<Native::Controller::SONETACR::Aps::Group>())
	,interchassis(std::make_shared<Native::Controller::SONETACR::Aps::Interchassis>())
	,protect(std::make_shared<Native::Controller::SONETACR::Aps::Protect>())
{
    group->parent = this;
    interchassis->parent = this;
    protect->parent = this;

    yang_name = "aps"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::~Aps()
{
}

bool Native::Controller::SONETACR::Aps::has_data() const
{
    return hspw_icrm_grp.is_set
	|| working.is_set
	|| (group !=  nullptr && group->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data())
	|| (protect !=  nullptr && protect->has_data());
}

bool Native::Controller::SONETACR::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hspw_icrm_grp.yfilter)
	|| ydk::is_set(working.yfilter)
	|| (group !=  nullptr && group->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation())
	|| (protect !=  nullptr && protect->has_operation());
}

std::string Native::Controller::SONETACR::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hspw_icrm_grp.is_set || is_set(hspw_icrm_grp.yfilter)) leaf_name_data.push_back(hspw_icrm_grp.get_name_leafdata());
    if (working.is_set || is_set(working.yfilter)) leaf_name_data.push_back(working.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Controller::SONETACR::Aps::Group>();
        }
        return group;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Controller::SONETACR::Aps::Interchassis>();
        }
        return interchassis;
    }

    if(child_yang_name == "protect")
    {
        if(protect == nullptr)
        {
            protect = std::make_shared<Native::Controller::SONETACR::Aps::Protect>();
        }
        return protect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    if(protect != nullptr)
    {
        children["protect"] = protect;
    }

    return children;
}

void Native::Controller::SONETACR::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp = value;
        hspw_icrm_grp.value_namespace = name_space;
        hspw_icrm_grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working")
    {
        working = value;
        working.value_namespace = name_space;
        working.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hspw-icrm-grp")
    {
        hspw_icrm_grp.yfilter = yfilter;
    }
    if(value_path == "working")
    {
        working.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "interchassis" || name == "protect" || name == "hspw-icrm-grp" || name == "working")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Group::Group()
    :
    acr{YType::int8, "acr"},
    group_number{YType::uint8, "group-number"}
{

    yang_name = "group"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::Group::~Group()
{
}

bool Native::Controller::SONETACR::Aps::Group::has_data() const
{
    return acr.is_set
	|| group_number.is_set;
}

bool Native::Controller::SONETACR::Aps::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter)
	|| ydk::is_set(group_number.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aps::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr" || name == "group-number")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Interchassis::Interchassis()
    :
    group{YType::uint8, "group"}
{

    yang_name = "interchassis"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::Interchassis::~Interchassis()
{
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_data() const
{
    return group.is_set;
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aps::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Controller::SONETACR::Aps::Protect::Protect()
    :
    ip_addr{YType::str, "ip-addr"},
    number{YType::int8, "number"}
{

    yang_name = "protect"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aps::Protect::~Protect()
{
}

bool Native::Controller::SONETACR::Aps::Protect::has_data() const
{
    return ip_addr.is_set
	|| number.is_set;
}

bool Native::Controller::SONETACR::Aps::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Controller::SONETACR::Aps::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aps::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aps::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aps::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aps::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aps::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aps::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "number")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Au3()
    :
    number{YType::int8, "number"}
    	,
    mode(std::make_shared<Native::Controller::SONETACR::Au3::Mode>())
	,overhead(std::make_shared<Native::Controller::SONETACR::Au3::Overhead>())
{
    mode->parent = this;
    overhead->parent = this;

    yang_name = "au-3"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au3::~Au3()
{
}

bool Native::Controller::SONETACR::Au3::has_data() const
{
    return number.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (overhead !=  nullptr && overhead->has_data());
}

bool Native::Controller::SONETACR::Au3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (overhead !=  nullptr && overhead->has_operation());
}

std::string Native::Controller::SONETACR::Au3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-3" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Controller::SONETACR::Au3::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "overhead")
    {
        if(overhead == nullptr)
        {
            overhead = std::make_shared<Native::Controller::SONETACR::Au3::Overhead>();
        }
        return overhead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(overhead != nullptr)
    {
        children["overhead"] = overhead;
    }

    return children;
}

void Native::Controller::SONETACR::Au3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "overhead" || name == "number")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Mode::Mode()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "mode"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au3::Mode::~Mode()
{
}

bool Native::Controller::SONETACR::Au3::Mode::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONETACR::Au3::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONETACR::Au3::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au3::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au3::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au3::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONETACR::Au3::Overhead::Overhead()
    :
    byte{YType::enumeration, "byte"},
    length{YType::uint8, "length"}
{

    yang_name = "overhead"; yang_parent_name = "au-3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au3::Overhead::~Overhead()
{
}

bool Native::Controller::SONETACR::Au3::Overhead::has_data() const
{
    return byte.is_set
	|| length.is_set;
}

bool Native::Controller::SONETACR::Au3::Overhead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string Native::Controller::SONETACR::Au3::Overhead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overhead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au3::Overhead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte.is_set || is_set(byte.yfilter)) leaf_name_data.push_back(byte.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au3::Overhead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au3::Overhead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au3::Overhead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte")
    {
        byte = value;
        byte.value_namespace = name_space;
        byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au3::Overhead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte")
    {
        byte.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au3::Overhead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte" || name == "length")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::Au4()
    :
    number{YType::int8, "number"},
    tug_3{YType::int8, "tug-3"},
    cem_group{YType::int32, "cem-group"},
    framing{YType::enumeration, "framing"},
    mode{YType::enumeration, "mode"},
    unframed{YType::empty, "unframed"}
    	,
    cem_group_atm(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm>())
	,cem_group_timeslots(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots>())
	,cem_group_unframed(std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed>())
	,channel_group_timeslots(std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots>())
	,framing_unframed(std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed>())
	,ima_group(std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup>())
{
    cem_group_atm->parent = this;
    cem_group_timeslots->parent = this;
    cem_group_unframed->parent = this;
    channel_group_timeslots->parent = this;
    framing_unframed->parent = this;
    ima_group->parent = this;

    yang_name = "au-4"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::~Au4()
{
}

bool Native::Controller::SONETACR::Au4::has_data() const
{
    return number.is_set
	|| tug_3.is_set
	|| cem_group.is_set
	|| framing.is_set
	|| mode.is_set
	|| unframed.is_set
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_data())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_data())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_data())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_data())
	|| (framing_unframed !=  nullptr && framing_unframed->has_data())
	|| (ima_group !=  nullptr && ima_group->has_data());
}

bool Native::Controller::SONETACR::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(tug_3.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(framing.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(unframed.yfilter)
	|| (cem_group_atm !=  nullptr && cem_group_atm->has_operation())
	|| (cem_group_timeslots !=  nullptr && cem_group_timeslots->has_operation())
	|| (cem_group_unframed !=  nullptr && cem_group_unframed->has_operation())
	|| (channel_group_timeslots !=  nullptr && channel_group_timeslots->has_operation())
	|| (framing_unframed !=  nullptr && framing_unframed->has_operation())
	|| (ima_group !=  nullptr && ima_group->has_operation());
}

std::string Native::Controller::SONETACR::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4" <<"[number='" <<number <<"']" <<"[tug-3='" <<tug_3 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (tug_3.is_set || is_set(tug_3.yfilter)) leaf_name_data.push_back(tug_3.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cem-group-atm")
    {
        if(cem_group_atm == nullptr)
        {
            cem_group_atm = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm>();
        }
        return cem_group_atm;
    }

    if(child_yang_name == "cem-group-timeslots")
    {
        if(cem_group_timeslots == nullptr)
        {
            cem_group_timeslots = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots>();
        }
        return cem_group_timeslots;
    }

    if(child_yang_name == "cem-group-unframed")
    {
        if(cem_group_unframed == nullptr)
        {
            cem_group_unframed = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed>();
        }
        return cem_group_unframed;
    }

    if(child_yang_name == "channel-group-timeslots")
    {
        if(channel_group_timeslots == nullptr)
        {
            channel_group_timeslots = std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots>();
        }
        return channel_group_timeslots;
    }

    if(child_yang_name == "framing-unframed")
    {
        if(framing_unframed == nullptr)
        {
            framing_unframed = std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed>();
        }
        return framing_unframed;
    }

    if(child_yang_name == "ima-group")
    {
        if(ima_group == nullptr)
        {
            ima_group = std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup>();
        }
        return ima_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cem_group_atm != nullptr)
    {
        children["cem-group-atm"] = cem_group_atm;
    }

    if(cem_group_timeslots != nullptr)
    {
        children["cem-group-timeslots"] = cem_group_timeslots;
    }

    if(cem_group_unframed != nullptr)
    {
        children["cem-group-unframed"] = cem_group_unframed;
    }

    if(channel_group_timeslots != nullptr)
    {
        children["channel-group-timeslots"] = channel_group_timeslots;
    }

    if(framing_unframed != nullptr)
    {
        children["framing-unframed"] = framing_unframed;
    }

    if(ima_group != nullptr)
    {
        children["ima-group"] = ima_group;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tug-3")
    {
        tug_3 = value;
        tug_3.value_namespace = name_space;
        tug_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "tug-3")
    {
        tug_3.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cem-group-atm" || name == "cem-group-timeslots" || name == "cem-group-unframed" || name == "channel-group-timeslots" || name == "framing-unframed" || name == "ima-group" || name == "number" || name == "tug-3" || name == "cem-group" || name == "framing" || name == "mode" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::CemGroupAtm()
{

    yang_name = "cem-group-atm"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::~CemGroupAtm()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupAtm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupAtm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupAtm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupAtm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    atm{YType::empty, "atm"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| atm.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "atm")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::CemGroupTimeslots()
{

    yang_name = "cem-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::~CemGroupTimeslots()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::CemGroupUnframed()
{

    yang_name = "cem-group-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::~CemGroupUnframed()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cem-group-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    cem_group{YType::int32, "cem-group"},
    unframed{YType::empty, "unframed"}
{

    yang_name = "tug-2"; yang_parent_name = "cem-group-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| cem_group.is_set
	|| unframed.is_set;
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(cem_group.yfilter)
	|| ydk::is_set(unframed.yfilter);
}

std::string Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[cem-group='" <<cem_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (cem_group.is_set || is_set(cem_group.yfilter)) leaf_name_data.push_back(cem_group.get_name_leafdata());
    if (unframed.is_set || is_set(unframed.yfilter)) leaf_name_data.push_back(unframed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cem-group")
    {
        cem_group = value;
        cem_group.value_namespace = name_space;
        cem_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unframed")
    {
        unframed = value;
        unframed.value_namespace = name_space;
        unframed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "cem-group")
    {
        cem_group.yfilter = yfilter;
    }
    if(value_path == "unframed")
    {
        unframed.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "cem-group" || name == "unframed")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::ChannelGroupTimeslots()
{

    yang_name = "channel-group-timeslots"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::~ChannelGroupTimeslots()
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group-timeslots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    channel_group{YType::int32, "channel-group"},
    timeslots{YType::str, "timeslots"}
{

    yang_name = "tug-2"; yang_parent_name = "channel-group-timeslots"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| channel_group.is_set
	|| timeslots.is_set;
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(channel_group.yfilter)
	|| ydk::is_set(timeslots.yfilter);
}

std::string Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[channel-group='" <<channel_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());
    if (timeslots.is_set || is_set(timeslots.yfilter)) leaf_name_data.push_back(timeslots.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslots")
    {
        timeslots = value;
        timeslots.value_namespace = name_space;
        timeslots.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
    if(value_path == "timeslots")
    {
        timeslots.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "channel-group" || name == "timeslots")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::FramingUnframed::FramingUnframed()
{

    yang_name = "framing-unframed"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::FramingUnframed::~FramingUnframed()
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::FramingUnframed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "framing-unframed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::FramingUnframed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::FramingUnframed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::FramingUnframed::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::FramingUnframed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::FramingUnframed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::FramingUnframed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    framing{YType::enumeration, "framing"}
{

    yang_name = "tug-2"; yang_parent_name = "framing-unframed"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| framing.is_set;
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(framing.yfilter);
}

std::string Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (framing.is_set || is_set(framing.yfilter)) leaf_name_data.push_back(framing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "framing")
    {
        framing = value;
        framing.value_namespace = name_space;
        framing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "framing")
    {
        framing.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "framing")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ImaGroup::ImaGroup()
{

    yang_name = "ima-group"; yang_parent_name = "au-4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ImaGroup::~ImaGroup()
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_data() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_operation() const
{
    for (std::size_t index=0; index<tug_2.size(); index++)
    {
        if(tug_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Controller::SONETACR::Au4::ImaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ima-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ImaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ImaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tug-2")
    {
        for(auto const & c : tug_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Controller::SONETACR::Au4::ImaGroup::Tug2>();
        c->parent = this;
        tug_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ImaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tug_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Controller::SONETACR::Au4::ImaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4::ImaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tug-2")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4::ImaGroup::Tug2::Tug2()
    :
    number{YType::int8, "number"},
    e1{YType::int8, "e1"},
    ima_group{YType::int32, "ima-group"}
{

    yang_name = "tug-2"; yang_parent_name = "ima-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4::ImaGroup::Tug2::~Tug2()
{
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_data() const
{
    return number.is_set
	|| e1.is_set
	|| ima_group.is_set;
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(e1.yfilter)
	|| ydk::is_set(ima_group.yfilter);
}

std::string Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tug-2" <<"[number='" <<number <<"']" <<"[e1='" <<e1 <<"']" <<"[ima-group='" <<ima_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (e1.is_set || is_set(e1.yfilter)) leaf_name_data.push_back(e1.get_name_leafdata());
    if (ima_group.is_set || is_set(ima_group.yfilter)) leaf_name_data.push_back(ima_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4::ImaGroup::Tug2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4::ImaGroup::Tug2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "e1")
    {
        e1 = value;
        e1.value_namespace = name_space;
        e1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ima-group")
    {
        ima_group = value;
        ima_group.value_namespace = name_space;
        ima_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4::ImaGroup::Tug2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "e1")
    {
        e1.yfilter = yfilter;
    }
    if(value_path == "ima-group")
    {
        ima_group.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4::ImaGroup::Tug2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "e1" || name == "ima-group")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4Atm::Au4Atm()
    :
    au_4(std::make_shared<Native::Controller::SONETACR::Au4Atm::Au4>())
{
    au_4->parent = this;

    yang_name = "au-4-atm"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4Atm::~Au4Atm()
{
}

bool Native::Controller::SONETACR::Au4Atm::has_data() const
{
    return (au_4 !=  nullptr && au_4->has_data());
}

bool Native::Controller::SONETACR::Au4Atm::has_operation() const
{
    return is_set(yfilter)
	|| (au_4 !=  nullptr && au_4->has_operation());
}

std::string Native::Controller::SONETACR::Au4Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4-atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "au-4")
    {
        if(au_4 == nullptr)
        {
            au_4 = std::make_shared<Native::Controller::SONETACR::Au4Atm::Au4>();
        }
        return au_4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(au_4 != nullptr)
    {
        children["au-4"] = au_4;
    }

    return children;
}

void Native::Controller::SONETACR::Au4Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Controller::SONETACR::Au4Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Controller::SONETACR::Au4Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "au-4")
        return true;
    return false;
}

Native::Controller::SONETACR::Au4Atm::Au4::Au4()
    :
    atm{YType::empty, "atm"},
    number{YType::int8, "number"}
{

    yang_name = "au-4"; yang_parent_name = "au-4-atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Au4Atm::Au4::~Au4()
{
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_data() const
{
    return atm.is_set
	|| number.is_set;
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Controller::SONETACR::Au4Atm::Au4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "au-4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Au4Atm::Au4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Au4Atm::Au4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Au4Atm::Au4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Au4Atm::Au4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Au4Atm::Au4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Au4Atm::Au4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "number")
        return true;
    return false;
}

Native::Controller::SONETACR::Aug::Aug()
    :
    mapping{YType::enumeration, "mapping"}
{

    yang_name = "aug"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Aug::~Aug()
{
}

bool Native::Controller::SONETACR::Aug::has_data() const
{
    return mapping.is_set;
}

bool Native::Controller::SONETACR::Aug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Controller::SONETACR::Aug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Aug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Aug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Aug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Aug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Aug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Aug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Controller::SONETACR::Clock_::Clock_()
    :
    source{YType::enumeration, "source"}
{

    yang_name = "clock"; yang_parent_name = "SONET-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Controller::SONETACR::Clock_::~Clock_()
{
}

bool Native::Controller::SONETACR::Clock_::has_data() const
{
    return source.is_set;
}

bool Native::Controller::SONETACR::Clock_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Controller::SONETACR::Clock_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::SONETACR::Clock_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::SONETACR::Clock_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::SONETACR::Clock_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::SONETACR::Clock_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::SONETACR::Clock_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Controller::SONETACR::Clock_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Controller::Wanphy::Wanphy()
    :
    name{YType::str, "name"}
{

    yang_name = "wanphy"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Controller::Wanphy::~Wanphy()
{
}

bool Native::Controller::Wanphy::has_data() const
{
    return name.is_set;
}

bool Native::Controller::Wanphy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Controller::Wanphy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Controller::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-controller:wanphy" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Controller::Wanphy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Controller::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Controller::Wanphy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Controller::Wanphy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Controller::Wanphy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Controller::Wanphy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Crypto::Crypto()
    :
    xauth{YType::str, "Cisco-IOS-XE-crypto:xauth"}
    	,
    call(std::make_shared<Native::Crypto::Call>())
	,crypto_map(std::make_shared<Native::Crypto::CryptoMap>())
	,engine(std::make_shared<Native::Crypto::Engine>())
	,gdoi(std::make_shared<Native::Crypto::Gdoi>())
	,gkm(std::make_shared<Native::Crypto::Gkm>())
	,ikev2(std::make_shared<Native::Crypto::Ikev2>())
	,ipsec(std::make_shared<Native::Crypto::Ipsec>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp>())
	,key(std::make_shared<Native::Crypto::Key>())
	,logging(std::make_shared<Native::Crypto::Logging>())
	,map_client(std::make_shared<Native::Crypto::MapClient>())
	,map_ipv6_gdoi(std::make_shared<Native::Crypto::MapIpv6Gdoi>())
	,mib(std::make_shared<Native::Crypto::Mib>())
	,pki(std::make_shared<Native::Crypto::Pki>())
	,ssl(std::make_shared<Native::Crypto::Ssl>())
	,tls_tunnel(std::make_shared<Native::Crypto::TlsTunnel>())
	,vpn(std::make_shared<Native::Crypto::Vpn>())
{
    call->parent = this;
    crypto_map->parent = this;
    engine->parent = this;
    gdoi->parent = this;
    gkm->parent = this;
    ikev2->parent = this;
    ipsec->parent = this;
    isakmp->parent = this;
    key->parent = this;
    logging->parent = this;
    map_client->parent = this;
    map_ipv6_gdoi->parent = this;
    mib->parent = this;
    pki->parent = this;
    ssl->parent = this;
    tls_tunnel->parent = this;
    vpn->parent = this;

    yang_name = "crypto"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::~Crypto()
{
}

bool Native::Crypto::has_data() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    return xauth.is_set
	|| (call !=  nullptr && call->has_data())
	|| (crypto_map !=  nullptr && crypto_map->has_data())
	|| (engine !=  nullptr && engine->has_data())
	|| (gdoi !=  nullptr && gdoi->has_data())
	|| (gkm !=  nullptr && gkm->has_data())
	|| (ikev2 !=  nullptr && ikev2->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (map_client !=  nullptr && map_client->has_data())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Crypto::has_operation() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xauth.yfilter)
	|| (call !=  nullptr && call->has_operation())
	|| (crypto_map !=  nullptr && crypto_map->has_operation())
	|| (engine !=  nullptr && engine->has_operation())
	|| (gdoi !=  nullptr && gdoi->has_operation())
	|| (gkm !=  nullptr && gkm->has_operation())
	|| (ikev2 !=  nullptr && ikev2->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (map_client !=  nullptr && map_client->has_operation())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Crypto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xauth.is_set || is_set(xauth.yfilter)) leaf_name_data.push_back(xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "call")
    {
        if(call == nullptr)
        {
            call = std::make_shared<Native::Crypto::Call>();
        }
        return call;
    }

    if(child_yang_name == "crypto-map")
    {
        if(crypto_map == nullptr)
        {
            crypto_map = std::make_shared<Native::Crypto::CryptoMap>();
        }
        return crypto_map;
    }

    if(child_yang_name == "dynamic-map")
    {
        for(auto const & c : dynamic_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::DynamicMap>();
        c->parent = this;
        dynamic_map.push_back(c);
        return c;
    }

    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::Crypto::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "gdoi")
    {
        if(gdoi == nullptr)
        {
            gdoi = std::make_shared<Native::Crypto::Gdoi>();
        }
        return gdoi;
    }

    if(child_yang_name == "gkm")
    {
        if(gkm == nullptr)
        {
            gkm = std::make_shared<Native::Crypto::Gkm>();
        }
        return gkm;
    }

    if(child_yang_name == "identity")
    {
        for(auto const & c : identity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Crypto::Ikev2>();
        }
        return ikev2;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Key>();
        }
        return key;
    }

    if(child_yang_name == "keyring")
    {
        for(auto const & c : keyring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring>();
        c->parent = this;
        keyring.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Crypto::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "map-client")
    {
        if(map_client == nullptr)
        {
            map_client = std::make_shared<Native::Crypto::MapClient>();
        }
        return map_client;
    }

    if(child_yang_name == "map-ipv6-gdoi")
    {
        if(map_ipv6_gdoi == nullptr)
        {
            map_ipv6_gdoi = std::make_shared<Native::Crypto::MapIpv6Gdoi>();
        }
        return map_ipv6_gdoi;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Crypto::Mib>();
        }
        return mib;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Crypto::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "tls-tunnel")
    {
        if(tls_tunnel == nullptr)
        {
            tls_tunnel = std::make_shared<Native::Crypto::TlsTunnel>();
        }
        return tls_tunnel;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Crypto::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(call != nullptr)
    {
        children["call"] = call;
    }

    if(crypto_map != nullptr)
    {
        children["crypto-map"] = crypto_map;
    }

    for (auto const & c : dynamic_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(engine != nullptr)
    {
        children["engine"] = engine;
    }

    if(gdoi != nullptr)
    {
        children["gdoi"] = gdoi;
    }

    if(gkm != nullptr)
    {
        children["gkm"] = gkm;
    }

    for (auto const & c : identity)
    {
        children[c->get_segment_path()] = c;
    }

    if(ikev2 != nullptr)
    {
        children["ikev2"] = ikev2;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    for (auto const & c : keyring)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(map_client != nullptr)
    {
        children["map-client"] = map_client;
    }

    if(map_ipv6_gdoi != nullptr)
    {
        children["map-ipv6-gdoi"] = map_ipv6_gdoi;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    if(tls_tunnel != nullptr)
    {
        children["tls-tunnel"] = tls_tunnel;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xauth")
    {
        xauth = value;
        xauth.value_namespace = name_space;
        xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xauth")
    {
        xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call" || name == "crypto-map" || name == "dynamic-map" || name == "engine" || name == "gdoi" || name == "gkm" || name == "identity" || name == "ikev2" || name == "ipsec" || name == "isakmp" || name == "key" || name == "keyring" || name == "logging" || name == "map-client" || name == "map-ipv6-gdoi" || name == "mib" || name == "pki" || name == "ssl" || name == "tls-tunnel" || name == "vpn" || name == "xauth")
        return true;
    return false;
}

Native::Crypto::Call::Call()
    :
    admission(std::make_shared<Native::Crypto::Call::Admission>())
{
    admission->parent = this;

    yang_name = "call"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::~Call()
{
}

bool Native::Crypto::Call::has_data() const
{
    return (admission !=  nullptr && admission->has_data());
}

bool Native::Crypto::Call::has_operation() const
{
    return is_set(yfilter)
	|| (admission !=  nullptr && admission->has_operation());
}

std::string Native::Crypto::Call::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:call";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Crypto::Call::Admission>();
        }
        return admission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    return children;
}

void Native::Crypto::Call::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Admission()
    :
    limit(std::make_shared<Native::Crypto::Call::Admission::Limit>())
{
    limit->parent = this;

    yang_name = "admission"; yang_parent_name = "call"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::~Admission()
{
}

bool Native::Crypto::Call::Admission::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Crypto::Call::Admission::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Crypto::Call::Admission::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Call::Admission::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Crypto::Call::Admission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::Admission::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::Admission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Limit()
    :
    all(std::make_shared<Native::Crypto::Call::Admission::Limit::All>())
	,ike(std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>())
	,ipsec(std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>())
{
    all->parent = this;
    ike->parent = this;
    ipsec->parent = this;

    yang_name = "limit"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::~Limit()
{
}

bool Native::Crypto::Call::Admission::Limit::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Call::Admission::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Call::Admission::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Crypto::Call::Admission::Limit::All>();
        }
        return all;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(ike != nullptr)
    {
        children["ike"] = ike;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Call::Admission::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::Admission::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::Admission::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "ike" || name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::All::All()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"}
{

    yang_name = "all"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::All::~All()
{
}

bool Native::Crypto::Call::Admission::Limit::All::has_data() const
{
    return in_negotiation_sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_negotiation_sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.yfilter)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
        in_negotiation_sa.value_namespace = name_space;
        in_negotiation_sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-negotiation-sa")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Ike::Ike()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"},
    sa{YType::uint32, "sa"}
{

    yang_name = "ike"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::Ike::~Ike()
{
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_data() const
{
    return in_negotiation_sa.is_set
	|| sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_negotiation_sa.yfilter)
	|| ydk::is_set(sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::Ike::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.yfilter)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());
    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ike::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
        in_negotiation_sa.value_namespace = name_space;
        in_negotiation_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::Ike::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa.yfilter = yfilter;
    }
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-negotiation-sa" || name == "sa")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Ipsec::Ipsec()
    :
    sa{YType::uint32, "sa"}
{

    yang_name = "ipsec"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_data() const
{
    return sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa")
        return true;
    return false;
}

Native::Crypto::CryptoMap::CryptoMap()
{

    yang_name = "crypto-map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::CryptoMap::~CryptoMap()
{
}

bool Native::Crypto::CryptoMap::has_data() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::CryptoMap::has_operation() const
{
    for (std::size_t index=0; index<map.size(); index++)
    {
        if(map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        for(auto const & c : map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::CryptoMap::Map>();
        c->parent = this;
        map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::CryptoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Map()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dynamic{YType::str, "dynamic"},
    ipv6{YType::empty, "ipv6"},
    keying{YType::enumeration, "keying"},
    profile{YType::str, "profile"},
    sequence_number{YType::uint16, "sequence-number"}
    	,
    default_(std::make_shared<Native::Crypto::CryptoMap::Map::Default_>())
	,dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>())
	,match(std::make_shared<Native::Crypto::CryptoMap::Map::Match>())
	,qos(std::make_shared<Native::Crypto::CryptoMap::Map::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::CryptoMap::Map::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "map"; yang_parent_name = "crypto-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::CryptoMap::Map::~Map()
{
}

bool Native::Crypto::CryptoMap::Map::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dynamic.is_set
	|| ipv6.is_set
	|| keying.is_set
	|| profile.is_set
	|| sequence_number.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(keying.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:crypto-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::CryptoMap::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (keying.is_set || is_set(keying.yfilter)) leaf_name_data.push_back(keying.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::CryptoMap::Map::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keying")
    {
        keying = value;
        keying.value_namespace = name_space;
        keying.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "keying")
    {
        keying.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "name" || name == "description" || name == "dynamic" || name == "ipv6" || name == "keying" || name == "profile" || name == "sequence-number")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Dialer>())
	,match(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Match>())
	,qos(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set>())
{
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::~Default_()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "description")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::empty, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation>())
{
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::~Set()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"},
    level{YType::enumeration, "level"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| level.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn" || name == "level")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    default_{YType::empty, "default"},
    idle_time{YType::empty, "idle-time"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return default_.is_set
	|| idle_time.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "idle-time")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Dialer::~Dialer()
{
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Match::~Match()
{
}

bool Native::Crypto::CryptoMap::Map::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::CryptoMap::Map::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::Qos::~Qos()
{
}

bool Native::Crypto::CryptoMap::Map::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::CryptoMap::Map::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::CryptoMap::Map::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::CryptoMap::Map::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::CryptoMap::Map::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::CryptoMap::Map::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::CryptoMap::Map::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::CryptoMap::Map::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::CryptoMap::Map::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::CryptoMap::Map::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::CryptoMap::Map::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::CryptoMap::Map::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer-conatiner" || name == "static")
        return true;
    return false;
}

const Enum::YLeaf Native::Clock_::SummerTime::RecurringStart::first {0, "first"};
const Enum::YLeaf Native::Clock_::SummerTime::RecurringStart::last {1, "last"};

const Enum::YLeaf Native::Clock_::SummerTime::RecurringEnd::first {0, "first"};
const Enum::YLeaf Native::Clock_::SummerTime::RecurringEnd::last {1, "last"};

const Enum::YLeaf Native::Clock_::Timezone::Offset::Y__PLUS__ {0, "+"};
const Enum::YLeaf Native::Clock_::Timezone::Offset::Y_ {1, "-"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Name::t1 {0, "t1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::e1 {1, "e1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::t3 {2, "t3"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::T1 {3, "T1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::E1 {4, "E1"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Name::T3 {5, "T3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::ami {0, "ami"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::b8zs {1, "b8zs"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Linecode::hdb3 {2, "hdb3"};

const Enum::YLeaf Native::Controller::ControllerTxExList::Clock_::Source::Line::LineMode::primary {0, "primary"};
const Enum::YLeaf Native::Controller::ControllerTxExList::Clock_::Source::Line::LineMode::secondary {1, "secondary"};

const Enum::YLeaf Native::Controller::SONET::Framing::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SONET::Framing::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONET::Au3::Mode::Mapping::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SONET::Au3::Overhead::Byte::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SONET::Au4::Mode::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SONET::Au4::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONET::Au4::FramingUnframed::Tug2::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONET::Aug::Mapping::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SONET::Aug::Mapping::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SONET::Clock_::Source::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SONET::Clock_::Source::line {1, "line"};

const Enum::YLeaf Native::Controller::SONETACR::Framing::sonet {0, "sonet"};
const Enum::YLeaf Native::Controller::SONETACR::Framing::sdh {1, "sdh"};

const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONETACR::Au3::Mode::Mapping::c_2 {2, "c-2"};

const Enum::YLeaf Native::Controller::SONETACR::Au3::Overhead::Byte::j1 {0, "j1"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_11 {0, "c-11"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_12 {1, "c-12"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_2 {2, "c-2"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_3 {3, "c-3"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::c_4 {4, "c-4"};
const Enum::YLeaf Native::Controller::SONETACR::Au4::Mode::e3 {5, "e3"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Framing::unframed {0, "unframed"};

const Enum::YLeaf Native::Controller::SONETACR::Aug::Mapping::au_3 {0, "au-3"};
const Enum::YLeaf Native::Controller::SONETACR::Aug::Mapping::au_4 {1, "au-4"};

const Enum::YLeaf Native::Controller::SONETACR::Clock_::Source::internal {0, "internal"};
const Enum::YLeaf Native::Controller::SONETACR::Clock_::Source::line {1, "line"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_isakmp {0, "ipsec-isakmp"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ipsec_manual {1, "ipsec-manual"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::gdoi {2, "gdoi"};
const Enum::YLeaf Native::Crypto::CryptoMap::Map::Keying::ckm {3, "ckm"};

const Enum::YLeaf Native::Crypto::CryptoMap::Map::Default_::Set::SecurityAssociation::Level::per_host {0, "per-host"};


}
}

