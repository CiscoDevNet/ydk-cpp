
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_178.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "MSP_VC_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/MSP_VC_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Msp_Vc_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Printer_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "PRINTER_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::~Printer_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PRINTER_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "PRINTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/PRINTER_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Printer_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Router_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "ROUTER_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::~Router_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ROUTER_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "ROUTER_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/ROUTER_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Router_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switch_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "SWITCH_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::~Switch_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SWITCH_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "SWITCH_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/SWITCH_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Switch_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Tp_Interface_Template()
    :
    load_interval{YType::uint16, "load-interval"}
    	,
    ip(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip>())
	,service_policy(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy>())
	,spanning_tree(nullptr) // presence node
	,storm_control(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl>())
	,switchport(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport>())
{
    ip->parent = this;

    service_policy->parent = this;

    storm_control->parent = this;

    switchport->parent = this;

    yang_name = "TP_INTERFACE_TEMPLATE"; yang_parent_name = "Cisco-IOS-XE-switch_template";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::~Tp_Interface_Template()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::has_data() const
{
    return load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (switchport !=  nullptr && switchport->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TP_INTERFACE_TEMPLATE";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport>();
        }
        return switchport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "service-policy" || name == "spanning-tree" || name == "storm-control" || name == "switchport" || name == "load-interval")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::ServicePolicy()
    :
    input(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input>())
	,output(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-policy"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::~ServicePolicy()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::Input()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "input"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::~Input()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::Output()
    :
    policy_map_name{YType::str, "policy-map-name"}
{
    yang_name = "output"; yang_parent_name = "service-policy";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::~Output()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::has_data() const
{
    return policy_map_name.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_map_name.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/service-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_map_name.is_set || is_set(policy_map_name.yfilter)) leaf_name_data.push_back(policy_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name = value;
        policy_map_name.value_namespace = name_space;
        policy_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-map-name")
    {
        policy_map_name.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::ServicePolicy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-name")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "nonegotiate"}
    	,
    access(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access>())
	,block(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block>())
	,mode(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode>())
	,port_security(nullptr) // presence node
	,voice(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice>())
{
    access->parent = this;

    block->parent = this;

    mode->parent = this;

    voice->parent = this;

    yang_name = "switchport"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::~Switchport()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::has_data() const
{
    return nonegotiate.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "voice" || name == "nonegotiate")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::Mode()
    :
    access{YType::empty, "access"},
    trunk{YType::empty, "trunk"}
{
    yang_name = "mode"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::~Mode()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::has_data() const
{
    return access.is_set
	|| trunk.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(trunk.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "trunk")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::Block()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "block"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::~Block()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::has_data() const
{
    return unicast.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::PortSecurity()
    :
    aging(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging>())
	,maximum(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum>())
	,violation(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation>())
{
    aging->parent = this;

    maximum->parent = this;

    violation->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::has_data() const
{
    return (aging !=  nullptr && aging->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (violation !=  nullptr && violation->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (violation !=  nullptr && violation->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "violation")
    {
        if(violation == nullptr)
        {
            violation = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation>();
        }
        return violation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"}
    	,
    type(nullptr) // presence node
{
    yang_name = "aging"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::has_data() const
{
    return static_.is_set
	|| time.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "static" || name == "time")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::Type()
    :
    inactivity{YType::empty, "inactivity"}
{
    yang_name = "type"; yang_parent_name = "aging";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::~Type()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_data() const
{
    return inactivity.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactivity.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/aging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactivity.is_set || is_set(inactivity.yfilter)) leaf_name_data.push_back(inactivity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactivity")
    {
        inactivity = value;
        inactivity.value_namespace = name_space;
        inactivity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactivity")
    {
        inactivity.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Aging::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Maximum()
{
    yang_name = "maximum"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Range()
    :
    range{YType::uint16, "range"}
    	,
    vlan(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "maximum";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::~Range()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_data() const
{
    return range.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/maximum/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "range")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::Vlan()
    :
    access{YType::empty, "access"}
{
    yang_name = "vlan"; yang_parent_name = "range";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::~Vlan()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_data() const
{
    return access.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Maximum::Range::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::Violation()
    :
    restrict{YType::empty, "restrict"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "violation"; yang_parent_name = "port-security";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::~Violation()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::has_data() const
{
    return restrict.is_set
	|| shutdown.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restrict.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violation";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/port-security/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restrict.is_set || is_set(restrict.yfilter)) leaf_name_data.push_back(restrict.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::PortSecurity::Violation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restrict" || name == "shutdown")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "access"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::~Access()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "switchport";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::~Voice()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
    	,
    bpduguard(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard>())
	,portfast(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast>())
{
    bpduguard->parent = this;

    portfast->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::~SpanningTree()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::has_data() const
{
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bpduguard"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::has_data() const
{
    return enable.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::~Portfast()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::has_data() const
{
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::StormControl()
    :
    action(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action>())
	,broadcast(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast>())
{
    action->parent = this;

    broadcast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::~StormControl()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::~Broadcast()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::~Level()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::get_children() const
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::has_data() const
{
    return threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::Bps()
    :
    b_unit{YType::str, "b-unit"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::has_data() const
{
    return b_unit.is_set
	|| threshold.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(b_unit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "b-unit" || name == "threshold")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::~Action()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::has_data() const
{
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Ip()
    :
    dhcp(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "TP_INTERFACE_TEMPLATE";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::~Ip()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::has_data() const
{
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::~Dhcp()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Snooping()
    :
    limit(std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:Cisco-IOS-XE-switch_template/TP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::CiscoIosXeSwitch_Template::Tp_Interface_Template::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::ServiceTemplate::ServiceTemplate()
    :
    word{YType::str, "word"},
    sgt{YType::uint16, "sgt"},
    vlan{YType::uint16, "vlan"}
    	,
    inactivity_timer(std::make_shared<Native::ServiceTemplate::InactivityTimer>())
	,linksec(std::make_shared<Native::ServiceTemplate::Linksec>())
	,voice(std::make_shared<Native::ServiceTemplate::Voice>())
{
    inactivity_timer->parent = this;

    linksec->parent = this;

    voice->parent = this;

    yang_name = "service-template"; yang_parent_name = "native";
}

Native::ServiceTemplate::~ServiceTemplate()
{
}

bool Native::ServiceTemplate::has_data() const
{
    return word.is_set
	|| sgt.is_set
	|| vlan.is_set
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_data())
	|| (linksec !=  nullptr && linksec->has_data())
	|| (voice !=  nullptr && voice->has_data());
}

bool Native::ServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (inactivity_timer !=  nullptr && inactivity_timer->has_operation())
	|| (linksec !=  nullptr && linksec->has_operation())
	|| (voice !=  nullptr && voice->has_operation());
}

std::string Native::ServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:service-template" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inactivity-timer")
    {
        if(inactivity_timer == nullptr)
        {
            inactivity_timer = std::make_shared<Native::ServiceTemplate::InactivityTimer>();
        }
        return inactivity_timer;
    }

    if(child_yang_name == "linksec")
    {
        if(linksec == nullptr)
        {
            linksec = std::make_shared<Native::ServiceTemplate::Linksec>();
        }
        return linksec;
    }

    if(child_yang_name == "voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::ServiceTemplate::Voice>();
        }
        return voice;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inactivity_timer != nullptr)
    {
        children["inactivity-timer"] = inactivity_timer;
    }

    if(linksec != nullptr)
    {
        children["linksec"] = linksec;
    }

    if(voice != nullptr)
    {
        children["voice"] = voice;
    }

    return children;
}

void Native::ServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inactivity-timer" || name == "linksec" || name == "voice" || name == "word" || name == "sgt" || name == "vlan")
        return true;
    return false;
}

Native::ServiceTemplate::InactivityTimer::InactivityTimer()
    :
    probe{YType::empty, "probe"},
    value_{YType::uint16, "value"}
{
    yang_name = "inactivity-timer"; yang_parent_name = "service-template";
}

Native::ServiceTemplate::InactivityTimer::~InactivityTimer()
{
}

bool Native::ServiceTemplate::InactivityTimer::has_data() const
{
    return probe.is_set
	|| value_.is_set;
}

bool Native::ServiceTemplate::InactivityTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::ServiceTemplate::InactivityTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity-timer";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::InactivityTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InactivityTimer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::InactivityTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::InactivityTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::InactivityTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::InactivityTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::InactivityTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe" || name == "value")
        return true;
    return false;
}

Native::ServiceTemplate::Linksec::Linksec()
    :
    policy{YType::enumeration, "policy"}
{
    yang_name = "linksec"; yang_parent_name = "service-template";
}

Native::ServiceTemplate::Linksec::~Linksec()
{
}

bool Native::ServiceTemplate::Linksec::has_data() const
{
    return policy.is_set;
}

bool Native::ServiceTemplate::Linksec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::ServiceTemplate::Linksec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linksec";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::Linksec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Linksec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Linksec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Linksec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::Linksec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Linksec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Linksec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::ServiceTemplate::Voice::Voice()
    :
    vlan{YType::empty, "vlan"}
{
    yang_name = "voice"; yang_parent_name = "service-template";
}

Native::ServiceTemplate::Voice::~Voice()
{
}

bool Native::ServiceTemplate::Voice::has_data() const
{
    return vlan.is_set;
}

bool Native::ServiceTemplate::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::ServiceTemplate::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";

    return path_buffer.str();

}

const EntityPath Native::ServiceTemplate::Voice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Voice' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ServiceTemplate::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceTemplate::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceTemplate::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceTemplate::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::ServiceTemplate::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Switch_::Switch_()
    :
    number{YType::uint8, "number"},
    provision{YType::enumeration, "provision"}
{
    yang_name = "switch"; yang_parent_name = "native";
}

Native::Switch_::~Switch_()
{
}

bool Native::Switch_::has_data() const
{
    return number.is_set
	|| provision.is_set;
}

bool Native::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(provision.yfilter);
}

std::string Native::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (provision.is_set || is_set(provision.yfilter)) leaf_name_data.push_back(provision.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provision")
    {
        provision = value;
        provision.value_namespace = name_space;
        provision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "provision")
    {
        provision.yfilter = yfilter;
    }
}

bool Native::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "provision")
        return true;
    return false;
}

Native::SwitchVirtual::SwitchVirtual()
    :
    domain{YType::uint32, "domain"},
    virtual_{YType::empty, "virtual"}
    	,
    dual_active(std::make_shared<Native::SwitchVirtual::DualActive>())
	,mac_address(std::make_shared<Native::SwitchVirtual::MacAddress>())
	,switch_(std::make_shared<Native::SwitchVirtual::Switch_>())
{
    dual_active->parent = this;

    mac_address->parent = this;

    switch_->parent = this;

    yang_name = "switch-virtual"; yang_parent_name = "native";
}

Native::SwitchVirtual::~SwitchVirtual()
{
}

bool Native::SwitchVirtual::has_data() const
{
    return domain.is_set
	|| virtual_.is_set
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (switch_ !=  nullptr && switch_->has_data());
}

bool Native::SwitchVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(virtual_.yfilter)
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::SwitchVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch-virtual" <<"[domain='" <<domain <<"']";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.yfilter)) leaf_name_data.push_back(virtual_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SwitchVirtual::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::SwitchVirtual::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::SwitchVirtual::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::SwitchVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual")
    {
        virtual_ = value;
        virtual_.value_namespace = name_space;
        virtual_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "virtual")
    {
        virtual_.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-active" || name == "mac-address" || name == "switch" || name == "domain" || name == "virtual")
        return true;
    return false;
}

Native::SwitchVirtual::Switch_::Switch_()
    :
    mode{YType::enumeration, "mode"},
    priority{YType::uint32, "priority"},
    switch_number{YType::uint32, "switch-number"}
{
    yang_name = "switch"; yang_parent_name = "switch-virtual";
}

Native::SwitchVirtual::Switch_::~Switch_()
{
}

bool Native::SwitchVirtual::Switch_::has_data() const
{
    return mode.is_set
	|| priority.is_set
	|| switch_number.is_set;
}

bool Native::SwitchVirtual::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(switch_number.yfilter);
}

std::string Native::SwitchVirtual::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::Switch_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switch_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "priority" || name == "switch-number")
        return true;
    return false;
}

Native::SwitchVirtual::MacAddress::MacAddress()
    :
    use_virtual{YType::empty, "use-virtual"}
{
    yang_name = "mac-address"; yang_parent_name = "switch-virtual";
}

Native::SwitchVirtual::MacAddress::~MacAddress()
{
}

bool Native::SwitchVirtual::MacAddress::has_data() const
{
    return use_virtual.is_set;
}

bool Native::SwitchVirtual::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_virtual.yfilter);
}

std::string Native::SwitchVirtual::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_virtual.is_set || is_set(use_virtual.yfilter)) leaf_name_data.push_back(use_virtual.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-virtual")
    {
        use_virtual = value;
        use_virtual.value_namespace = name_space;
        use_virtual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-virtual")
    {
        use_virtual.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-virtual")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::DualActive()
    :
    detection(std::make_shared<Native::SwitchVirtual::DualActive::Detection>())
	,recovery(std::make_shared<Native::SwitchVirtual::DualActive::Recovery>())
{
    detection->parent = this;

    recovery->parent = this;

    yang_name = "dual-active"; yang_parent_name = "switch-virtual";
}

Native::SwitchVirtual::DualActive::~DualActive()
{
}

bool Native::SwitchVirtual::DualActive::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::SwitchVirtual::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::SwitchVirtual::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DualActive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::SwitchVirtual::DualActive::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::SwitchVirtual::DualActive::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "recovery")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Recovery::Recovery()
    :
    switch_{YType::uint8, "switch"}
    	,
    ip(std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>())
{
    ip->parent = this;

    yang_name = "recovery"; yang_parent_name = "dual-active";
}

Native::SwitchVirtual::DualActive::Recovery::~Recovery()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::has_data() const
{
    return switch_.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::SwitchVirtual::DualActive::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::DualActive::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "switch")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Recovery::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{
    yang_name = "ip"; yang_parent_name = "recovery";
}

Native::SwitchVirtual::DualActive::Recovery::Ip::~Ip()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::SwitchVirtual::DualActive::Recovery::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Recovery::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Recovery::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Recovery::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Detection()
    :
    pagp(nullptr) // presence node
{
    yang_name = "detection"; yang_parent_name = "dual-active";
}

Native::SwitchVirtual::DualActive::Detection::~Detection()
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_data() const
{
    return (pagp !=  nullptr && pagp->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::has_operation() const
{
    return is_set(yfilter)
	|| (pagp !=  nullptr && pagp->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pagp")
    {
        if(pagp == nullptr)
        {
            pagp = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp>();
        }
        return pagp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pagp != nullptr)
    {
        children["pagp"] = pagp;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pagp")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Pagp()
    :
    trust(std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>())
{
    trust->parent = this;

    yang_name = "pagp"; yang_parent_name = "detection";
}

Native::SwitchVirtual::DualActive::Detection::Pagp::~Pagp()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Detection::Pagp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pagp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::Trust()
    :
    channel_group{YType::uint8, "channel-group"}
{
    yang_name = "trust"; yang_parent_name = "pagp";
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::~Trust()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_data() const
{
    return channel_group.is_set;
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_group.yfilter);
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-group")
        return true;
    return false;
}

Native::Device::Device()
    :
    classifier{YType::empty, "classifier"}
{
    yang_name = "device"; yang_parent_name = "native";
}

Native::Device::~Device()
{
}

bool Native::Device::has_data() const
{
    return classifier.is_set;
}

bool Native::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classifier.yfilter);
}

std::string Native::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device";

    return path_buffer.str();

}

const EntityPath Native::Device::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classifier.is_set || is_set(classifier.yfilter)) leaf_name_data.push_back(classifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classifier")
    {
        classifier = value;
        classifier.value_namespace = name_space;
        classifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classifier")
    {
        classifier.yfilter = yfilter;
    }
}

bool Native::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classifier")
        return true;
    return false;
}

Native::StackMac::StackMac()
    :
    persistent(std::make_shared<Native::StackMac::Persistent>())
{
    persistent->parent = this;

    yang_name = "stack-mac"; yang_parent_name = "native";
}

Native::StackMac::~StackMac()
{
}

bool Native::StackMac::has_data() const
{
    return (persistent !=  nullptr && persistent->has_data());
}

bool Native::StackMac::has_operation() const
{
    return is_set(yfilter)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::StackMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:stack-mac";

    return path_buffer.str();

}

const EntityPath Native::StackMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::StackMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::StackMac::Persistent>();
        }
        return persistent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::StackMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    return children;
}

void Native::StackMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackMac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent")
        return true;
    return false;
}

Native::StackMac::Persistent::Persistent()
    :
    timer{YType::uint8, "timer"}
{
    yang_name = "persistent"; yang_parent_name = "stack-mac";
}

Native::StackMac::Persistent::~Persistent()
{
}

bool Native::StackMac::Persistent::has_data() const
{
    return timer.is_set;
}

bool Native::StackMac::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer.yfilter);
}

std::string Native::StackMac::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";

    return path_buffer.str();

}

const EntityPath Native::StackMac::Persistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:stack-mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::StackMac::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::StackMac::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::StackMac::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::StackMac::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::StackMac::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer")
        return true;
    return false;
}

Native::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cos{YType::uint8, "cos"}
    	,
    global(std::make_shared<Native::L2ProtocolTunnel::Global>())
{
    global->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "native";
}

Native::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::L2ProtocolTunnel::has_data() const
{
    return cos.is_set
	|| (global !=  nullptr && global->has_data());
}

bool Native::L2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:l2protocol-tunnel";

    return path_buffer.str();

}

const EntityPath Native::L2ProtocolTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::L2ProtocolTunnel::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::L2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::L2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "cos")
        return true;
    return false;
}

Native::L2ProtocolTunnel::Global::Global()
    :
    drop_threshold{YType::uint16, "drop-threshold"}
{
    yang_name = "global"; yang_parent_name = "l2protocol-tunnel";
}

Native::L2ProtocolTunnel::Global::~Global()
{
}

bool Native::L2ProtocolTunnel::Global::has_data() const
{
    return drop_threshold.is_set;
}

bool Native::L2ProtocolTunnel::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_threshold.yfilter);
}

std::string Native::L2ProtocolTunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::L2ProtocolTunnel::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:l2protocol-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_threshold.is_set || is_set(drop_threshold.yfilter)) leaf_name_data.push_back(drop_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::L2ProtocolTunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2ProtocolTunnel::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2ProtocolTunnel::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold = value;
        drop_threshold.value_namespace = name_space;
        drop_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2ProtocolTunnel::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-threshold")
    {
        drop_threshold.yfilter = yfilter;
    }
}

bool Native::L2ProtocolTunnel::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold")
        return true;
    return false;
}

Native::Rep::Rep()
    :
    admin(std::make_shared<Native::Rep::Admin>())
{
    admin->parent = this;

    yang_name = "rep"; yang_parent_name = "native";
}

Native::Rep::~Rep()
{
}

bool Native::Rep::has_data() const
{
    return (admin !=  nullptr && admin->has_data());
}

bool Native::Rep::has_operation() const
{
    return is_set(yfilter)
	|| (admin !=  nullptr && admin->has_operation());
}

std::string Native::Rep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:rep";

    return path_buffer.str();

}

const EntityPath Native::Rep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin")
    {
        if(admin == nullptr)
        {
            admin = std::make_shared<Native::Rep::Admin>();
        }
        return admin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin != nullptr)
    {
        children["admin"] = admin;
    }

    return children;
}

void Native::Rep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin")
        return true;
    return false;
}

Native::Rep::Admin::Admin()
{
    yang_name = "admin"; yang_parent_name = "rep";
}

Native::Rep::Admin::~Admin()
{
}

bool Native::Rep::Admin::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Rep::Admin::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Rep::Admin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin";

    return path_buffer.str();

}

const EntityPath Native::Rep::Admin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rep::Admin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Rep::Admin::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::Admin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Rep::Admin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Rep::Admin::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Rep::Admin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Rep::Admin::Vlan::Vlan()
    :
    name{YType::uint16, "name"}
{
    yang_name = "vlan"; yang_parent_name = "admin";
}

Native::Rep::Admin::Vlan::~Vlan()
{
}

bool Native::Rep::Admin::Vlan::has_data() const
{
    return name.is_set;
}

bool Native::Rep::Admin::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Rep::Admin::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Rep::Admin::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:rep/admin/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Rep::Admin::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Rep::Admin::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Rep::Admin::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Rep::Admin::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Rep::Admin::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_not_secure {0, "must-not-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::must_secure {1, "must-secure"};
const Enum::YLeaf Native::ServiceTemplate::Linksec::Policy::should_secure {2, "should-secure"};

const Enum::YLeaf Native::Switch_::Provision::ws_c2960x_24pd_l {0, "ws-c2960x-24pd-l"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48ps {1, "ws-c3650-48ps"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24ps {2, "ws-c3650-24ps"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48p {3, "ws-c3850-48p"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24p {4, "ws-c3850-24p"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48t {5, "ws-c3850-48t"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24t {6, "ws-c3850-24t"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48f {7, "ws-c3850-48f"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48u {8, "ws-c3850-48u"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24u {9, "ws-c3850-24u"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12x48u {10, "ws-c3850-12x48u"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24xu {11, "ws-c3850-24xu"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24ux {12, "ws-c3850-24ux"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12s {13, "ws-c3850-12s"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24s {14, "ws-c3850-24s"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12xs {15, "ws-c3850-12xs"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24xs {16, "ws-c3850-24xs"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48xs {17, "ws-c3850-48xs"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48fd {18, "ws-c3650-12x48fd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48uq {19, "ws-c3650-12x48uq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48ur {20, "ws-c3650-12x48ur"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48uz {21, "ws-c3650-12x48uz"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24pd {22, "ws-c3650-24pd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24pdm {23, "ws-c3650-24pdm"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24td {24, "ws-c3650-24td"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24ts {25, "ws-c3650-24ts"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48fqm {26, "ws-c3650-48fqm"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48pd {27, "ws-c3650-48pd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48pq {28, "ws-c3650-48pq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48td {29, "ws-c3650-48td"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48tq {30, "ws-c3650-48tq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48ts {31, "ws-c3650-48ts"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_8x24pd {32, "ws-c3650-8x24pd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_8x24uq {33, "ws-c3650-8x24uq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3750x_24p {34, "ws-c3750x-24p"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3750x_12s {35, "ws-c3750x-12s"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12x48au {36, "ws-c3850-12x48au"};
const Enum::YLeaf Native::Switch_::Provision::c9300_24p {37, "c9300-24p"};
const Enum::YLeaf Native::Switch_::Provision::c9300_24t {38, "c9300-24t"};
const Enum::YLeaf Native::Switch_::Provision::c9300_24u {39, "c9300-24u"};
const Enum::YLeaf Native::Switch_::Provision::c9300_48p {40, "c9300-48p"};
const Enum::YLeaf Native::Switch_::Provision::c9300_48t {41, "c9300-48t"};
const Enum::YLeaf Native::Switch_::Provision::c9300_48u {42, "c9300-48u"};

const Enum::YLeaf Native::SwitchVirtual::Switch_::Mode::virtual_ {0, "virtual"};


}
}

