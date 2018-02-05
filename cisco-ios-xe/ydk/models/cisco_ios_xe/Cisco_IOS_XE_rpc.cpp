
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
	,output(std::make_shared<Switch::Output>())
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

std::shared_ptr<Entity> Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Switch::clone_ptr() const
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

std::shared_ptr<Entity> Switch::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Switch::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statck != nullptr)
    {
        children["statck"] = statck;
    }

    return children;
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

std::shared_ptr<Entity> Switch::Input::Statck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Switch::Input::Statck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Switch::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Switch::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,output(std::make_shared<Default::Output>())
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

std::shared_ptr<Entity> Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Default::clone_ptr() const
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

std::shared_ptr<Entity> Default::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Default::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Default::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Default::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

Reload::Reload()
    :
    input(std::make_shared<Reload::Input>())
	,output(std::make_shared<Reload::Output>())
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

std::shared_ptr<Entity> Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Reload::clone_ptr() const
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
    force{YType::boolean, "force"}
{

    yang_name = "input"; yang_parent_name = "reload"; is_top_level_class = false; has_list_ancestor = false;
}

Reload::Input::~Input()
{
}

bool Reload::Input::has_data() const
{
    return force.is_set;
}

bool Reload::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(force.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Reload::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Reload::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Reload::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Reload::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Reload::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "force")
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

std::shared_ptr<Entity> Reload::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Reload::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

License::License()
    :
    input(std::make_shared<License::Input>())
	,output(std::make_shared<License::Output>())
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

std::shared_ptr<Entity> License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> License::clone_ptr() const
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

std::shared_ptr<Entity> License::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> License::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(smart != nullptr)
    {
        children["smart"] = smart;
    }

    return children;
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
	,renew(std::make_shared<License::Input::Smart::Renew>())
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

std::shared_ptr<Entity> License::Input::Smart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> License::Input::Smart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(register_ != nullptr)
    {
        children["register"] = register_;
    }

    if(renew != nullptr)
    {
        children["renew"] = renew;
    }

    return children;
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
    idtoken{YType::empty, "idtoken"}
{

    yang_name = "register"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false;
}

License::Input::Smart::Register::~Register()
{
}

bool License::Input::Smart::Register::has_data() const
{
    return idtoken.is_set;
}

bool License::Input::Smart::Register::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idtoken.yfilter);
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

    return leaf_name_data;

}

std::shared_ptr<Entity> License::Input::Smart::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Input::Smart::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void License::Input::Smart::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idtoken")
    {
        idtoken = value;
        idtoken.value_namespace = name_space;
        idtoken.value_namespace_prefix = name_space_prefix;
    }
}

void License::Input::Smart::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idtoken")
    {
        idtoken.yfilter = yfilter;
    }
}

bool License::Input::Smart::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idtoken")
        return true;
    return false;
}

License::Input::Smart::Renew::Renew()
    :
    id{YType::empty, "id"},
    auth{YType::empty, "auth"}
{

    yang_name = "renew"; yang_parent_name = "smart"; is_top_level_class = false; has_list_ancestor = false;
}

License::Input::Smart::Renew::~Renew()
{
}

bool License::Input::Smart::Renew::has_data() const
{
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

std::shared_ptr<Entity> License::Input::Smart::Renew::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Input::Smart::Renew::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void License::Input::Smart::Renew::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
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
    if(value_path == "id")
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
    if(name == "id" || name == "auth")
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

std::shared_ptr<Entity> License::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> License::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,output(std::make_shared<Service::Output>())
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

std::shared_ptr<Entity> Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Service::clone_ptr() const
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

std::shared_ptr<Entity> Service::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Service::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sd_avc != nullptr)
    {
        children["sd-avc"] = sd_avc;
    }

    return children;
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
	,install(std::make_shared<Service::Input::SdAvc::Install>())
	,upgrade(std::make_shared<Service::Input::SdAvc::Upgrade>())
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

std::shared_ptr<Entity> Service::Input::SdAvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Service::Input::SdAvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(configure != nullptr)
    {
        children["configure"] = configure;
    }

    if(install != nullptr)
    {
        children["install"] = install;
    }

    if(upgrade != nullptr)
    {
        children["upgrade"] = upgrade;
    }

    return children;
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

std::shared_ptr<Entity> Service::Input::SdAvc::Configure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Service::Input::SdAvc::Configure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    return children;
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

std::shared_ptr<Entity> Service::Input::SdAvc::Configure::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::Input::SdAvc::Configure::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Service::Input::SdAvc::Install::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::Input::SdAvc::Install::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Service::Input::SdAvc::Upgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::Input::SdAvc::Upgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> Service::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Service::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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


}
}

