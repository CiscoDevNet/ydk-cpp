
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_226.hpp"
#include "Cisco_IOS_XE_native_227.hpp"
#include "Cisco_IOS_XE_native_228.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Template::TPINTERFACETEMPLATE::Switchport::Access::Access()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Access::~Access()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::Voice()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::~Voice()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/switchport/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::SpanningTree()
    :
    service_policy{YType::empty, "service-policy"}
        ,
    bpduguard(std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
{
    bpduguard->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::~SpanningTree()
{
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    return service_policy.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast>();
        }
        return portfast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "service-policy")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::Bpduguard()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    edge{YType::empty, "edge"},
    network{YType::empty, "network"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| edge.is_set
	|| network.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(edge.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Template::TPINTERFACETEMPLATE::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "edge" || name == "network")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::StormControl()
    :
    broadcast(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast>())
    , multicast(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast>())
    , action(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Action>())
{
    broadcast->parent = this;
    multicast->parent = this;
    action->parent = this;

    yang_name = "storm-control"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::~StormControl()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "multicast" || name == "action")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Broadcast()
    :
    level(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level>())
{
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>())
    , bps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/broadcast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/broadcast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::~Multicast()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
        ,
    pps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps>())
    , bps(std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps>())
{
    pps->parent = this;
    bps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::~Level()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| (pps !=  nullptr && pps->has_data())
	|| (bps !=  nullptr && bps->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (pps !=  nullptr && pps->has_operation())
	|| (bps !=  nullptr && bps->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "bps" || name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::Pps()
    :
    threshold{YType::str, "threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/multicast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::Bps()
    :
    threshold{YType::str, "threshold"},
    b_unit{YType::str, "b-unit"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| b_unit.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(b_unit.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/multicast/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (b_unit.is_set || is_set(b_unit.yfilter)) leaf_name_data.push_back(b_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-unit")
    {
        b_unit = value;
        b_unit.value_namespace = name_space;
        b_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "b-unit")
    {
        b_unit.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "b-unit")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Action::Action()
    :
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::StormControl::Action::~Action()
{
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Action::has_data() const
{
    if (is_presence_container) return true;
    return shutdown.is_set
	|| trap.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/storm-control/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Template::TPINTERFACETEMPLATE::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Template::TPINTERFACETEMPLATE::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Ip()
    :
    dhcp(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp>())
{
    dhcp->parent = this;

    yang_name = "ip"; yang_parent_name = "TP_INTERFACE_TEMPLATE"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::~Ip()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Dhcp()
    :
    snooping(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping>())
{
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::~Dhcp()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(snooping != nullptr)
    {
        _children["snooping"] = snooping;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/template/Cisco-IOS-XE-template:TP_INTERFACE_TEMPLATE/ip/dhcp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Template::TPINTERFACETEMPLATE::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Process::Process()
    :
    cpu(std::make_shared<Native::Process::Cpu>())
{
    cpu->parent = this;

    yang_name = "process"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::~Process()
{
}

bool Native::Process::has_data() const
{
    if (is_presence_container) return true;
    return (cpu !=  nullptr && cpu->has_data());
}

bool Native::Process::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation());
}

std::string Native::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Native::Process::Cpu>();
        }
        return cpu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    return _children;
}

void Native::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu")
        return true;
    return false;
}

Native::Process::Cpu::Cpu()
    :
    threshold(std::make_shared<Native::Process::Cpu::Threshold>())
{
    threshold->parent = this;

    yang_name = "cpu"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::~Cpu()
{
}

bool Native::Process::Cpu::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Process::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Process::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Process::Cpu::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Process::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Threshold()
    :
    type(std::make_shared<Native::Process::Cpu::Threshold::Type>())
{
    type->parent = this;

    yang_name = "threshold"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::~Threshold()
{
}

bool Native::Process::Cpu::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return (type !=  nullptr && type->has_data());
}

bool Native::Process::Cpu::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Process::Cpu::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Process::Cpu::Threshold::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(type != nullptr)
    {
        _children["type"] = type;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Type()
    :
    interrupt(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>())
    , process(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>())
    , total(std::make_shared<Native::Process::Cpu::Threshold::Type::Total>())
{
    interrupt->parent = this;
    process->parent = this;
    total->parent = this;

    yang_name = "type"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::~Type()
{
}

bool Native::Process::Cpu::Threshold::Type::has_data() const
{
    if (is_presence_container) return true;
    return (interrupt !=  nullptr && interrupt->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Native::Process::Cpu::Threshold::Type::has_operation() const
{
    return is_set(yfilter)
	|| (interrupt !=  nullptr && interrupt->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interrupt")
    {
        if(interrupt == nullptr)
        {
            interrupt = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt>();
        }
        return interrupt;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_>();
        }
        return process;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Process::Cpu::Threshold::Type::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interrupt != nullptr)
    {
        _children["interrupt"] = interrupt;
    }

    if(process != nullptr)
    {
        _children["process"] = process;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt" || name == "process" || name == "total")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Interrupt()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>())
{
    rising->parent = this;

    yang_name = "interrupt"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::~Interrupt()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_data() const
{
    if (is_presence_container) return true;
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interrupt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rising != nullptr)
    {
        _children["rising"] = rising;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::Rising()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "rising"; yang_parent_name = "interrupt"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
        ,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/interrupt/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interval != nullptr)
    {
        _children["interval"] = interval;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::Interval()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
        ,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(falling != nullptr)
    {
        _children["falling"] = falling;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Process_()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>())
{
    rising->parent = this;

    yang_name = "process"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Process_::~Process_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_data() const
{
    if (is_presence_container) return true;
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rising != nullptr)
    {
        _children["rising"] = rising;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::Rising()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "rising"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
        ,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/process/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interval != nullptr)
    {
        _children["interval"] = interval;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::Interval()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
        ,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(falling != nullptr)
    {
        _children["falling"] = falling;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Total()
    :
    rising(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>())
{
    rising->parent = this;

    yang_name = "total"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Total::~Total()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_data() const
{
    if (is_presence_container) return true;
    return (rising !=  nullptr && rising->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::has_operation() const
{
    return is_set(yfilter)
	|| (rising !=  nullptr && rising->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rising")
    {
        if(rising == nullptr)
        {
            rising = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising>();
        }
        return rising;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rising != nullptr)
    {
        _children["rising"] = rising;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::Rising()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "rising"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::~Rising()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rising";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::CpuRange()
    :
    cpu_range{YType::uint8, "cpu-range"}
        ,
    interval(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>())
{
    interval->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "rising"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::~CpuRange()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/process/cpu/threshold/type/total/rising/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interval != nullptr)
    {
        _children["interval"] = interval;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::Interval()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "interval"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::~Interval()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint32, "cpu-range"}
        ,
    falling(std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling>())
{
    falling->parent = this;

    yang_name = "cpu-range"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| (falling !=  nullptr && falling->has_data());
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| (falling !=  nullptr && falling->has_operation());
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "falling")
    {
        if(falling == nullptr)
        {
            falling = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling>();
        }
        return falling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(falling != nullptr)
    {
        _children["falling"] = falling;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling" || name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::Falling()
    :
    cpu_range(this, {"cpu_range"})
{

    yang_name = "falling"; yang_parent_name = "cpu-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::~Falling()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_operation() const
{
    for (std::size_t index=0; index<cpu_range.len(); index++)
    {
        if(cpu_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "falling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-range")
    {
        auto ent_ = std::make_shared<Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_>();
        ent_->parent = this;
        cpu_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range")
        return true;
    return false;
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::CpuRange_()
    :
    cpu_range{YType::uint8, "cpu-range"},
    interval{YType::uint32, "interval"}
{

    yang_name = "cpu-range"; yang_parent_name = "falling"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::~CpuRange_()
{
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_data() const
{
    if (is_presence_container) return true;
    return cpu_range.is_set
	|| interval.is_set;
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu_range.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-range";
    ADD_KEY_TOKEN(cpu_range, "cpu-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu_range.is_set || is_set(cpu_range.yfilter)) leaf_name_data.push_back(cpu_range.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu-range")
    {
        cpu_range = value;
        cpu_range.value_namespace = name_space;
        cpu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu-range")
    {
        cpu_range.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-range" || name == "interval")
        return true;
    return false;
}

Native::Exception::Exception()
    :
    crashinfo(nullptr) // presence node
{

    yang_name = "exception"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Exception::~Exception()
{
}

bool Native::Exception::has_data() const
{
    if (is_presence_container) return true;
    return (crashinfo !=  nullptr && crashinfo->has_data());
}

bool Native::Exception::has_operation() const
{
    return is_set(yfilter)
	|| (crashinfo !=  nullptr && crashinfo->has_operation());
}

std::string Native::Exception::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Exception::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exception";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Exception::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Exception::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crashinfo")
    {
        if(crashinfo == nullptr)
        {
            crashinfo = std::make_shared<Native::Exception::Crashinfo>();
        }
        return crashinfo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Exception::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(crashinfo != nullptr)
    {
        _children["crashinfo"] = crashinfo;
    }

    return _children;
}

void Native::Exception::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Exception::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Exception::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crashinfo")
        return true;
    return false;
}

Native::Exception::Crashinfo::Crashinfo()
    :
    buffersize{YType::uint16, "buffersize"}
{

    yang_name = "crashinfo"; yang_parent_name = "exception"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Exception::Crashinfo::~Crashinfo()
{
}

bool Native::Exception::Crashinfo::has_data() const
{
    if (is_presence_container) return true;
    return buffersize.is_set;
}

bool Native::Exception::Crashinfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter);
}

std::string Native::Exception::Crashinfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/exception/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Exception::Crashinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crashinfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Exception::Crashinfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Exception::Crashinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Exception::Crashinfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Exception::Crashinfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffersize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Exception::Crashinfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffersize")
    {
        buffersize.yfilter = yfilter;
    }
}

bool Native::Exception::Crashinfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffersize")
        return true;
    return false;
}

Native::Iox::Iox()
{

    yang_name = "iox"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Iox::~Iox()
{
}

bool Native::Iox::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Iox::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Iox::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Iox::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iox";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Iox::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Iox::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Iox::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Iox::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Iox::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Iox::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Power::Power()
    :
    redundancy_mode{YType::enumeration, "redundancy-mode"},
    max_min{YType::enumeration, "max-min"},
    inputs{YType::uint8, "inputs"}
        ,
    inline_(nullptr) // presence node
{

    yang_name = "power"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Power::~Power()
{
}

bool Native::Power::has_data() const
{
    if (is_presence_container) return true;
    return redundancy_mode.is_set
	|| max_min.is_set
	|| inputs.is_set
	|| (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Power::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy_mode.yfilter)
	|| ydk::is_set(max_min.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Power::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_mode.is_set || is_set(redundancy_mode.yfilter)) leaf_name_data.push_back(redundancy_mode.get_name_leafdata());
    if (max_min.is_set || is_set(max_min.yfilter)) leaf_name_data.push_back(max_min.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Power::Inline>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inline_ != nullptr)
    {
        _children["inline"] = inline_;
    }

    return _children;
}

void Native::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy-mode")
    {
        redundancy_mode = value;
        redundancy_mode.value_namespace = name_space;
        redundancy_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-min")
    {
        max_min = value;
        max_min.value_namespace = name_space;
        max_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy-mode")
    {
        redundancy_mode.yfilter = yfilter;
    }
    if(value_path == "max-min")
    {
        max_min.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
}

bool Native::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline" || name == "redundancy-mode" || name == "max-min" || name == "inputs")
        return true;
    return false;
}

Native::Power::Inline::Inline()
    :
    consumption(std::make_shared<Native::Power::Inline::Consumption>())
    , logging(std::make_shared<Native::Power::Inline::Logging>())
{
    consumption->parent = this;
    logging->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Power::Inline::~Inline()
{
}

bool Native::Power::Inline::has_data() const
{
    if (is_presence_container) return true;
    return (consumption !=  nullptr && consumption->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::Power::Inline::has_operation() const
{
    return is_set(yfilter)
	|| (consumption !=  nullptr && consumption->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::Power::Inline::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::Inline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consumption")
    {
        if(consumption == nullptr)
        {
            consumption = std::make_shared<Native::Power::Inline::Consumption>();
        }
        return consumption;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Power::Inline::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::Inline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(consumption != nullptr)
    {
        _children["consumption"] = consumption;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void Native::Power::Inline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Power::Inline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Power::Inline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consumption" || name == "logging")
        return true;
    return false;
}

Native::Power::Inline::Consumption::Consumption()
    :
    default_{YType::uint16, "default"}
{

    yang_name = "consumption"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Power::Inline::Consumption::~Consumption()
{
}

bool Native::Power::Inline::Consumption::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Power::Inline::Consumption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Power::Inline::Consumption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::Consumption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consumption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::Consumption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::Inline::Consumption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::Inline::Consumption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Power::Inline::Consumption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline::Consumption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Power::Inline::Consumption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Power::Inline::Logging::Logging()
    :
    global{YType::empty, "global"}
{

    yang_name = "logging"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Power::Inline::Logging::~Logging()
{
}

bool Native::Power::Inline::Logging::has_data() const
{
    if (is_presence_container) return true;
    return global.is_set;
}

bool Native::Power::Inline::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Power::Inline::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-power:power/inline/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Power::Inline::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Power::Inline::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Power::Inline::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Power::Inline::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Power::Inline::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Power::Inline::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Power::Inline::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Vpdn::Vpdn()
    :
    authen_before_forward{YType::empty, "authen-before-forward"},
    enable{YType::empty, "enable"},
    search_order{YType::enumeration, "search-order"}
{

    yang_name = "vpdn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vpdn::~Vpdn()
{
}

bool Native::Vpdn::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_before_forward.is_set
	|| enable.is_set;
}

bool Native::Vpdn::has_operation() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authen_before_forward.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(search_order.yfilter);
}

std::string Native::Vpdn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vpdn:vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_before_forward.is_set || is_set(authen_before_forward.yfilter)) leaf_name_data.push_back(authen_before_forward.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    auto search_order_name_datas = search_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_order_name_datas.begin(), search_order_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward = value;
        authen_before_forward.value_namespace = name_space;
        authen_before_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "search-order")
    {
        search_order.append(value);
    }
}

void Native::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "search-order")
    {
        search_order.yfilter = yfilter;
    }
}

bool Native::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-before-forward" || name == "enable" || name == "search-order")
        return true;
    return false;
}

Native::Esmc::Esmc()
    :
    process{YType::empty, "process"}
{

    yang_name = "esmc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Esmc::~Esmc()
{
}

bool Native::Esmc::has_data() const
{
    if (is_presence_container) return true;
    return process.is_set;
}

bool Native::Esmc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Native::Esmc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Esmc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:esmc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Esmc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Esmc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Esmc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Esmc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Esmc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Native::Esmc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Native::AccessSession::AccessSession()
    :
    attributes(std::make_shared<Native::AccessSession::Attributes>())
    , mac_move(std::make_shared<Native::AccessSession::MacMove>())
{
    attributes->parent = this;
    mac_move->parent = this;

    yang_name = "access-session"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AccessSession::~AccessSession()
{
}

bool Native::AccessSession::has_data() const
{
    if (is_presence_container) return true;
    return (attributes !=  nullptr && attributes->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::AccessSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Native::AccessSession::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::AccessSession::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(mac_move != nullptr)
    {
        _children["mac-move"] = mac_move;
    }

    return _children;
}

void Native::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "mac-move")
        return true;
    return false;
}

Native::AccessSession::Attributes::Attributes()
    :
    filter_list(std::make_shared<Native::AccessSession::Attributes::FilterList>())
{
    filter_list->parent = this;

    yang_name = "attributes"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AccessSession::Attributes::~Attributes()
{
}

bool Native::AccessSession::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return (filter_list !=  nullptr && filter_list->has_data());
}

bool Native::AccessSession::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| (filter_list !=  nullptr && filter_list->has_operation());
}

std::string Native::AccessSession::Attributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AccessSession::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter-list")
    {
        if(filter_list == nullptr)
        {
            filter_list = std::make_shared<Native::AccessSession::Attributes::FilterList>();
        }
        return filter_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AccessSession::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(filter_list != nullptr)
    {
        _children["filter-list"] = filter_list;
    }

    return _children;
}

void Native::AccessSession::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter-list")
        return true;
    return false;
}

Native::AccessSession::Attributes::FilterList::FilterList()
    :
    list(this, {"name"})
{

    yang_name = "filter-list"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AccessSession::Attributes::FilterList::~FilterList()
{
}

bool Native::AccessSession::Attributes::FilterList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::AccessSession::Attributes::FilterList::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::AccessSession::Attributes::FilterList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AccessSession::Attributes::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<Native::AccessSession::Attributes::FilterList::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AccessSession::Attributes::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::AccessSession::Attributes::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::AccessSession::Attributes::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::AccessSession::Attributes::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::AccessSession::Attributes::FilterList::List::List()
    :
    name{YType::str, "name"},
    cdp{YType::empty, "cdp"},
    dhcp{YType::empty, "dhcp"},
    lldp{YType::empty, "lldp"}
{

    yang_name = "list"; yang_parent_name = "filter-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AccessSession::Attributes::FilterList::List::~List()
{
}

bool Native::AccessSession::Attributes::FilterList::List::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| cdp.is_set
	|| dhcp.is_set
	|| lldp.is_set;
}

bool Native::AccessSession::Attributes::FilterList::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(lldp.yfilter);
}

std::string Native::AccessSession::Attributes::FilterList::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/attributes/filter-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::Attributes::FilterList::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::Attributes::FilterList::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AccessSession::Attributes::FilterList::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AccessSession::Attributes::FilterList::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::AccessSession::Attributes::FilterList::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AccessSession::Attributes::FilterList::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
}

bool Native::AccessSession::Attributes::FilterList::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "cdp" || name == "dhcp" || name == "lldp")
        return true;
    return false;
}

Native::AccessSession::MacMove::MacMove()
    :
    deny{YType::empty, "deny"}
{

    yang_name = "mac-move"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::AccessSession::MacMove::~MacMove()
{
}

bool Native::AccessSession::MacMove::has_data() const
{
    if (is_presence_container) return true;
    return deny.is_set;
}

bool Native::AccessSession::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deny.yfilter);
}

std::string Native::AccessSession::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:access-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::AccessSession::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::AccessSession::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deny.is_set || is_set(deny.yfilter)) leaf_name_data.push_back(deny.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::AccessSession::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::AccessSession::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::AccessSession::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny")
    {
        deny = value;
        deny.value_namespace = name_space;
        deny.value_namespace_prefix = name_space_prefix;
    }
}

void Native::AccessSession::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny")
    {
        deny.yfilter = yfilter;
    }
}

bool Native::AccessSession::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny")
        return true;
    return false;
}

Native::Authentication::Authentication()
    :
    command(std::make_shared<Native::Authentication::Command>())
    , critical(std::make_shared<Native::Authentication::Critical>())
    , mac_move(std::make_shared<Native::Authentication::MacMove>())
{
    command->parent = this;
    critical->parent = this;
    mac_move->parent = this;

    yang_name = "authentication"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::~Authentication()
{
}

bool Native::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (command !=  nullptr && command->has_data())
	|| (critical !=  nullptr && critical->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (critical !=  nullptr && critical->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Authentication::Command>();
        }
        return command;
    }

    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Authentication::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::Authentication::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(command != nullptr)
    {
        _children["command"] = command;
    }

    if(critical != nullptr)
    {
        _children["critical"] = critical;
    }

    if(mac_move != nullptr)
    {
        _children["mac-move"] = mac_move;
    }

    return _children;
}

void Native::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "critical" || name == "mac-move")
        return true;
    return false;
}

Native::Authentication::Command::Command()
    :
    bounce_port(std::make_shared<Native::Authentication::Command::BouncePort>())
    , disable_port(std::make_shared<Native::Authentication::Command::DisablePort>())
{
    bounce_port->parent = this;
    disable_port->parent = this;

    yang_name = "command"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::Command::~Command()
{
}

bool Native::Authentication::Command::has_data() const
{
    if (is_presence_container) return true;
    return (bounce_port !=  nullptr && bounce_port->has_data())
	|| (disable_port !=  nullptr && disable_port->has_data());
}

bool Native::Authentication::Command::has_operation() const
{
    return is_set(yfilter)
	|| (bounce_port !=  nullptr && bounce_port->has_operation())
	|| (disable_port !=  nullptr && disable_port->has_operation());
}

std::string Native::Authentication::Command::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bounce-port")
    {
        if(bounce_port == nullptr)
        {
            bounce_port = std::make_shared<Native::Authentication::Command::BouncePort>();
        }
        return bounce_port;
    }

    if(child_yang_name == "disable-port")
    {
        if(disable_port == nullptr)
        {
            disable_port = std::make_shared<Native::Authentication::Command::DisablePort>();
        }
        return disable_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bounce_port != nullptr)
    {
        _children["bounce-port"] = bounce_port;
    }

    if(disable_port != nullptr)
    {
        _children["disable-port"] = disable_port;
    }

    return _children;
}

void Native::Authentication::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bounce-port" || name == "disable-port")
        return true;
    return false;
}

Native::Authentication::Command::BouncePort::BouncePort()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bounce-port"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::Command::BouncePort::~BouncePort()
{
}

bool Native::Authentication::Command::BouncePort::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Authentication::Command::BouncePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Authentication::Command::BouncePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::BouncePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bounce-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::BouncePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::Command::BouncePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::Command::BouncePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Authentication::Command::BouncePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Command::BouncePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Authentication::Command::BouncePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Authentication::Command::DisablePort::DisablePort()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "disable-port"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::Command::DisablePort::~DisablePort()
{
}

bool Native::Authentication::Command::DisablePort::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Authentication::Command::DisablePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Authentication::Command::DisablePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::DisablePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::DisablePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::Command::DisablePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::Command::DisablePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Authentication::Command::DisablePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Command::DisablePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Authentication::Command::DisablePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Authentication::Critical::Critical()
    :
    recovery(std::make_shared<Native::Authentication::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::Critical::~Critical()
{
}

bool Native::Authentication::Critical::has_data() const
{
    if (is_presence_container) return true;
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Authentication::Critical::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Authentication::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Authentication::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery != nullptr)
    {
        _children["recovery"] = recovery;
    }

    return _children;
}

void Native::Authentication::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Authentication::Critical::Recovery::Recovery()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::Critical::Recovery::~Recovery()
{
}

bool Native::Authentication::Critical::Recovery::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set;
}

bool Native::Authentication::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Authentication::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Authentication::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Authentication::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Authentication::MacMove::MacMove()
    :
    permit{YType::empty, "permit"}
{

    yang_name = "mac-move"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Authentication::MacMove::~MacMove()
{
}

bool Native::Authentication::MacMove::has_data() const
{
    if (is_presence_container) return true;
    return permit.is_set;
}

bool Native::Authentication::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permit.yfilter);
}

std::string Native::Authentication::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permit.is_set || is_set(permit.yfilter)) leaf_name_data.push_back(permit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Authentication::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Authentication::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Authentication::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit")
    {
        permit = value;
        permit.value_namespace = name_space;
        permit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit")
    {
        permit.yfilter = yfilter;
    }
}

bool Native::Authentication::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
        return true;
    return false;
}

Native::Dialer::Dialer()
    :
    watch_list(this, {"number"})
{

    yang_name = "dialer"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dialer::~Dialer()
{
}

bool Native::Dialer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<watch_list.len(); index++)
    {
        if(watch_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Dialer::has_operation() const
{
    for (std::size_t index=0; index<watch_list.len(); index++)
    {
        if(watch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Dialer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellular:dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watch-list")
    {
        auto ent_ = std::make_shared<Native::Dialer::WatchList>();
        ent_->parent = this;
        watch_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : watch_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watch-list")
        return true;
    return false;
}

Native::Dialer::WatchList::WatchList()
    :
    number{YType::uint8, "number"}
        ,
    delay(this, {"interval"})
    , ip(this, {"address"})
{

    yang_name = "watch-list"; yang_parent_name = "dialer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Dialer::WatchList::~WatchList()
{
}

bool Native::Dialer::WatchList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<delay.len(); index++)
    {
        if(delay[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return number.is_set;
}

bool Native::Dialer::WatchList::has_operation() const
{
    for (std::size_t index=0; index<delay.len(); index++)
    {
        if(delay[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Dialer::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cellular:dialer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Dialer::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        auto ent_ = std::make_shared<Native::Dialer::WatchList::Delay>();
        ent_->parent = this;
        delay.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Dialer::WatchList::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : delay.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Dialer::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "ip" || name == "number")
        return true;
    return false;
}

Native::Dialer::WatchList::Delay::Delay()
    :
    interval{YType::enumeration, "interval"},
    initial{YType::empty, "initial"},
    delay_time{YType::uint32, "delay-time"}
{

    yang_name = "delay"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Dialer::WatchList::Delay::~Delay()
{
}

bool Native::Dialer::WatchList::Delay::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| initial.is_set
	|| delay_time.is_set;
}

bool Native::Dialer::WatchList::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(delay_time.yfilter);
}

std::string Native::Dialer::WatchList::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    ADD_KEY_TOKEN(interval, "interval");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (delay_time.is_set || is_set(delay_time.yfilter)) leaf_name_data.push_back(delay_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::WatchList::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::WatchList::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dialer::WatchList::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-time")
    {
        delay_time = value;
        delay_time.value_namespace = name_space;
        delay_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Dialer::WatchList::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "delay-time")
    {
        delay_time.yfilter = yfilter;
    }
}

bool Native::Dialer::WatchList::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "initial" || name == "delay-time")
        return true;
    return false;
}

Native::Dialer::WatchList::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "ip"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Dialer::WatchList::Ip::~Ip()
{
}

bool Native::Dialer::WatchList::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Dialer::WatchList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Dialer::WatchList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Dialer::WatchList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Dialer::WatchList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Dialer::WatchList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Dialer::WatchList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Dialer::WatchList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Dialer::WatchList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::DialerList::DialerList()
    :
    group_number{YType::uint8, "group-number"}
        ,
    protocol(this, {"protocol_type"})
{

    yang_name = "dialer-list"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::DialerList::~DialerList()
{
}

bool Native::DialerList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return group_number.is_set;
}

bool Native::DialerList::has_operation() const
{
    for (std::size_t index=0; index<protocol.len(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter);
}

std::string Native::DialerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DialerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cellular:dialer-list";
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DialerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::DialerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        auto ent_ = std::make_shared<Native::DialerList::Protocol>();
        ent_->parent = this;
        protocol.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::DialerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::DialerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DialerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::DialerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "group-number")
        return true;
    return false;
}

Native::DialerList::Protocol::Protocol()
    :
    protocol_type{YType::enumeration, "protocol-type"},
    access{YType::enumeration, "access"},
    list_name{YType::str, "list-name"}
{

    yang_name = "protocol"; yang_parent_name = "dialer-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::DialerList::Protocol::~Protocol()
{
}

bool Native::DialerList::Protocol::has_data() const
{
    if (is_presence_container) return true;
    return protocol_type.is_set
	|| access.is_set
	|| list_name.is_set;
}

bool Native::DialerList::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_type.yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(list_name.yfilter);
}

std::string Native::DialerList::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    ADD_KEY_TOKEN(protocol_type, "protocol-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DialerList::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.yfilter)) leaf_name_data.push_back(protocol_type.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::DialerList::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::DialerList::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::DialerList::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
        protocol_type.value_namespace = name_space;
        protocol_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DialerList::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-type")
    {
        protocol_type.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
}

bool Native::DialerList::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-type" || name == "access" || name == "list-name")
        return true;
    return false;
}

Native::Vstack::Vstack()
    :
    director{YType::str, "director"}
{

    yang_name = "vstack"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Vstack::~Vstack()
{
}

bool Native::Vstack::has_data() const
{
    if (is_presence_container) return true;
    return director.is_set;
}

bool Native::Vstack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(director.yfilter);
}

std::string Native::Vstack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vstack:vstack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vstack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (director.is_set || is_set(director.yfilter)) leaf_name_data.push_back(director.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Vstack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "director")
    {
        director = value;
        director.value_namespace = name_space;
        director.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vstack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "director")
    {
        director.yfilter = yfilter;
    }
}

bool Native::Vstack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "director")
        return true;
    return false;
}

Native::EtAnalytics::EtAnalytics()
    :
    inactive_timeout{YType::uint32, "inactive-timeout"}
        ,
    ip(std::make_shared<Native::EtAnalytics::Ip>())
    , whitelist(std::make_shared<Native::EtAnalytics::Whitelist>())
{
    ip->parent = this;
    whitelist->parent = this;

    yang_name = "et-analytics"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::EtAnalytics::~EtAnalytics()
{
}

bool Native::EtAnalytics::has_data() const
{
    if (is_presence_container) return true;
    return inactive_timeout.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::EtAnalytics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inactive_timeout.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::EtAnalytics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-eta:et-analytics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inactive_timeout.is_set || is_set(inactive_timeout.yfilter)) leaf_name_data.push_back(inactive_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::EtAnalytics::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::EtAnalytics::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(whitelist != nullptr)
    {
        _children["whitelist"] = whitelist;
    }

    return _children;
}

void Native::EtAnalytics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inactive-timeout")
    {
        inactive_timeout = value;
        inactive_timeout.value_namespace = name_space;
        inactive_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inactive-timeout")
    {
        inactive_timeout.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "whitelist" || name == "inactive-timeout")
        return true;
    return false;
}

Native::EtAnalytics::Ip::Ip()
    :
    flow_export(std::make_shared<Native::EtAnalytics::Ip::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "ip"; yang_parent_name = "et-analytics"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::~Ip()
{
}

bool Native::EtAnalytics::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::EtAnalytics::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::EtAnalytics::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::EtAnalytics::Ip::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_export != nullptr)
    {
        _children["flow-export"] = flow_export;
    }

    return _children;
}

void Native::EtAnalytics::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::FlowExport()
    :
    destination(this, {"address", "port"})
    , destination_vrf(std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf>())
{
    destination_vrf->parent = this;

    yang_name = "flow-export"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::~FlowExport()
{
}

bool Native::EtAnalytics::Ip::FlowExport::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return (destination_vrf !=  nullptr && destination_vrf->has_data());
}

bool Native::EtAnalytics::Ip::FlowExport::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (destination_vrf !=  nullptr && destination_vrf->has_operation());
}

std::string Native::EtAnalytics::Ip::FlowExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<Native::EtAnalytics::Ip::FlowExport::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    if(child_yang_name == "destination-vrf")
    {
        if(destination_vrf == nullptr)
        {
            destination_vrf = std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf>();
        }
        return destination_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(destination_vrf != nullptr)
    {
        _children["destination-vrf"] = destination_vrf;
    }

    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "destination-vrf")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::Destination::Destination()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"}
{

    yang_name = "destination"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::Destination::~Destination()
{
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set;
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Ip::FlowExport::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Ip::FlowExport::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::DestinationVrf()
    :
    destination(this, {"address", "port", "vrf"})
{

    yang_name = "destination-vrf"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::~DestinationVrf()
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::Destination()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    vrf{YType::str, "vrf"}
{

    yang_name = "destination"; yang_parent_name = "destination-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::~Destination()
{
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set
	|| vrf.is_set;
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/ip/flow-export/destination-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Ip::FlowExport::DestinationVrf::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "vrf")
        return true;
    return false;
}

Native::EtAnalytics::Whitelist::Whitelist()
    :
    acl{YType::str, "acl"}
{

    yang_name = "whitelist"; yang_parent_name = "et-analytics"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::EtAnalytics::Whitelist::~Whitelist()
{
}

bool Native::EtAnalytics::Whitelist::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set;
}

bool Native::EtAnalytics::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::EtAnalytics::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-eta:et-analytics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::EtAnalytics::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::EtAnalytics::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::EtAnalytics::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::EtAnalytics::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::EtAnalytics::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::EtAnalytics::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::EtAnalytics::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl")
        return true;
    return false;
}

Native::Arp::Arp()
    :
    arp_entry(this, {"ip"})
    , vrf(this, {"vrf_name"})
    , access_list(this, {"name"})
{

    yang_name = "arp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Arp::~Arp()
{
}

bool Native::Arp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<access_list.len(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<access_list.len(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-arp:arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-entry")
    {
        auto ent_ = std::make_shared<Native::Arp::ArpEntry>();
        ent_->parent = this;
        arp_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Arp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:access-list")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList>();
        ent_->parent = this;
        access_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : arp_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : access_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-entry" || name == "vrf" || name == "access-list")
        return true;
    return false;
}

Native::Arp::ArpEntry::ArpEntry()
    :
    ip{YType::str, "ip"},
    hardware_address{YType::str, "hardware-address"},
    arp_type{YType::enumeration, "arp-type"},
    alias{YType::empty, "alias"}
{

    yang_name = "arp-entry"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Arp::ArpEntry::~ArpEntry()
{
}

bool Native::Arp::ArpEntry::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| hardware_address.is_set
	|| arp_type.is_set
	|| alias.is_set;
}

bool Native::Arp::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(arp_type.yfilter)
	|| ydk::is_set(alias.yfilter);
}

std::string Native::Arp::ArpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (arp_type.is_set || is_set(arp_type.yfilter)) leaf_name_data.push_back(arp_type.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-type")
    {
        arp_type = value;
        arp_type.value_namespace = name_space;
        arp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
    if(value_path == "arp-type")
    {
        arp_type.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
}

bool Native::Arp::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "hardware-address" || name == "arp-type" || name == "alias")
        return true;
    return false;
}

Native::Arp::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    arp_entry(this, {"ip"})
{

    yang_name = "vrf"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Arp::Vrf::~Vrf()
{
}

bool Native::Arp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Arp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.len(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Arp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "arp-entry")
    {
        auto ent_ = std::make_shared<Native::Arp::Vrf::ArpEntry>();
        ent_->parent = this;
        arp_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : arp_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Arp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp-entry" || name == "vrf-name")
        return true;
    return false;
}

Native::Arp::Vrf::ArpEntry::ArpEntry()
    :
    ip{YType::str, "ip"},
    hardware_address{YType::str, "hardware-address"},
    arp_type{YType::enumeration, "arp-type"},
    alias{YType::empty, "alias"}
{

    yang_name = "arp-entry"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::Vrf::ArpEntry::~ArpEntry()
{
}

bool Native::Arp::Vrf::ArpEntry::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| hardware_address.is_set
	|| arp_type.is_set
	|| alias.is_set;
}

bool Native::Arp::Vrf::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(hardware_address.yfilter)
	|| ydk::is_set(arp_type.yfilter)
	|| ydk::is_set(alias.yfilter);
}

std::string Native::Arp::Vrf::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::Vrf::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (arp_type.is_set || is_set(arp_type.yfilter)) leaf_name_data.push_back(arp_type.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::Vrf::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::Vrf::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::Vrf::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-type")
    {
        arp_type = value;
        arp_type.value_namespace = name_space;
        arp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::Vrf::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
    if(value_path == "arp-type")
    {
        arp_type.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
}

bool Native::Arp::Vrf::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "hardware-address" || name == "arp-type" || name == "alias")
        return true;
    return false;
}

Native::Arp::AccessList::AccessList()
    :
    name{YType::str, "name"}
        ,
    permit(std::make_shared<Native::Arp::AccessList::Permit>())
    , deny(std::make_shared<Native::Arp::AccessList::Deny>())
    , default_(std::make_shared<Native::Arp::AccessList::Default>())
    , no(std::make_shared<Native::Arp::AccessList::No>())
{
    permit->parent = this;
    deny->parent = this;
    default_->parent = this;
    no->parent = this;

    yang_name = "access-list"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Arp::AccessList::~AccessList()
{
}

bool Native::Arp::AccessList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (permit !=  nullptr && permit->has_data())
	|| (deny !=  nullptr && deny->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (no !=  nullptr && no->has_data());
}

bool Native::Arp::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permit !=  nullptr && permit->has_operation())
	|| (deny !=  nullptr && deny->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (no !=  nullptr && no->has_operation());
}

std::string Native::Arp::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Arp::AccessList::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Arp::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Arp::AccessList::Default>();
        }
        return default_;
    }

    if(child_yang_name == "no")
    {
        if(no == nullptr)
        {
            no = std::make_shared<Native::Arp::AccessList::No>();
        }
        return no;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(permit != nullptr)
    {
        _children["permit"] = permit;
    }

    if(deny != nullptr)
    {
        _children["deny"] = deny;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(no != nullptr)
    {
        _children["no"] = no;
    }

    return _children;
}

void Native::Arp::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit" || name == "deny" || name == "default" || name == "no" || name == "name")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Ip>())
    , request(std::make_shared<Native::Arp::AccessList::Permit::Request>())
    , response(std::make_shared<Native::Arp::AccessList::Permit::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::~Permit()
{
}

bool Native::Arp::AccessList::Permit::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(response != nullptr)
    {
        _children["response"] = response;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::Permit::Request::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::~Response()
{
}

bool Native::Arp::AccessList::Permit::Response::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_data() const
{
    if (is_presence_container) return true;
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::Host()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::Host()
    :
    ip_address(this, {"ip_address"})
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.len(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress>();
        ent_->parent = this;
        ip_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    sender_mac_address(this, {"mac_address"})
    , any(nullptr) // presence node
    , host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    if (is_presence_container) return true;
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
    :
    sender_mac_address(this, {"mac_address"})
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.len(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        ent_->parent = this;
        sender_mac_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_mac_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Deny()
    :
    ip(std::make_shared<Native::Arp::AccessList::Deny::Ip>())
    , request(std::make_shared<Native::Arp::AccessList::Deny::Request>())
    , response(std::make_shared<Native::Arp::AccessList::Deny::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Deny::~Deny()
{
}

bool Native::Arp::AccessList::Deny::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Deny::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Deny::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Deny::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(response != nullptr)
    {
        _children["response"] = response;
    }

    return _children;
}

void Native::Arp::AccessList::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::Ip()
    :
    sender_ip_address(this, {"ip_address"})
    , any(std::make_shared<Native::Arp::AccessList::Deny::Ip::Any>())
    , host(std::make_shared<Native::Arp::AccessList::Deny::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Deny::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Deny::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Deny::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.len(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Deny::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Deny::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-ip-address")
    {
        auto ent_ = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress>();
        ent_->parent = this;
        sender_ip_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Deny::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Deny::Ip::Host>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Deny::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sender_ip_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(any != nullptr)
    {
        _children["any"] = any;
    }

    if(host != nullptr)
    {
        _children["host"] = host;
    }

    return _children;
}

void Native::Arp::AccessList::Deny::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Deny::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Deny::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-ip-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
        ,
    mac(std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Arp::AccessList::Deny::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Deny::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Arp::AccessList::Deny::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Deny::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Deny::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

const Enum::YLeaf Native::Power::RedundancyMode::combined {0, "combined"};
const Enum::YLeaf Native::Power::RedundancyMode::redundant {1, "redundant"};

const Enum::YLeaf Native::Power::MaxMin::max {0, "max"};

const Enum::YLeaf Native::Vpdn::SearchOrder::dnis {0, "dnis"};
const Enum::YLeaf Native::Vpdn::SearchOrder::domain {1, "domain"};
const Enum::YLeaf Native::Vpdn::SearchOrder::multihop_hostname {2, "multihop-hostname"};

const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::connect {0, "connect"};
const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::disconnect {1, "disconnect"};
const Enum::YLeaf Native::Dialer::WatchList::Delay::Interval::route_check {2, "route-check"};

const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::appletalk {0, "appletalk"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::bridge {1, "bridge"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns {2, "clns"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns_es {3, "clns_es"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::clns_is {4, "clns_is"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet {5, "decnet"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_node {6, "decnet_node"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_router_L1 {7, "decnet_router-L1"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::decnet_router_L2 {8, "decnet_router-L2"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ip {9, "ip"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ipv6 {10, "ipv6"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::ipx {11, "ipx"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::llc2 {12, "llc2"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::netbios {13, "netbios"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::novell {14, "novell"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::vines {15, "vines"};
const Enum::YLeaf Native::DialerList::Protocol::ProtocolType::xns {16, "xns"};

const Enum::YLeaf Native::DialerList::Protocol::Access::deny {0, "deny"};
const Enum::YLeaf Native::DialerList::Protocol::Access::list {1, "list"};
const Enum::YLeaf Native::DialerList::Protocol::Access::permit {2, "permit"};

const Enum::YLeaf Native::Arp::ArpEntry::ArpType::ARPA {0, "ARPA"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SAP {1, "SAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SMDS {2, "SMDS"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SNAP {3, "SNAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_A {4, "SRP-A"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_B {5, "SRP-B"};

const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::ARPA {0, "ARPA"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SAP {1, "SAP"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SMDS {2, "SMDS"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SNAP {3, "SNAP"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SRP_A {4, "SRP-A"};
const Enum::YLeaf Native::Arp::Vrf::ArpEntry::ArpType::SRP_B {5, "SRP-B"};


}
}

