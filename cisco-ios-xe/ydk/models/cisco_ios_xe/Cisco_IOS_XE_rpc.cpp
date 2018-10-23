
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_rpc.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_rpc {

Switch::Switch()
    :
    input(std::make_shared<Switch::Input>())
    , output(std::make_shared<Switch::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "switch"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Switch::~Switch()
{
}

bool Switch::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Switch::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Switch::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Switch::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Switch::clone_ptr() const
{
    return std::make_shared<Switch>();
}

std::string Switch::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Switch::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Switch::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Switch::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Switch::Input::Input()
    :
    y_switch_number{YType::uint8, "_switch-number"},
    priority{YType::uint8, "priority"},
    renumber{YType::uint8, "renumber"}
        ,
    statck(std::make_shared<Switch::Input::Statck>())
{
    statck->parent = this;

    yang_name = "input"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Switch::Input::~Input()
{
}

bool Switch::Input::has_data() const
{
    if (is_presence_container) return true;
    return y_switch_number.is_set
	|| priority.is_set
	|| renumber.is_set
	|| (statck !=  nullptr && statck->has_data());
}

bool Switch::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_switch_number.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(renumber.yfilter)
	|| (statck !=  nullptr && statck->has_operation());
}

std::string Switch::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Switch::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Switch::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_switch_number.is_set || is_set(y_switch_number.yfilter)) leaf_name_data.push_back(y_switch_number.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (renumber.is_set || is_set(renumber.yfilter)) leaf_name_data.push_back(renumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Switch::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statck")
    {
        if(statck == nullptr)
        {
            statck = std::make_shared<Switch::Input::Statck>();
        }
        return statck;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Switch::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statck != nullptr)
    {
        _children["statck"] = statck;
    }

    return _children;
}

void Switch::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_switch-number")
    {
        y_switch_number = value;
        y_switch_number.value_namespace = name_space;
        y_switch_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "renumber")
    {
        renumber = value;
        renumber.value_namespace = name_space;
        renumber.value_namespace_prefix = name_space_prefix;
    }
}

void Switch::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_switch-number")
    {
        y_switch_number.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "renumber")
    {
        renumber.yfilter = yfilter;
    }
}

bool Switch::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statck" || name == "_switch-number" || name == "priority" || name == "renumber")
        return true;
    return false;
}

Switch::Input::Statck::Statck()
    :
    port{YType::uint8, "port"}
{

    yang_name = "statck"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Switch::Input::Statck::~Statck()
{
}

bool Switch::Input::Statck::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Switch::Input::Statck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Switch::Input::Statck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:switch/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Switch::Input::Statck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statck";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Switch::Input::Statck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Switch::Input::Statck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Switch::Input::Statck::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Switch::Input::Statck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Switch::Input::Statck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Switch::Input::Statck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Switch::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Switch::Output::~Output()
{
}

bool Switch::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Switch::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Switch::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Switch::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Switch::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Switch::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Switch::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Switch::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Switch::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Switch::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Default::Default()
    :
    input(std::make_shared<Default::Input>())
    , output(std::make_shared<Default::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "default"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Default::~Default()
{
}

bool Default::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Default::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Default::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Default::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Default::clone_ptr() const
{
    return std::make_shared<Default>();
}

std::string Default::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Default::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Default::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Default::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Default::Input::Input()
    :
    interface{YType::str, "interface"}
{

    yang_name = "input"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Default::Input::~Input()
{
}

bool Default::Input::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Default::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Default::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:default/" << get_segment_path();
    return path_buffer.str();
}

std::string Default::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Default::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Default::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Default::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Default::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Default::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Default::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Default::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Default::Output::~Output()
{
}

bool Default::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Default::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Default::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:default/" << get_segment_path();
    return path_buffer.str();
}

std::string Default::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Default::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Default::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Default::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Default::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Default::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Default::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Clear::Clear()
    :
    input(std::make_shared<Clear::Input>())
    , output(std::make_shared<Clear::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "clear"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Clear::~Clear()
{
}

bool Clear::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Clear::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Clear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Clear::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Clear::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Clear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Clear::clone_ptr() const
{
    return std::make_shared<Clear>();
}

std::string Clear::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Clear::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Clear::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Clear::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Clear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Clear::Input::Input()
    :
    interface{YType::str, "interface"},
    count{YType::str, "count"}
        ,
    flow(std::make_shared<Clear::Input::Flow>())
    , ip(std::make_shared<Clear::Input::Ip>())
    , arp_cache(nullptr) // presence node
    , aaa(std::make_shared<Clear::Input::Aaa>())
    , platform(std::make_shared<Clear::Input::Platform>())
    , zone_pair(std::make_shared<Clear::Input::ZonePair>())
{
    flow->parent = this;
    ip->parent = this;
    aaa->parent = this;
    platform->parent = this;
    zone_pair->parent = this;

    yang_name = "input"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::~Input()
{
}

bool Clear::Input::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| count.is_set
	|| (flow !=  nullptr && flow->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (arp_cache !=  nullptr && arp_cache->has_data())
	|| (aaa !=  nullptr && aaa->has_data())
	|| (platform !=  nullptr && platform->has_data())
	|| (zone_pair !=  nullptr && zone_pair->has_data());
}

bool Clear::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(count.yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (arp_cache !=  nullptr && arp_cache->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (platform !=  nullptr && platform->has_operation())
	|| (zone_pair !=  nullptr && zone_pair->has_operation());
}

std::string Clear::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Clear::Input::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Clear::Input::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "arp-cache")
    {
        if(arp_cache == nullptr)
        {
            arp_cache = std::make_shared<Clear::Input::ArpCache>();
        }
        return arp_cache;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Clear::Input::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Clear::Input::Platform>();
        }
        return platform;
    }

    if(child_yang_name == "zone-pair")
    {
        if(zone_pair == nullptr)
        {
            zone_pair = std::make_shared<Clear::Input::ZonePair>();
        }
        return zone_pair;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(arp_cache != nullptr)
    {
        _children["arp-cache"] = arp_cache;
    }

    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    if(platform != nullptr)
    {
        _children["platform"] = platform;
    }

    if(zone_pair != nullptr)
    {
        _children["zone-pair"] = zone_pair;
    }

    return _children;
}

void Clear::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Clear::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "ip" || name == "arp-cache" || name == "aaa" || name == "platform" || name == "zone-pair" || name == "interface" || name == "count")
        return true;
    return false;
}

Clear::Input::Flow::Flow()
    :
    monitor(std::make_shared<Clear::Input::Flow::Monitor>())
    , exporter(std::make_shared<Clear::Input::Flow::Exporter>())
{
    monitor->parent = this;
    exporter->parent = this;

    yang_name = "flow"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Flow::~Flow()
{
}

bool Clear::Input::Flow::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data())
	|| (exporter !=  nullptr && exporter->has_data());
}

bool Clear::Input::Flow::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (exporter !=  nullptr && exporter->has_operation());
}

std::string Clear::Input::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Clear::Input::Flow::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Clear::Input::Flow::Exporter>();
        }
        return exporter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    if(exporter != nullptr)
    {
        _children["exporter"] = exporter;
    }

    return _children;
}

void Clear::Input::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "exporter")
        return true;
    return false;
}

Clear::Input::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    force_export{YType::empty, "force-export"},
    statistics{YType::empty, "statistics"}
        ,
    cache(std::make_shared<Clear::Input::Flow::Monitor::Cache>())
{
    cache->parent = this;

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Flow::Monitor::~Monitor()
{
}

bool Clear::Input::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| force_export.is_set
	|| statistics.is_set
	|| (cache !=  nullptr && cache->has_data());
}

bool Clear::Input::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(force_export.yfilter)
	|| ydk::is_set(statistics.yfilter)
	|| (cache !=  nullptr && cache->has_operation());
}

std::string Clear::Input::Flow::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (force_export.is_set || is_set(force_export.yfilter)) leaf_name_data.push_back(force_export.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Clear::Input::Flow::Monitor::Cache>();
        }
        return cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cache != nullptr)
    {
        _children["cache"] = cache;
    }

    return _children;
}

void Clear::Input::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force-export")
    {
        force_export = value;
        force_export.value_namespace = name_space;
        force_export.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "force-export")
    {
        force_export.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Clear::Input::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "name" || name == "force-export" || name == "statistics")
        return true;
    return false;
}

Clear::Input::Flow::Monitor::Cache::Cache()
    :
    force_export{YType::empty, "force-export"}
{

    yang_name = "cache"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Flow::Monitor::Cache::~Cache()
{
}

bool Clear::Input::Flow::Monitor::Cache::has_data() const
{
    if (is_presence_container) return true;
    return force_export.is_set;
}

bool Clear::Input::Flow::Monitor::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force_export.yfilter);
}

std::string Clear::Input::Flow::Monitor::Cache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/flow/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Flow::Monitor::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Flow::Monitor::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_export.is_set || is_set(force_export.yfilter)) leaf_name_data.push_back(force_export.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Flow::Monitor::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Flow::Monitor::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Flow::Monitor::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force-export")
    {
        force_export = value;
        force_export.value_namespace = name_space;
        force_export.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Flow::Monitor::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force-export")
    {
        force_export.yfilter = yfilter;
    }
}

bool Clear::Input::Flow::Monitor::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force-export")
        return true;
    return false;
}

Clear::Input::Flow::Exporter::Exporter()
    :
    name{YType::str, "name"},
    statistics{YType::empty, "statistics"}
{

    yang_name = "exporter"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Flow::Exporter::~Exporter()
{
}

bool Clear::Input::Flow::Exporter::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| statistics.is_set;
}

bool Clear::Input::Flow::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(statistics.yfilter);
}

std::string Clear::Input::Flow::Exporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Flow::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Flow::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Flow::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Flow::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Flow::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Flow::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Clear::Input::Flow::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "statistics")
        return true;
    return false;
}

Clear::Input::Ip::Ip()
    :
    dhcp(std::make_shared<Clear::Input::Ip::Dhcp>())
    , ospf(std::make_shared<Clear::Input::Ip::Ospf>())
    , bgp(std::make_shared<Clear::Input::Ip::Bgp>())
{
    dhcp->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "ip"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Ip::~Ip()
{
}

bool Clear::Input::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp !=  nullptr && dhcp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Clear::Input::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Clear::Input::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Clear::Input::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Clear::Input::Ip::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Clear::Input::Ip::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Clear::Input::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "ospf" || name == "bgp")
        return true;
    return false;
}

Clear::Input::Ip::Dhcp::Dhcp()
    :
    binding(std::make_shared<Clear::Input::Ip::Dhcp::Binding>())
{
    binding->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Ip::Dhcp::~Dhcp()
{
}

bool Clear::Input::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (binding !=  nullptr && binding->has_data());
}

bool Clear::Input::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (binding !=  nullptr && binding->has_operation());
}

std::string Clear::Input::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding")
    {
        if(binding == nullptr)
        {
            binding = std::make_shared<Clear::Input::Ip::Dhcp::Binding>();
        }
        return binding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding != nullptr)
    {
        _children["binding"] = binding;
    }

    return _children;
}

void Clear::Input::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding")
        return true;
    return false;
}

Clear::Input::Ip::Dhcp::Binding::Binding()
    :
    vrf{YType::str, "vrf"},
    y_all{YType::str, "_all"}
{

    yang_name = "binding"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Ip::Dhcp::Binding::~Binding()
{
}

bool Clear::Input::Ip::Dhcp::Binding::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| y_all.is_set;
}

bool Clear::Input::Ip::Dhcp::Binding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(y_all.yfilter);
}

std::string Clear::Input::Ip::Dhcp::Binding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Ip::Dhcp::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Ip::Dhcp::Binding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (y_all.is_set || is_set(y_all.yfilter)) leaf_name_data.push_back(y_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Ip::Dhcp::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Ip::Dhcp::Binding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Ip::Dhcp::Binding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_all")
    {
        y_all = value;
        y_all.value_namespace = name_space;
        y_all.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Ip::Dhcp::Binding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "_all")
    {
        y_all.yfilter = yfilter;
    }
}

bool Clear::Input::Ip::Dhcp::Binding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "_all")
        return true;
    return false;
}

Clear::Input::Ip::Ospf::Ospf()
    :
    y_id{YType::uint16, "_id"},
    process{YType::empty, "process"}
{

    yang_name = "ospf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Ip::Ospf::~Ospf()
{
}

bool Clear::Input::Ip::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return y_id.is_set
	|| process.is_set;
}

bool Clear::Input::Ip::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_id.yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Clear::Input::Ip::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Ip::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Ip::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_id.is_set || is_set(y_id.yfilter)) leaf_name_data.push_back(y_id.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Ip::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Ip::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Ip::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_id")
    {
        y_id = value;
        y_id.value_namespace = name_space;
        y_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Ip::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_id")
    {
        y_id.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Clear::Input::Ip::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_id" || name == "process")
        return true;
    return false;
}

Clear::Input::Ip::Bgp::Bgp()
    :
    y_peer_address{YType::str, "_peer-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "bgp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Ip::Bgp::~Bgp()
{
}

bool Clear::Input::Ip::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return y_peer_address.is_set
	|| vrf.is_set;
}

bool Clear::Input::Ip::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_peer_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Clear::Input::Ip::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Ip::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Ip::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_peer_address.is_set || is_set(y_peer_address.yfilter)) leaf_name_data.push_back(y_peer_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Ip::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Ip::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Ip::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_peer-address")
    {
        y_peer_address = value;
        y_peer_address.value_namespace = name_space;
        y_peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Ip::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_peer-address")
    {
        y_peer_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Clear::Input::Ip::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_peer-address" || name == "vrf")
        return true;
    return false;
}

Clear::Input::ArpCache::ArpCache()
    :
    vrf{YType::str, "vrf"},
    interface{YType::str, "interface"},
    y_ip{YType::str, "_ip"}
{

    yang_name = "arp-cache"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Clear::Input::ArpCache::~ArpCache()
{
}

bool Clear::Input::ArpCache::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| interface.is_set
	|| y_ip.is_set;
}

bool Clear::Input::ArpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(y_ip.yfilter);
}

std::string Clear::Input::ArpCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::ArpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::ArpCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (y_ip.is_set || is_set(y_ip.yfilter)) leaf_name_data.push_back(y_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::ArpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::ArpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::ArpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_ip")
    {
        y_ip = value;
        y_ip.value_namespace = name_space;
        y_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::ArpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "_ip")
    {
        y_ip.yfilter = yfilter;
    }
}

bool Clear::Input::ArpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "interface" || name == "_ip")
        return true;
    return false;
}

Clear::Input::Aaa::Aaa()
    :
    local(std::make_shared<Clear::Input::Aaa::Local>())
{
    local->parent = this;

    yang_name = "aaa"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Aaa::~Aaa()
{
}

bool Clear::Input::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (local !=  nullptr && local->has_data());
}

bool Clear::Input::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Clear::Input::Aaa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Clear::Input::Aaa::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local != nullptr)
    {
        _children["local"] = local;
    }

    return _children;
}

void Clear::Input::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Clear::Input::Aaa::Local::Local()
    :
    user(std::make_shared<Clear::Input::Aaa::Local::User>())
{
    user->parent = this;

    yang_name = "local"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Aaa::Local::~Local()
{
}

bool Clear::Input::Aaa::Local::has_data() const
{
    if (is_presence_container) return true;
    return (user !=  nullptr && user->has_data());
}

bool Clear::Input::Aaa::Local::has_operation() const
{
    return is_set(yfilter)
	|| (user !=  nullptr && user->has_operation());
}

std::string Clear::Input::Aaa::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Aaa::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Aaa::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Aaa::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Clear::Input::Aaa::Local::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Aaa::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(user != nullptr)
    {
        _children["user"] = user;
    }

    return _children;
}

void Clear::Input::Aaa::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Aaa::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Aaa::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user")
        return true;
    return false;
}

Clear::Input::Aaa::Local::User::User()
    :
    lockout(std::make_shared<Clear::Input::Aaa::Local::User::Lockout>())
{
    lockout->parent = this;

    yang_name = "user"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Aaa::Local::User::~User()
{
}

bool Clear::Input::Aaa::Local::User::has_data() const
{
    if (is_presence_container) return true;
    return (lockout !=  nullptr && lockout->has_data());
}

bool Clear::Input::Aaa::Local::User::has_operation() const
{
    return is_set(yfilter)
	|| (lockout !=  nullptr && lockout->has_operation());
}

std::string Clear::Input::Aaa::Local::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/aaa/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Aaa::Local::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Aaa::Local::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Aaa::Local::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lockout")
    {
        if(lockout == nullptr)
        {
            lockout = std::make_shared<Clear::Input::Aaa::Local::User::Lockout>();
        }
        return lockout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Aaa::Local::User::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lockout != nullptr)
    {
        _children["lockout"] = lockout;
    }

    return _children;
}

void Clear::Input::Aaa::Local::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Aaa::Local::User::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Aaa::Local::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockout")
        return true;
    return false;
}

Clear::Input::Aaa::Local::User::Lockout::Lockout()
    :
    username{YType::str, "username"}
{

    yang_name = "lockout"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Aaa::Local::User::Lockout::~Lockout()
{
}

bool Clear::Input::Aaa::Local::User::Lockout::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set;
}

bool Clear::Input::Aaa::Local::User::Lockout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string Clear::Input::Aaa::Local::User::Lockout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/aaa/local/user/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Aaa::Local::User::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Aaa::Local::User::Lockout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Aaa::Local::User::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Aaa::Local::User::Lockout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Aaa::Local::User::Lockout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Aaa::Local::User::Lockout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Clear::Input::Aaa::Local::User::Lockout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username")
        return true;
    return false;
}

Clear::Input::Platform::Platform()
    :
    hardware(std::make_shared<Clear::Input::Platform::Hardware>())
{
    hardware->parent = this;

    yang_name = "platform"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Platform::~Platform()
{
}

bool Clear::Input::Platform::has_data() const
{
    if (is_presence_container) return true;
    return (hardware !=  nullptr && hardware->has_data());
}

bool Clear::Input::Platform::has_operation() const
{
    return is_set(yfilter)
	|| (hardware !=  nullptr && hardware->has_operation());
}

std::string Clear::Input::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<Clear::Input::Platform::Hardware>();
        }
        return hardware;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hardware != nullptr)
    {
        _children["hardware"] = hardware;
    }

    return _children;
}

void Clear::Input::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware")
        return true;
    return false;
}

Clear::Input::Platform::Hardware::Hardware()
    :
    qfp(std::make_shared<Clear::Input::Platform::Hardware::Qfp>())
{
    qfp->parent = this;

    yang_name = "hardware"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Platform::Hardware::~Hardware()
{
}

bool Clear::Input::Platform::Hardware::has_data() const
{
    if (is_presence_container) return true;
    return (qfp !=  nullptr && qfp->has_data());
}

bool Clear::Input::Platform::Hardware::has_operation() const
{
    return is_set(yfilter)
	|| (qfp !=  nullptr && qfp->has_operation());
}

std::string Clear::Input::Platform::Hardware::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Platform::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Platform::Hardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Platform::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qfp")
    {
        if(qfp == nullptr)
        {
            qfp = std::make_shared<Clear::Input::Platform::Hardware::Qfp>();
        }
        return qfp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Platform::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qfp != nullptr)
    {
        _children["qfp"] = qfp;
    }

    return _children;
}

void Clear::Input::Platform::Hardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Platform::Hardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Platform::Hardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qfp")
        return true;
    return false;
}

Clear::Input::Platform::Hardware::Qfp::Qfp()
    :
    active(std::make_shared<Clear::Input::Platform::Hardware::Qfp::Active>())
{
    active->parent = this;

    yang_name = "qfp"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Platform::Hardware::Qfp::~Qfp()
{
}

bool Clear::Input::Platform::Hardware::Qfp::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data());
}

bool Clear::Input::Platform::Hardware::Qfp::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation());
}

std::string Clear::Input::Platform::Hardware::Qfp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/platform/hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Platform::Hardware::Qfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qfp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Platform::Hardware::Qfp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Platform::Hardware::Qfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Clear::Input::Platform::Hardware::Qfp::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Platform::Hardware::Qfp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void Clear::Input::Platform::Hardware::Qfp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Platform::Hardware::Qfp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Platform::Hardware::Qfp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active")
        return true;
    return false;
}

Clear::Input::Platform::Hardware::Qfp::Active::Active()
    :
    feature(std::make_shared<Clear::Input::Platform::Hardware::Qfp::Active::Feature>())
{
    feature->parent = this;

    yang_name = "active"; yang_parent_name = "qfp"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Platform::Hardware::Qfp::Active::~Active()
{
}

bool Clear::Input::Platform::Hardware::Qfp::Active::has_data() const
{
    if (is_presence_container) return true;
    return (feature !=  nullptr && feature->has_data());
}

bool Clear::Input::Platform::Hardware::Qfp::Active::has_operation() const
{
    return is_set(yfilter)
	|| (feature !=  nullptr && feature->has_operation());
}

std::string Clear::Input::Platform::Hardware::Qfp::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/platform/hardware/qfp/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Platform::Hardware::Qfp::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Platform::Hardware::Qfp::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Platform::Hardware::Qfp::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Clear::Input::Platform::Hardware::Qfp::Active::Feature>();
        }
        return feature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Platform::Hardware::Qfp::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(feature != nullptr)
    {
        _children["feature"] = feature;
    }

    return _children;
}

void Clear::Input::Platform::Hardware::Qfp::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Platform::Hardware::Qfp::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Platform::Hardware::Qfp::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "feature")
        return true;
    return false;
}

Clear::Input::Platform::Hardware::Qfp::Active::Feature::Feature()
    :
    firewall(std::make_shared<Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall>())
{
    firewall->parent = this;

    yang_name = "feature"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Platform::Hardware::Qfp::Active::Feature::~Feature()
{
}

bool Clear::Input::Platform::Hardware::Qfp::Active::Feature::has_data() const
{
    if (is_presence_container) return true;
    return (firewall !=  nullptr && firewall->has_data());
}

bool Clear::Input::Platform::Hardware::Qfp::Active::Feature::has_operation() const
{
    return is_set(yfilter)
	|| (firewall !=  nullptr && firewall->has_operation());
}

std::string Clear::Input::Platform::Hardware::Qfp::Active::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/platform/hardware/qfp/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Platform::Hardware::Qfp::Active::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Platform::Hardware::Qfp::Active::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Platform::Hardware::Qfp::Active::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "firewall")
    {
        if(firewall == nullptr)
        {
            firewall = std::make_shared<Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall>();
        }
        return firewall;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Platform::Hardware::Qfp::Active::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(firewall != nullptr)
    {
        _children["firewall"] = firewall;
    }

    return _children;
}

void Clear::Input::Platform::Hardware::Qfp::Active::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Input::Platform::Hardware::Qfp::Active::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Input::Platform::Hardware::Qfp::Active::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "firewall")
        return true;
    return false;
}

Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::Firewall()
    :
    drop{YType::empty, "drop"}
{

    yang_name = "firewall"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::~Firewall()
{
}

bool Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::has_data() const
{
    if (is_presence_container) return true;
    return drop.is_set;
}

bool Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/platform/hardware/qfp/active/feature/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "firewall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Clear::Input::Platform::Hardware::Qfp::Active::Feature::Firewall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop")
        return true;
    return false;
}

Clear::Input::ZonePair::ZonePair()
    :
    counter{YType::empty, "counter"}
{

    yang_name = "zone-pair"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Input::ZonePair::~ZonePair()
{
}

bool Clear::Input::ZonePair::has_data() const
{
    if (is_presence_container) return true;
    return counter.is_set;
}

bool Clear::Input::ZonePair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter.yfilter);
}

std::string Clear::Input::ZonePair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Input::ZonePair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zone-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Input::ZonePair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter.is_set || is_set(counter.yfilter)) leaf_name_data.push_back(counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Input::ZonePair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Input::ZonePair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Input::ZonePair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter")
    {
        counter = value;
        counter.value_namespace = name_space;
        counter.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Input::ZonePair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter")
    {
        counter.yfilter = yfilter;
    }
}

bool Clear::Input::ZonePair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Clear::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false; 
}

Clear::Output::~Output()
{
}

bool Clear::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Clear::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Clear::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Clear::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Clear::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Clear::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Clear::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Release::Release()
    :
    input(std::make_shared<Release::Input>())
    , output(std::make_shared<Release::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "release"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Release::~Release()
{
}

bool Release::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Release::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Release::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:release";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Release::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Release::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Release::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Release::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Release::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Release::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Release::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Release::clone_ptr() const
{
    return std::make_shared<Release>();
}

std::string Release::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Release::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Release::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Release::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Release::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Release::Input::Input()
    :
    dhcp{YType::str, "dhcp"}
{

    yang_name = "input"; yang_parent_name = "release"; is_top_level_class = false; has_list_ancestor = false; 
}

Release::Input::~Input()
{
}

bool Release::Input::has_data() const
{
    if (is_presence_container) return true;
    return dhcp.is_set;
}

bool Release::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter);
}

std::string Release::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:release/" << get_segment_path();
    return path_buffer.str();
}

std::string Release::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Release::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Release::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Release::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Release::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Release::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Release::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp")
        return true;
    return false;
}

Release::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "release"; is_top_level_class = false; has_list_ancestor = false; 
}

Release::Output::~Output()
{
}

bool Release::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Release::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Release::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:release/" << get_segment_path();
    return path_buffer.str();
}

std::string Release::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Release::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Release::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Release::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Release::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Release::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Release::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Reload::Reload()
    :
    input(std::make_shared<Reload::Input>())
    , output(std::make_shared<Reload::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "reload"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Reload::~Reload()
{
}

bool Reload::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Reload::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Reload::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Reload::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Reload::clone_ptr() const
{
    return std::make_shared<Reload>();
}

std::string Reload::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Reload::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Reload::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Reload::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Reload::Input::Input()
    :
    force{YType::boolean, "force"},
    reason{YType::str, "reason"}
{

    yang_name = "input"; yang_parent_name = "reload"; is_top_level_class = false; has_list_ancestor = false; 
}

Reload::Input::~Input()
{
}

bool Reload::Input::has_data() const
{
    if (is_presence_container) return true;
    return force.is_set
	|| reason.is_set;
}

bool Reload::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Reload::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:reload/" << get_segment_path();
    return path_buffer.str();
}

std::string Reload::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Reload::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Reload::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Reload::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Reload::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Reload::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Reload::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force" || name == "reason")
        return true;
    return false;
}

Reload::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "reload"; is_top_level_class = false; has_list_ancestor = false; 
}

Reload::Output::~Output()
{
}

bool Reload::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Reload::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Reload::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:reload/" << get_segment_path();
    return path_buffer.str();
}

std::string Reload::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Reload::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Reload::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Reload::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Reload::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Reload::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Reload::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Cellular::Cellular()
    :
    input(std::make_shared<Cellular::Input>())
    , output(std::make_shared<Cellular::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "cellular"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Cellular::~Cellular()
{
}

bool Cellular::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Cellular::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Cellular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Cellular::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Cellular::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Cellular::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cellular::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Cellular::clone_ptr() const
{
    return std::make_shared<Cellular>();
}

std::string Cellular::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Cellular::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Cellular::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Cellular::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Cellular::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Cellular::Input::Input()
    :
    y_if_name{YType::str, "_if-name"}
        ,
    lte(std::make_shared<Cellular::Input::Lte>())
{
    lte->parent = this;

    yang_name = "input"; yang_parent_name = "cellular"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Input::~Input()
{
}

bool Cellular::Input::has_data() const
{
    if (is_presence_container) return true;
    return y_if_name.is_set
	|| (lte !=  nullptr && lte->has_data());
}

bool Cellular::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_if_name.yfilter)
	|| (lte !=  nullptr && lte->has_operation());
}

std::string Cellular::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_if_name.is_set || is_set(y_if_name.yfilter)) leaf_name_data.push_back(y_if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lte")
    {
        if(lte == nullptr)
        {
            lte = std::make_shared<Cellular::Input::Lte>();
        }
        return lte;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lte != nullptr)
    {
        _children["lte"] = lte;
    }

    return _children;
}

void Cellular::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_if-name")
    {
        y_if_name = value;
        y_if_name.value_namespace = name_space;
        y_if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Cellular::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_if-name")
    {
        y_if_name.yfilter = yfilter;
    }
}

bool Cellular::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lte" || name == "_if-name")
        return true;
    return false;
}

Cellular::Input::Lte::Lte()
    :
    modem_reset{YType::empty, "modem-reset"}
        ,
    technology(std::make_shared<Cellular::Input::Lte::Technology>())
    , profile(std::make_shared<Cellular::Input::Lte::Profile>())
{
    technology->parent = this;
    profile->parent = this;

    yang_name = "lte"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Input::Lte::~Lte()
{
}

bool Cellular::Input::Lte::has_data() const
{
    if (is_presence_container) return true;
    return modem_reset.is_set
	|| (technology !=  nullptr && technology->has_data())
	|| (profile !=  nullptr && profile->has_data());
}

bool Cellular::Input::Lte::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modem_reset.yfilter)
	|| (technology !=  nullptr && technology->has_operation())
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Cellular::Input::Lte::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Input::Lte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Input::Lte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modem_reset.is_set || is_set(modem_reset.yfilter)) leaf_name_data.push_back(modem_reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Input::Lte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "technology")
    {
        if(technology == nullptr)
        {
            technology = std::make_shared<Cellular::Input::Lte::Technology>();
        }
        return technology;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Cellular::Input::Lte::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Input::Lte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(technology != nullptr)
    {
        _children["technology"] = technology;
    }

    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    return _children;
}

void Cellular::Input::Lte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modem-reset")
    {
        modem_reset = value;
        modem_reset.value_namespace = name_space;
        modem_reset.value_namespace_prefix = name_space_prefix;
    }
}

void Cellular::Input::Lte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modem-reset")
    {
        modem_reset.yfilter = yfilter;
    }
}

bool Cellular::Input::Lte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "technology" || name == "profile" || name == "modem-reset")
        return true;
    return false;
}

Cellular::Input::Lte::Technology::Technology()
    :
    lte{YType::empty, "lte"},
    auto_{YType::empty, "auto"},
    umts{YType::empty, "umts"}
{

    yang_name = "technology"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Input::Lte::Technology::~Technology()
{
}

bool Cellular::Input::Lte::Technology::has_data() const
{
    if (is_presence_container) return true;
    return lte.is_set
	|| auto_.is_set
	|| umts.is_set;
}

bool Cellular::Input::Lte::Technology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lte.yfilter)
	|| ydk::is_set(auto_.yfilter)
	|| ydk::is_set(umts.yfilter);
}

std::string Cellular::Input::Lte::Technology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/input/lte/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Input::Lte::Technology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "technology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Input::Lte::Technology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lte.is_set || is_set(lte.yfilter)) leaf_name_data.push_back(lte.get_name_leafdata());
    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (umts.is_set || is_set(umts.yfilter)) leaf_name_data.push_back(umts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Input::Lte::Technology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Input::Lte::Technology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cellular::Input::Lte::Technology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lte")
    {
        lte = value;
        lte.value_namespace = name_space;
        lte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "umts")
    {
        umts = value;
        umts.value_namespace = name_space;
        umts.value_namespace_prefix = name_space_prefix;
    }
}

void Cellular::Input::Lte::Technology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lte")
    {
        lte.yfilter = yfilter;
    }
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
    if(value_path == "umts")
    {
        umts.yfilter = yfilter;
    }
}

bool Cellular::Input::Lte::Technology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lte" || name == "auto" || name == "umts")
        return true;
    return false;
}

Cellular::Input::Lte::Profile::Profile()
    :
    delete_(std::make_shared<Cellular::Input::Lte::Profile::Delete>())
    , create(std::make_shared<Cellular::Input::Lte::Profile::Create>())
{
    delete_->parent = this;
    create->parent = this;

    yang_name = "profile"; yang_parent_name = "lte"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Input::Lte::Profile::~Profile()
{
}

bool Cellular::Input::Lte::Profile::has_data() const
{
    if (is_presence_container) return true;
    return (delete_ !=  nullptr && delete_->has_data())
	|| (create !=  nullptr && create->has_data());
}

bool Cellular::Input::Lte::Profile::has_operation() const
{
    return is_set(yfilter)
	|| (delete_ !=  nullptr && delete_->has_operation())
	|| (create !=  nullptr && create->has_operation());
}

std::string Cellular::Input::Lte::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/input/lte/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Input::Lte::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Input::Lte::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Input::Lte::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delete")
    {
        if(delete_ == nullptr)
        {
            delete_ = std::make_shared<Cellular::Input::Lte::Profile::Delete>();
        }
        return delete_;
    }

    if(child_yang_name == "create")
    {
        if(create == nullptr)
        {
            create = std::make_shared<Cellular::Input::Lte::Profile::Create>();
        }
        return create;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Input::Lte::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delete_ != nullptr)
    {
        _children["delete"] = delete_;
    }

    if(create != nullptr)
    {
        _children["create"] = create;
    }

    return _children;
}

void Cellular::Input::Lte::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Cellular::Input::Lte::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Cellular::Input::Lte::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delete" || name == "create")
        return true;
    return false;
}

Cellular::Input::Lte::Profile::Delete::Delete()
    :
    y_profile_id{YType::uint8, "_profile-id"}
{

    yang_name = "delete"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Input::Lte::Profile::Delete::~Delete()
{
}

bool Cellular::Input::Lte::Profile::Delete::has_data() const
{
    if (is_presence_container) return true;
    return y_profile_id.is_set;
}

bool Cellular::Input::Lte::Profile::Delete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_profile_id.yfilter);
}

std::string Cellular::Input::Lte::Profile::Delete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/input/lte/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Input::Lte::Profile::Delete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Input::Lte::Profile::Delete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_profile_id.is_set || is_set(y_profile_id.yfilter)) leaf_name_data.push_back(y_profile_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Input::Lte::Profile::Delete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Input::Lte::Profile::Delete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cellular::Input::Lte::Profile::Delete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_profile-id")
    {
        y_profile_id = value;
        y_profile_id.value_namespace = name_space;
        y_profile_id.value_namespace_prefix = name_space_prefix;
    }
}

void Cellular::Input::Lte::Profile::Delete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_profile-id")
    {
        y_profile_id.yfilter = yfilter;
    }
}

bool Cellular::Input::Lte::Profile::Delete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_profile-id")
        return true;
    return false;
}

Cellular::Input::Lte::Profile::Create::Create()
    :
    y_profile_id{YType::uint8, "_profile-id"},
    y_prof_name{YType::str, "_prof_name"},
    none{YType::empty, "none"},
    chap{YType::empty, "chap"},
    pap{YType::empty, "pap"},
    pap_chap{YType::empty, "pap_chap"},
    y_user_name{YType::str, "_user_name"},
    y_password{YType::str, "_password"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    ipv4v6{YType::empty, "ipv4v6"}
{

    yang_name = "create"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Input::Lte::Profile::Create::~Create()
{
}

bool Cellular::Input::Lte::Profile::Create::has_data() const
{
    if (is_presence_container) return true;
    return y_profile_id.is_set
	|| y_prof_name.is_set
	|| none.is_set
	|| chap.is_set
	|| pap.is_set
	|| pap_chap.is_set
	|| y_user_name.is_set
	|| y_password.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| ipv4v6.is_set;
}

bool Cellular::Input::Lte::Profile::Create::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_profile_id.yfilter)
	|| ydk::is_set(y_prof_name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(chap.yfilter)
	|| ydk::is_set(pap.yfilter)
	|| ydk::is_set(pap_chap.yfilter)
	|| ydk::is_set(y_user_name.yfilter)
	|| ydk::is_set(y_password.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ipv4v6.yfilter);
}

std::string Cellular::Input::Lte::Profile::Create::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/input/lte/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Input::Lte::Profile::Create::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "create";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Input::Lte::Profile::Create::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_profile_id.is_set || is_set(y_profile_id.yfilter)) leaf_name_data.push_back(y_profile_id.get_name_leafdata());
    if (y_prof_name.is_set || is_set(y_prof_name.yfilter)) leaf_name_data.push_back(y_prof_name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (chap.is_set || is_set(chap.yfilter)) leaf_name_data.push_back(chap.get_name_leafdata());
    if (pap.is_set || is_set(pap.yfilter)) leaf_name_data.push_back(pap.get_name_leafdata());
    if (pap_chap.is_set || is_set(pap_chap.yfilter)) leaf_name_data.push_back(pap_chap.get_name_leafdata());
    if (y_user_name.is_set || is_set(y_user_name.yfilter)) leaf_name_data.push_back(y_user_name.get_name_leafdata());
    if (y_password.is_set || is_set(y_password.yfilter)) leaf_name_data.push_back(y_password.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ipv4v6.is_set || is_set(ipv4v6.yfilter)) leaf_name_data.push_back(ipv4v6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Input::Lte::Profile::Create::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Input::Lte::Profile::Create::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cellular::Input::Lte::Profile::Create::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_profile-id")
    {
        y_profile_id = value;
        y_profile_id.value_namespace = name_space;
        y_profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_prof_name")
    {
        y_prof_name = value;
        y_prof_name.value_namespace = name_space;
        y_prof_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chap")
    {
        chap = value;
        chap.value_namespace = name_space;
        chap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pap")
    {
        pap = value;
        pap.value_namespace = name_space;
        pap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pap_chap")
    {
        pap_chap = value;
        pap_chap.value_namespace = name_space;
        pap_chap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_user_name")
    {
        y_user_name = value;
        y_user_name.value_namespace = name_space;
        y_user_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_password")
    {
        y_password = value;
        y_password.value_namespace = name_space;
        y_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4v6")
    {
        ipv4v6 = value;
        ipv4v6.value_namespace = name_space;
        ipv4v6.value_namespace_prefix = name_space_prefix;
    }
}

void Cellular::Input::Lte::Profile::Create::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_profile-id")
    {
        y_profile_id.yfilter = yfilter;
    }
    if(value_path == "_prof_name")
    {
        y_prof_name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "chap")
    {
        chap.yfilter = yfilter;
    }
    if(value_path == "pap")
    {
        pap.yfilter = yfilter;
    }
    if(value_path == "pap_chap")
    {
        pap_chap.yfilter = yfilter;
    }
    if(value_path == "_user_name")
    {
        y_user_name.yfilter = yfilter;
    }
    if(value_path == "_password")
    {
        y_password.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ipv4v6")
    {
        ipv4v6.yfilter = yfilter;
    }
}

bool Cellular::Input::Lte::Profile::Create::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_profile-id" || name == "_prof_name" || name == "none" || name == "chap" || name == "pap" || name == "pap_chap" || name == "_user_name" || name == "_password" || name == "ipv4" || name == "ipv6" || name == "ipv4v6")
        return true;
    return false;
}

Cellular::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "cellular"; is_top_level_class = false; has_list_ancestor = false; 
}

Cellular::Output::~Output()
{
}

bool Cellular::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Cellular::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Cellular::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:cellular/" << get_segment_path();
    return path_buffer.str();
}

std::string Cellular::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cellular::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Cellular::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Cellular::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Cellular::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Cellular::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Cellular::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

License::License()
    :
    input(std::make_shared<License::Input>())
    , output(std::make_shared<License::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "license"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

License::~License()
{
}

bool License::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool License::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<License::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<License::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> License::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> License::clone_ptr() const
{
    return std::make_shared<License>();
}

std::string License::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string License::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function License::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> License::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

License::Input::Input()
    :
    smart(std::make_shared<License::Input::Smart>())
{
    smart->parent = this;

    yang_name = "input"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

License::Input::~Input()
{
}

bool License::Input::has_data() const
{
    if (is_presence_container) return true;
    return (smart !=  nullptr && smart->has_data());
}

bool License::Input::has_operation() const
{
    return is_set(yfilter)
	|| (smart !=  nullptr && smart->has_operation());
}

std::string License::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license/" << get_segment_path();
    return path_buffer.str();
}

std::string License::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > License::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> License::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smart")
    {
        if(smart == nullptr)
        {
            smart = std::make_shared<License::Input::Smart>();
        }
        return smart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> License::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(smart != nullptr)
    {
        _children["smart"] = smart;
    }

    return _children;
}

void License::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void License::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool License::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smart")
        return true;
    return false;
}

License::Input::Smart::Smart()
    :
    deregister{YType::empty, "deregister"}
        ,
    register_(std::make_shared<License::Input::Smart::Register>())
    , renew(std::make_shared<License::Input::Smart::Renew>())
{
    register_->parent = this;
    renew->parent = this;

    yang_name = "smart"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

License::Input::Smart::~Smart()
{
}

bool License::Input::Smart::has_data() const
{
    if (is_presence_container) return true;
    return deregister.is_set
	|| (register_ !=  nullptr && register_->has_data())
	|| (renew !=  nullptr && renew->has_data());
}

bool License::Input::Smart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deregister.yfilter)
	|| (register_ !=  nullptr && register_->has_operation())
	|| (renew !=  nullptr && renew->has_operation());
}

std::string License::Input::Smart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license/input/" << get_segment_path();
    return path_buffer.str();
}

std::string License::Input::Smart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > License::Input::Smart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deregister.is_set || is_set(deregister.yfilter)) leaf_name_data.push_back(deregister.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> License::Input::Smart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<License::Input::Smart::Register>();
        }
        return register_;
    }

    if(child_yang_name == "renew")
    {
        if(renew == nullptr)
        {
            renew = std::make_shared<License::Input::Smart::Renew>();
        }
        return renew;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> License::Input::Smart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(register_ != nullptr)
    {
        _children["register"] = register_;
    }

    if(renew != nullptr)
    {
        _children["renew"] = renew;
    }

    return _children;
}

void License::Input::Smart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deregister")
    {
        deregister = value;
        deregister.value_namespace = name_space;
        deregister.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deregister")
    {
        deregister.yfilter = yfilter;
    }
}

bool License::Input::Smart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register" || name == "renew" || name == "deregister")
        return true;
    return false;
}

License::Input::Smart::Register::Register()
    :
    idtoken{YType::str, "idtoken"},
    force{YType::empty, "force"}
{

    yang_name = "register"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false; 
}

License::Input::Smart::Register::~Register()
{
}

bool License::Input::Smart::Register::has_data() const
{
    if (is_presence_container) return true;
    return idtoken.is_set
	|| force.is_set;
}

bool License::Input::Smart::Register::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idtoken.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string License::Input::Smart::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license/input/smart/" << get_segment_path();
    return path_buffer.str();
}

std::string License::Input::Smart::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > License::Input::Smart::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idtoken.is_set || is_set(idtoken.yfilter)) leaf_name_data.push_back(idtoken.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> License::Input::Smart::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> License::Input::Smart::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void License::Input::Smart::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idtoken")
    {
        idtoken = value;
        idtoken.value_namespace = name_space;
        idtoken.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idtoken")
    {
        idtoken.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool License::Input::Smart::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idtoken" || name == "force")
        return true;
    return false;
}

License::Input::Smart::Renew::Renew()
    :
    id{YType::empty, "ID"},
    auth{YType::empty, "auth"}
{

    yang_name = "renew"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false; 
}

License::Input::Smart::Renew::~Renew()
{
}

bool License::Input::Smart::Renew::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| auth.is_set;
}

bool License::Input::Smart::Renew::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auth.yfilter);
}

std::string License::Input::Smart::Renew::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license/input/smart/" << get_segment_path();
    return path_buffer.str();
}

std::string License::Input::Smart::Renew::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "renew";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > License::Input::Smart::Renew::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auth.is_set || is_set(auth.yfilter)) leaf_name_data.push_back(auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> License::Input::Smart::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> License::Input::Smart::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void License::Input::Smart::Renew::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ID")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth")
    {
        auth = value;
        auth.value_namespace = name_space;
        auth.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::Renew::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ID")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auth")
    {
        auth.yfilter = yfilter;
    }
}

bool License::Input::Smart::Renew::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ID" || name == "auth")
        return true;
    return false;
}

License::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false; 
}

License::Output::~Output()
{
}

bool License::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool License::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string License::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:license/" << get_segment_path();
    return path_buffer.str();
}

std::string License::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > License::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> License::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> License::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void License::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void License::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool License::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Service::Service()
    :
    input(std::make_shared<Service::Input>())
    , output(std::make_shared<Service::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Service::~Service()
{
}

bool Service::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Service::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Service::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Service::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Service::clone_ptr() const
{
    return std::make_shared<Service>();
}

std::string Service::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Service::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Service::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Service::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Service::Input::Input()
    :
    sd_avc(std::make_shared<Service::Input::SdAvc>())
{
    sd_avc->parent = this;

    yang_name = "input"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Input::~Input()
{
}

bool Service::Input::has_data() const
{
    if (is_presence_container) return true;
    return (sd_avc !=  nullptr && sd_avc->has_data());
}

bool Service::Input::has_operation() const
{
    return is_set(yfilter)
	|| (sd_avc !=  nullptr && sd_avc->has_operation());
}

std::string Service::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sd-avc")
    {
        if(sd_avc == nullptr)
        {
            sd_avc = std::make_shared<Service::Input::SdAvc>();
        }
        return sd_avc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sd_avc != nullptr)
    {
        _children["sd-avc"] = sd_avc;
    }

    return _children;
}

void Service::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Service::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Service::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sd-avc")
        return true;
    return false;
}

Service::Input::SdAvc::SdAvc()
    :
    activate{YType::empty, "activate"},
    connect{YType::empty, "connect"},
    help{YType::empty, "help"},
    deactivate{YType::empty, "deactivate"},
    status{YType::empty, "status"},
    unconfigure{YType::empty, "unconfigure"},
    uninstall{YType::empty, "uninstall"}
        ,
    configure(std::make_shared<Service::Input::SdAvc::Configure>())
    , install(std::make_shared<Service::Input::SdAvc::Install>())
    , upgrade(std::make_shared<Service::Input::SdAvc::Upgrade>())
{
    configure->parent = this;
    install->parent = this;
    upgrade->parent = this;

    yang_name = "sd-avc"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Input::SdAvc::~SdAvc()
{
}

bool Service::Input::SdAvc::has_data() const
{
    if (is_presence_container) return true;
    return activate.is_set
	|| connect.is_set
	|| help.is_set
	|| deactivate.is_set
	|| status.is_set
	|| unconfigure.is_set
	|| uninstall.is_set
	|| (configure !=  nullptr && configure->has_data())
	|| (install !=  nullptr && install->has_data())
	|| (upgrade !=  nullptr && upgrade->has_data());
}

bool Service::Input::SdAvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(connect.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(deactivate.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(unconfigure.yfilter)
	|| ydk::is_set(uninstall.yfilter)
	|| (configure !=  nullptr && configure->has_operation())
	|| (install !=  nullptr && install->has_operation())
	|| (upgrade !=  nullptr && upgrade->has_operation());
}

std::string Service::Input::SdAvc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Input::SdAvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sd-avc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Input::SdAvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (connect.is_set || is_set(connect.yfilter)) leaf_name_data.push_back(connect.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (deactivate.is_set || is_set(deactivate.yfilter)) leaf_name_data.push_back(deactivate.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (unconfigure.is_set || is_set(unconfigure.yfilter)) leaf_name_data.push_back(unconfigure.get_name_leafdata());
    if (uninstall.is_set || is_set(uninstall.yfilter)) leaf_name_data.push_back(uninstall.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Input::SdAvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configure")
    {
        if(configure == nullptr)
        {
            configure = std::make_shared<Service::Input::SdAvc::Configure>();
        }
        return configure;
    }

    if(child_yang_name == "install")
    {
        if(install == nullptr)
        {
            install = std::make_shared<Service::Input::SdAvc::Install>();
        }
        return install;
    }

    if(child_yang_name == "upgrade")
    {
        if(upgrade == nullptr)
        {
            upgrade = std::make_shared<Service::Input::SdAvc::Upgrade>();
        }
        return upgrade;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Input::SdAvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configure != nullptr)
    {
        _children["configure"] = configure;
    }

    if(install != nullptr)
    {
        _children["install"] = install;
    }

    if(upgrade != nullptr)
    {
        _children["upgrade"] = upgrade;
    }

    return _children;
}

void Service::Input::SdAvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect")
    {
        connect = value;
        connect.value_namespace = name_space;
        connect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deactivate")
    {
        deactivate = value;
        deactivate.value_namespace = name_space;
        deactivate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconfigure")
    {
        unconfigure = value;
        unconfigure.value_namespace = name_space;
        unconfigure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uninstall")
    {
        uninstall = value;
        uninstall.value_namespace = name_space;
        uninstall.value_namespace_prefix = name_space_prefix;
    }
}

void Service::Input::SdAvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "connect")
    {
        connect.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "deactivate")
    {
        deactivate.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "unconfigure")
    {
        unconfigure.yfilter = yfilter;
    }
    if(value_path == "uninstall")
    {
        uninstall.yfilter = yfilter;
    }
}

bool Service::Input::SdAvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configure" || name == "install" || name == "upgrade" || name == "activate" || name == "connect" || name == "help" || name == "deactivate" || name == "status" || name == "unconfigure" || name == "uninstall")
        return true;
    return false;
}

Service::Input::SdAvc::Configure::Configure()
    :
    gateway(std::make_shared<Service::Input::SdAvc::Configure::Gateway>())
{
    gateway->parent = this;

    yang_name = "configure"; yang_parent_name = "sd-avc"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Input::SdAvc::Configure::~Configure()
{
}

bool Service::Input::SdAvc::Configure::has_data() const
{
    if (is_presence_container) return true;
    return (gateway !=  nullptr && gateway->has_data());
}

bool Service::Input::SdAvc::Configure::has_operation() const
{
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation());
}

std::string Service::Input::SdAvc::Configure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/input/sd-avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Input::SdAvc::Configure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Input::SdAvc::Configure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Input::SdAvc::Configure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Service::Input::SdAvc::Configure::Gateway>();
        }
        return gateway;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Input::SdAvc::Configure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gateway != nullptr)
    {
        _children["gateway"] = gateway;
    }

    return _children;
}

void Service::Input::SdAvc::Configure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Service::Input::SdAvc::Configure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Service::Input::SdAvc::Configure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gateway")
        return true;
    return false;
}

Service::Input::SdAvc::Configure::Gateway::Gateway()
    :
    interface{YType::str, "interface"},
    service_ip{YType::str, "service-ip"},
    activate{YType::empty, "activate"}
{

    yang_name = "gateway"; yang_parent_name = "configure"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Input::SdAvc::Configure::Gateway::~Gateway()
{
}

bool Service::Input::SdAvc::Configure::Gateway::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| service_ip.is_set
	|| activate.is_set;
}

bool Service::Input::SdAvc::Configure::Gateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(service_ip.yfilter)
	|| ydk::is_set(activate.yfilter);
}

std::string Service::Input::SdAvc::Configure::Gateway::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/input/sd-avc/configure/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Input::SdAvc::Configure::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Input::SdAvc::Configure::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (service_ip.is_set || is_set(service_ip.yfilter)) leaf_name_data.push_back(service_ip.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Input::SdAvc::Configure::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Input::SdAvc::Configure::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Service::Input::SdAvc::Configure::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-ip")
    {
        service_ip = value;
        service_ip.value_namespace = name_space;
        service_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
}

void Service::Input::SdAvc::Configure::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "service-ip")
    {
        service_ip.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
}

bool Service::Input::SdAvc::Configure::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "service-ip" || name == "activate")
        return true;
    return false;
}

Service::Input::SdAvc::Install::Install()
    :
    package{YType::str, "package"}
{

    yang_name = "install"; yang_parent_name = "sd-avc"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Input::SdAvc::Install::~Install()
{
}

bool Service::Input::SdAvc::Install::has_data() const
{
    if (is_presence_container) return true;
    return package.is_set;
}

bool Service::Input::SdAvc::Install::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string Service::Input::SdAvc::Install::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/input/sd-avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Input::SdAvc::Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Input::SdAvc::Install::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Input::SdAvc::Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Input::SdAvc::Install::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Service::Input::SdAvc::Install::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void Service::Input::SdAvc::Install::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool Service::Input::SdAvc::Install::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

Service::Input::SdAvc::Upgrade::Upgrade()
    :
    package{YType::str, "package"}
{

    yang_name = "upgrade"; yang_parent_name = "sd-avc"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Input::SdAvc::Upgrade::~Upgrade()
{
}

bool Service::Input::SdAvc::Upgrade::has_data() const
{
    if (is_presence_container) return true;
    return package.is_set;
}

bool Service::Input::SdAvc::Upgrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string Service::Input::SdAvc::Upgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/input/sd-avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Input::SdAvc::Upgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Input::SdAvc::Upgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Input::SdAvc::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Input::SdAvc::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Service::Input::SdAvc::Upgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void Service::Input::SdAvc::Upgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool Service::Input::SdAvc::Upgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package")
        return true;
    return false;
}

Service::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Service::Output::~Output()
{
}

bool Service::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Service::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Service::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:service/" << get_segment_path();
    return path_buffer.str();
}

std::string Service::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Service::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Service::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Service::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Service::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Service::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Service::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

VirtualService::VirtualService()
    :
    input(std::make_shared<VirtualService::Input>())
    , output(std::make_shared<VirtualService::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "virtual-service"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

VirtualService::~VirtualService()
{
}

bool VirtualService::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool VirtualService::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string VirtualService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:virtual-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<VirtualService::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<VirtualService::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void VirtualService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualService::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> VirtualService::clone_ptr() const
{
    return std::make_shared<VirtualService>();
}

std::string VirtualService::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string VirtualService::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function VirtualService::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VirtualService::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool VirtualService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

VirtualService::Input::Input()
    :
    install(std::make_shared<VirtualService::Input::Install>())
    , uninstall(std::make_shared<VirtualService::Input::Uninstall>())
    , upgrade(std::make_shared<VirtualService::Input::Upgrade>())
{
    install->parent = this;
    uninstall->parent = this;
    upgrade->parent = this;

    yang_name = "input"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualService::Input::~Input()
{
}

bool VirtualService::Input::has_data() const
{
    if (is_presence_container) return true;
    return (install !=  nullptr && install->has_data())
	|| (uninstall !=  nullptr && uninstall->has_data())
	|| (upgrade !=  nullptr && upgrade->has_data());
}

bool VirtualService::Input::has_operation() const
{
    return is_set(yfilter)
	|| (install !=  nullptr && install->has_operation())
	|| (uninstall !=  nullptr && uninstall->has_operation())
	|| (upgrade !=  nullptr && upgrade->has_operation());
}

std::string VirtualService::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:virtual-service/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualService::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualService::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualService::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install")
    {
        if(install == nullptr)
        {
            install = std::make_shared<VirtualService::Input::Install>();
        }
        return install;
    }

    if(child_yang_name == "uninstall")
    {
        if(uninstall == nullptr)
        {
            uninstall = std::make_shared<VirtualService::Input::Uninstall>();
        }
        return uninstall;
    }

    if(child_yang_name == "upgrade")
    {
        if(upgrade == nullptr)
        {
            upgrade = std::make_shared<VirtualService::Input::Upgrade>();
        }
        return upgrade;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualService::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(install != nullptr)
    {
        _children["install"] = install;
    }

    if(uninstall != nullptr)
    {
        _children["uninstall"] = uninstall;
    }

    if(upgrade != nullptr)
    {
        _children["upgrade"] = upgrade;
    }

    return _children;
}

void VirtualService::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualService::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualService::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install" || name == "uninstall" || name == "upgrade")
        return true;
    return false;
}

VirtualService::Input::Install::Install()
    :
    name{YType::str, "name"},
    package{YType::str, "package"},
    media{YType::str, "media"}
{

    yang_name = "install"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualService::Input::Install::~Install()
{
}

bool VirtualService::Input::Install::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| package.is_set
	|| media.is_set;
}

bool VirtualService::Input::Install::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(package.yfilter)
	|| ydk::is_set(media.yfilter);
}

std::string VirtualService::Input::Install::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:virtual-service/input/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualService::Input::Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualService::Input::Install::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualService::Input::Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualService::Input::Install::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualService::Input::Install::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualService::Input::Install::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
}

bool VirtualService::Input::Install::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "package" || name == "media")
        return true;
    return false;
}

VirtualService::Input::Uninstall::Uninstall()
    :
    name{YType::str, "name"}
{

    yang_name = "uninstall"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualService::Input::Uninstall::~Uninstall()
{
}

bool VirtualService::Input::Uninstall::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool VirtualService::Input::Uninstall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string VirtualService::Input::Uninstall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:virtual-service/input/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualService::Input::Uninstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uninstall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualService::Input::Uninstall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualService::Input::Uninstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualService::Input::Uninstall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualService::Input::Uninstall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualService::Input::Uninstall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool VirtualService::Input::Uninstall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

VirtualService::Input::Upgrade::Upgrade()
    :
    name{YType::str, "name"},
    package{YType::str, "package"}
{

    yang_name = "upgrade"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualService::Input::Upgrade::~Upgrade()
{
}

bool VirtualService::Input::Upgrade::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| package.is_set;
}

bool VirtualService::Input::Upgrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string VirtualService::Input::Upgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:virtual-service/input/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualService::Input::Upgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualService::Input::Upgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualService::Input::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualService::Input::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualService::Input::Upgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualService::Input::Upgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool VirtualService::Input::Upgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "package")
        return true;
    return false;
}

VirtualService::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualService::Output::~Output()
{
}

bool VirtualService::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool VirtualService::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string VirtualService::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:virtual-service/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualService::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualService::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualService::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualService::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualService::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualService::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool VirtualService::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Copy::Copy()
    :
    input(std::make_shared<Copy::Input>())
    , output(std::make_shared<Copy::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "copy"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Copy::~Copy()
{
}

bool Copy::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Copy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Copy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Copy::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Copy::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Copy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Copy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Copy::clone_ptr() const
{
    return std::make_shared<Copy>();
}

std::string Copy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Copy::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Copy::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Copy::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Copy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Copy::Input::Input()
    :
    y_source{YType::str, "_source"},
    y_destination{YType::str, "_destination"}
{

    yang_name = "input"; yang_parent_name = "copy"; is_top_level_class = false; has_list_ancestor = false; 
}

Copy::Input::~Input()
{
}

bool Copy::Input::has_data() const
{
    if (is_presence_container) return true;
    return y_source.is_set
	|| y_destination.is_set;
}

bool Copy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_source.yfilter)
	|| ydk::is_set(y_destination.yfilter);
}

std::string Copy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:copy/" << get_segment_path();
    return path_buffer.str();
}

std::string Copy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_source.is_set || is_set(y_source.yfilter)) leaf_name_data.push_back(y_source.get_name_leafdata());
    if (y_destination.is_set || is_set(y_destination.yfilter)) leaf_name_data.push_back(y_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Copy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_source")
    {
        y_source = value;
        y_source.value_namespace = name_space;
        y_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_destination")
    {
        y_destination = value;
        y_destination.value_namespace = name_space;
        y_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Copy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_source")
    {
        y_source.yfilter = yfilter;
    }
    if(value_path == "_destination")
    {
        y_destination.yfilter = yfilter;
    }
}

bool Copy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_source" || name == "_destination")
        return true;
    return false;
}

Copy::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "copy"; is_top_level_class = false; has_list_ancestor = false; 
}

Copy::Output::~Output()
{
}

bool Copy::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Copy::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Copy::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:copy/" << get_segment_path();
    return path_buffer.str();
}

std::string Copy::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Copy::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Copy::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Copy::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Copy::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Copy::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Copy::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Delete::Delete()
    :
    input(std::make_shared<Delete::Input>())
    , output(std::make_shared<Delete::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "delete"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Delete::~Delete()
{
}

bool Delete::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Delete::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Delete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Delete::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Delete::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Delete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Delete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Delete::clone_ptr() const
{
    return std::make_shared<Delete>();
}

std::string Delete::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Delete::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Delete::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Delete::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Delete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Delete::Input::Input()
    :
    y_filename{YType::str, "_filename"}
{

    yang_name = "input"; yang_parent_name = "delete"; is_top_level_class = false; has_list_ancestor = false; 
}

Delete::Input::~Input()
{
}

bool Delete::Input::has_data() const
{
    if (is_presence_container) return true;
    return y_filename.is_set;
}

bool Delete::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_filename.yfilter);
}

std::string Delete::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:delete/" << get_segment_path();
    return path_buffer.str();
}

std::string Delete::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_filename.is_set || is_set(y_filename.yfilter)) leaf_name_data.push_back(y_filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Delete::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_filename")
    {
        y_filename = value;
        y_filename.value_namespace = name_space;
        y_filename.value_namespace_prefix = name_space_prefix;
    }
}

void Delete::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_filename")
    {
        y_filename.yfilter = yfilter;
    }
}

bool Delete::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_filename")
        return true;
    return false;
}

Delete::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "delete"; is_top_level_class = false; has_list_ancestor = false; 
}

Delete::Output::~Output()
{
}

bool Delete::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Delete::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Delete::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:delete/" << get_segment_path();
    return path_buffer.str();
}

std::string Delete::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Delete::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Delete::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Delete::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Delete::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Delete::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

AppHosting::AppHosting()
    :
    input(std::make_shared<AppHosting::Input>())
    , output(std::make_shared<AppHosting::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "app-hosting"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

AppHosting::~AppHosting()
{
}

bool AppHosting::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool AppHosting::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string AppHosting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<AppHosting::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<AppHosting::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void AppHosting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AppHosting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> AppHosting::clone_ptr() const
{
    return std::make_shared<AppHosting>();
}

std::string AppHosting::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AppHosting::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AppHosting::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AppHosting::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool AppHosting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

AppHosting::Input::Input()
    :
    install(std::make_shared<AppHosting::Input::Install>())
    , uninstall(std::make_shared<AppHosting::Input::Uninstall>())
    , activate(std::make_shared<AppHosting::Input::Activate>())
    , deactivate(std::make_shared<AppHosting::Input::Deactivate>())
    , start(std::make_shared<AppHosting::Input::Start>())
    , stop(std::make_shared<AppHosting::Input::Stop>())
{
    install->parent = this;
    uninstall->parent = this;
    activate->parent = this;
    deactivate->parent = this;
    start->parent = this;
    stop->parent = this;

    yang_name = "input"; yang_parent_name = "app-hosting"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::~Input()
{
}

bool AppHosting::Input::has_data() const
{
    if (is_presence_container) return true;
    return (install !=  nullptr && install->has_data())
	|| (uninstall !=  nullptr && uninstall->has_data())
	|| (activate !=  nullptr && activate->has_data())
	|| (deactivate !=  nullptr && deactivate->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool AppHosting::Input::has_operation() const
{
    return is_set(yfilter)
	|| (install !=  nullptr && install->has_operation())
	|| (uninstall !=  nullptr && uninstall->has_operation())
	|| (activate !=  nullptr && activate->has_operation())
	|| (deactivate !=  nullptr && deactivate->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string AppHosting::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install")
    {
        if(install == nullptr)
        {
            install = std::make_shared<AppHosting::Input::Install>();
        }
        return install;
    }

    if(child_yang_name == "uninstall")
    {
        if(uninstall == nullptr)
        {
            uninstall = std::make_shared<AppHosting::Input::Uninstall>();
        }
        return uninstall;
    }

    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<AppHosting::Input::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "deactivate")
    {
        if(deactivate == nullptr)
        {
            deactivate = std::make_shared<AppHosting::Input::Deactivate>();
        }
        return deactivate;
    }

    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<AppHosting::Input::Start>();
        }
        return start;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<AppHosting::Input::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(install != nullptr)
    {
        _children["install"] = install;
    }

    if(uninstall != nullptr)
    {
        _children["uninstall"] = uninstall;
    }

    if(activate != nullptr)
    {
        _children["activate"] = activate;
    }

    if(deactivate != nullptr)
    {
        _children["deactivate"] = deactivate;
    }

    if(start != nullptr)
    {
        _children["start"] = start;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    return _children;
}

void AppHosting::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AppHosting::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AppHosting::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install" || name == "uninstall" || name == "activate" || name == "deactivate" || name == "start" || name == "stop")
        return true;
    return false;
}

AppHosting::Input::Install::Install()
    :
    appid{YType::str, "appid"},
    package{YType::str, "package"}
{

    yang_name = "install"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::Install::~Install()
{
}

bool AppHosting::Input::Install::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set
	|| package.is_set;
}

bool AppHosting::Input::Install::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter)
	|| ydk::is_set(package.yfilter);
}

std::string AppHosting::Input::Install::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/input/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::Install::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::Install::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());
    if (package.is_set || is_set(package.yfilter)) leaf_name_data.push_back(package.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::Install::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Input::Install::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appid")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "package")
    {
        package = value;
        package.value_namespace = name_space;
        package.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Input::Install::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appid")
    {
        appid.yfilter = yfilter;
    }
    if(value_path == "package")
    {
        package.yfilter = yfilter;
    }
}

bool AppHosting::Input::Install::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appid" || name == "package")
        return true;
    return false;
}

AppHosting::Input::Uninstall::Uninstall()
    :
    appid{YType::str, "appid"}
{

    yang_name = "uninstall"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::Uninstall::~Uninstall()
{
}

bool AppHosting::Input::Uninstall::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set;
}

bool AppHosting::Input::Uninstall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter);
}

std::string AppHosting::Input::Uninstall::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/input/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::Uninstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uninstall";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::Uninstall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::Uninstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::Uninstall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Input::Uninstall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appid")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Input::Uninstall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appid")
    {
        appid.yfilter = yfilter;
    }
}

bool AppHosting::Input::Uninstall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appid")
        return true;
    return false;
}

AppHosting::Input::Activate::Activate()
    :
    appid{YType::str, "appid"}
{

    yang_name = "activate"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::Activate::~Activate()
{
}

bool AppHosting::Input::Activate::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set;
}

bool AppHosting::Input::Activate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter);
}

std::string AppHosting::Input::Activate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/input/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Input::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appid")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Input::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appid")
    {
        appid.yfilter = yfilter;
    }
}

bool AppHosting::Input::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appid")
        return true;
    return false;
}

AppHosting::Input::Deactivate::Deactivate()
    :
    appid{YType::str, "appid"}
{

    yang_name = "deactivate"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::Deactivate::~Deactivate()
{
}

bool AppHosting::Input::Deactivate::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set;
}

bool AppHosting::Input::Deactivate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter);
}

std::string AppHosting::Input::Deactivate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/input/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::Deactivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deactivate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::Deactivate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::Deactivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::Deactivate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Input::Deactivate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appid")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Input::Deactivate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appid")
    {
        appid.yfilter = yfilter;
    }
}

bool AppHosting::Input::Deactivate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appid")
        return true;
    return false;
}

AppHosting::Input::Start::Start()
    :
    appid{YType::str, "appid"}
{

    yang_name = "start"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::Start::~Start()
{
}

bool AppHosting::Input::Start::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set;
}

bool AppHosting::Input::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter);
}

std::string AppHosting::Input::Start::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/input/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Input::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appid")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Input::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appid")
    {
        appid.yfilter = yfilter;
    }
}

bool AppHosting::Input::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appid")
        return true;
    return false;
}

AppHosting::Input::Stop::Stop()
    :
    appid{YType::str, "appid"}
{

    yang_name = "stop"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Input::Stop::~Stop()
{
}

bool AppHosting::Input::Stop::has_data() const
{
    if (is_presence_container) return true;
    return appid.is_set;
}

bool AppHosting::Input::Stop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appid.yfilter);
}

std::string AppHosting::Input::Stop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/input/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Input::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Input::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appid.is_set || is_set(appid.yfilter)) leaf_name_data.push_back(appid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Input::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Input::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Input::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appid")
    {
        appid = value;
        appid.value_namespace = name_space;
        appid.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Input::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appid")
    {
        appid.yfilter = yfilter;
    }
}

bool AppHosting::Input::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appid")
        return true;
    return false;
}

AppHosting::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "app-hosting"; is_top_level_class = false; has_list_ancestor = false; 
}

AppHosting::Output::~Output()
{
}

bool AppHosting::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool AppHosting::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string AppHosting::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:app-hosting/" << get_segment_path();
    return path_buffer.str();
}

std::string AppHosting::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AppHosting::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AppHosting::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AppHosting::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AppHosting::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void AppHosting::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool AppHosting::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Guestshell::Guestshell()
    :
    input(std::make_shared<Guestshell::Input>())
    , output(std::make_shared<Guestshell::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "guestshell"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Guestshell::~Guestshell()
{
}

bool Guestshell::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Guestshell::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Guestshell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:guestshell";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Guestshell::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Guestshell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Guestshell::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Guestshell::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Guestshell::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Guestshell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Guestshell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Guestshell::clone_ptr() const
{
    return std::make_shared<Guestshell>();
}

std::string Guestshell::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Guestshell::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Guestshell::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Guestshell::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Guestshell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Guestshell::Input::Input()
    :
    destroy{YType::empty, "destroy"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "input"; yang_parent_name = "guestshell"; is_top_level_class = false; has_list_ancestor = false; 
}

Guestshell::Input::~Input()
{
}

bool Guestshell::Input::has_data() const
{
    if (is_presence_container) return true;
    return destroy.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool Guestshell::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destroy.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Guestshell::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:guestshell/" << get_segment_path();
    return path_buffer.str();
}

std::string Guestshell::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Guestshell::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destroy.is_set || is_set(destroy.yfilter)) leaf_name_data.push_back(destroy.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Guestshell::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Guestshell::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Guestshell::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destroy")
    {
        destroy = value;
        destroy.value_namespace = name_space;
        destroy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Guestshell::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destroy")
    {
        destroy.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Guestshell::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destroy" || name == "disable" || name == "enable")
        return true;
    return false;
}

Guestshell::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "guestshell"; is_top_level_class = false; has_list_ancestor = false; 
}

Guestshell::Output::~Output()
{
}

bool Guestshell::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Guestshell::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Guestshell::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:guestshell/" << get_segment_path();
    return path_buffer.str();
}

std::string Guestshell::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Guestshell::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Guestshell::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Guestshell::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Guestshell::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Guestshell::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Guestshell::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Start::Start()
    :
    input(std::make_shared<Start::Input>())
    , output(std::make_shared<Start::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "start"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Start::~Start()
{
}

bool Start::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Start::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Start::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Start::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Start::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Start::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Start::clone_ptr() const
{
    return std::make_shared<Start>();
}

std::string Start::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Start::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Start::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Start::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Start::Input::Input()
    :
    maintenance{YType::empty, "maintenance"}
{

    yang_name = "input"; yang_parent_name = "start"; is_top_level_class = false; has_list_ancestor = false; 
}

Start::Input::~Input()
{
}

bool Start::Input::has_data() const
{
    if (is_presence_container) return true;
    return maintenance.is_set;
}

bool Start::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance.yfilter);
}

std::string Start::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:start/" << get_segment_path();
    return path_buffer.str();
}

std::string Start::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Start::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance.is_set || is_set(maintenance.yfilter)) leaf_name_data.push_back(maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Start::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Start::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Start::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance")
    {
        maintenance = value;
        maintenance.value_namespace = name_space;
        maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void Start::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance")
    {
        maintenance.yfilter = yfilter;
    }
}

bool Start::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Start::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "start"; is_top_level_class = false; has_list_ancestor = false; 
}

Start::Output::~Output()
{
}

bool Start::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Start::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Start::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:start/" << get_segment_path();
    return path_buffer.str();
}

std::string Start::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Start::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Start::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Start::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Start::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Start::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Start::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Stop::Stop()
    :
    input(std::make_shared<Stop::Input>())
    , output(std::make_shared<Stop::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "stop"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Stop::~Stop()
{
}

bool Stop::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Stop::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Stop::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Stop::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Stop::clone_ptr() const
{
    return std::make_shared<Stop>();
}

std::string Stop::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Stop::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Stop::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Stop::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Stop::Input::Input()
    :
    maintenance{YType::empty, "maintenance"}
{

    yang_name = "input"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = false; 
}

Stop::Input::~Input()
{
}

bool Stop::Input::has_data() const
{
    if (is_presence_container) return true;
    return maintenance.is_set;
}

bool Stop::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance.yfilter);
}

std::string Stop::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:stop/" << get_segment_path();
    return path_buffer.str();
}

std::string Stop::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stop::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance.is_set || is_set(maintenance.yfilter)) leaf_name_data.push_back(maintenance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Stop::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Stop::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Stop::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance")
    {
        maintenance = value;
        maintenance.value_namespace = name_space;
        maintenance.value_namespace_prefix = name_space_prefix;
    }
}

void Stop::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance")
    {
        maintenance.yfilter = yfilter;
    }
}

bool Stop::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Stop::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = false; 
}

Stop::Output::~Output()
{
}

bool Stop::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Stop::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Stop::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:stop/" << get_segment_path();
    return path_buffer.str();
}

std::string Stop::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Stop::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Stop::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Stop::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Stop::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Stop::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Stop::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}

Utd::Utd()
    :
    input(std::make_shared<Utd::Input>())
    , output(std::make_shared<Utd::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "utd"; yang_parent_name = "Cisco-IOS-XE-rpc"; is_top_level_class = true; has_list_ancestor = false; 
}

Utd::~Utd()
{
}

bool Utd::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Utd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Utd::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Utd::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Utd::clone_ptr() const
{
    return std::make_shared<Utd>();
}

std::string Utd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Utd::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Utd::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Utd::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Utd::Input::Input()
    :
    threat_inspection(std::make_shared<Utd::Input::ThreatInspection>())
{
    threat_inspection->parent = this;

    yang_name = "input"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::~Input()
{
}

bool Utd::Input::has_data() const
{
    if (is_presence_container) return true;
    return (threat_inspection !=  nullptr && threat_inspection->has_data());
}

bool Utd::Input::has_operation() const
{
    return is_set(yfilter)
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation());
}

std::string Utd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Utd::Input::ThreatInspection>();
        }
        return threat_inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threat_inspection != nullptr)
    {
        _children["threat-inspection"] = threat_inspection;
    }

    return _children;
}

void Utd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threat-inspection")
        return true;
    return false;
}

Utd::Input::ThreatInspection::ThreatInspection()
    :
    signature(std::make_shared<Utd::Input::ThreatInspection::Signature>())
{
    signature->parent = this;

    yang_name = "threat-inspection"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::~ThreatInspection()
{
}

bool Utd::Input::ThreatInspection::has_data() const
{
    if (is_presence_container) return true;
    return (signature !=  nullptr && signature->has_data());
}

bool Utd::Input::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| (signature !=  nullptr && signature->has_operation());
}

std::string Utd::Input::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Utd::Input::ThreatInspection::Signature>();
        }
        return signature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signature != nullptr)
    {
        _children["signature"] = signature;
    }

    return _children;
}

void Utd::Input::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Signature()
    :
    y_saved(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Saved>())
    , y_manual(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual>())
{
    y_saved->parent = this;
    y_manual->parent = this;

    yang_name = "signature"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::~Signature()
{
}

bool Utd::Input::ThreatInspection::Signature::has_data() const
{
    if (is_presence_container) return true;
    return (y_saved !=  nullptr && y_saved->has_data())
	|| (y_manual !=  nullptr && y_manual->has_data());
}

bool Utd::Input::ThreatInspection::Signature::has_operation() const
{
    return is_set(yfilter)
	|| (y_saved !=  nullptr && y_saved->has_operation())
	|| (y_manual !=  nullptr && y_manual->has_operation());
}

std::string Utd::Input::ThreatInspection::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_saved")
    {
        if(y_saved == nullptr)
        {
            y_saved = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Saved>();
        }
        return y_saved;
    }

    if(child_yang_name == "_manual")
    {
        if(y_manual == nullptr)
        {
            y_manual = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual>();
        }
        return y_manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(y_saved != nullptr)
    {
        _children["_saved"] = y_saved;
    }

    if(y_manual != nullptr)
    {
        _children["_manual"] = y_manual;
    }

    return _children;
}

void Utd::Input::ThreatInspection::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::ThreatInspection::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::ThreatInspection::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_saved" || name == "_manual")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Saved::Y_Saved()
    :
    update{YType::empty, "update"}
{

    yang_name = "_saved"; yang_parent_name = "signature"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Saved::~Y_Saved()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Saved::has_data() const
{
    if (is_presence_container) return true;
    return update.is_set;
}

bool Utd::Input::ThreatInspection::Signature::Y_Saved::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Utd::Input::ThreatInspection::Signature::Y_Saved::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Saved::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_saved";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Saved::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Saved::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Saved::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Saved::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Utd::Input::ThreatInspection::Signature::Y_Saved::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Utd::Input::ThreatInspection::Signature::Y_Saved::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Y_Manual()
    :
    update(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update>())
{
    update->parent = this;

    yang_name = "_manual"; yang_parent_name = "signature"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::~Y_Manual()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::has_data() const
{
    if (is_presence_container) return true;
    return (update !=  nullptr && update->has_data());
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::has_operation() const
{
    return is_set(yfilter)
	|| (update !=  nullptr && update->has_operation());
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update != nullptr)
    {
        _children["update"] = update;
    }

    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Update()
    :
    server(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server>())
{
    server->parent = this;

    yang_name = "update"; yang_parent_name = "_manual"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::~Update()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data());
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation());
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/_manual/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Server()
    :
    cisco(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco>())
    , url(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url>())
{
    cisco->parent = this;
    url->parent = this;

    yang_name = "server"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::~Server()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::has_data() const
{
    if (is_presence_container) return true;
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/_manual/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco != nullptr)
    {
        _children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        _children["url"] = url;
    }

    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "url")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::Cisco()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "cisco"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::~Cisco()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| password.is_set;
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/_manual/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Url()
    :
    y_credentials(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials>())
    , y_no_credentials(std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials>())
{
    y_credentials->parent = this;
    y_no_credentials->parent = this;

    yang_name = "url"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::~Url()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::has_data() const
{
    if (is_presence_container) return true;
    return (y_credentials !=  nullptr && y_credentials->has_data())
	|| (y_no_credentials !=  nullptr && y_no_credentials->has_data());
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::has_operation() const
{
    return is_set(yfilter)
	|| (y_credentials !=  nullptr && y_credentials->has_operation())
	|| (y_no_credentials !=  nullptr && y_no_credentials->has_operation());
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/_manual/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "_credentials")
    {
        if(y_credentials == nullptr)
        {
            y_credentials = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials>();
        }
        return y_credentials;
    }

    if(child_yang_name == "_no-credentials")
    {
        if(y_no_credentials == nullptr)
        {
            y_no_credentials = std::make_shared<Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials>();
        }
        return y_no_credentials;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(y_credentials != nullptr)
    {
        _children["_credentials"] = y_credentials;
    }

    if(y_no_credentials != nullptr)
    {
        _children["_no-credentials"] = y_no_credentials;
    }

    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_credentials" || name == "_no-credentials")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::Y_Credentials()
    :
    y_url{YType::str, "_url"},
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "_credentials"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::~Y_Credentials()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::has_data() const
{
    if (is_presence_container) return true;
    return y_url.is_set
	|| username.is_set
	|| password.is_set;
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_url.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/_manual/update/server/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_credentials";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_url.is_set || is_set(y_url.yfilter)) leaf_name_data.push_back(y_url.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_url")
    {
        y_url = value;
        y_url.value_namespace = name_space;
        y_url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_url")
    {
        y_url.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_Credentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_url" || name == "username" || name == "password")
        return true;
    return false;
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::Y_NoCredentials()
    :
    y_url{YType::str, "_url"}
{

    yang_name = "_no-credentials"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::~Y_NoCredentials()
{
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::has_data() const
{
    if (is_presence_container) return true;
    return y_url.is_set;
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_url.yfilter);
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/input/threat-inspection/signature/_manual/update/server/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "_no-credentials";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_url.is_set || is_set(y_url.yfilter)) leaf_name_data.push_back(y_url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_url")
    {
        y_url = value;
        y_url.value_namespace = name_space;
        y_url.value_namespace_prefix = name_space_prefix;
    }
}

void Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_url")
    {
        y_url.yfilter = yfilter;
    }
}

bool Utd::Input::ThreatInspection::Signature::Y_Manual::Update::Server::Url::Y_NoCredentials::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_url")
        return true;
    return false;
}

Utd::Output::Output()
    :
    result{YType::str, "result"}
{

    yang_name = "output"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false; 
}

Utd::Output::~Output()
{
}

bool Utd::Output::has_data() const
{
    if (is_presence_container) return true;
    return result.is_set;
}

bool Utd::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(result.yfilter);
}

std::string Utd::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rpc:utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Utd::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Utd::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (result.is_set || is_set(result.yfilter)) leaf_name_data.push_back(result.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Utd::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Utd::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Utd::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "result")
    {
        result = value;
        result.value_namespace = name_space;
        result.value_namespace_prefix = name_space_prefix;
    }
}

void Utd::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "result")
    {
        result.yfilter = yfilter;
    }
}

bool Utd::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "result")
        return true;
    return false;
}


}
}

