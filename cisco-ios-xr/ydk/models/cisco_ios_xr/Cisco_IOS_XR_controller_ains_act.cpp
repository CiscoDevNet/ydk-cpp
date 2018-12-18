
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_ains_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_ains_act {

ControllerAinsSoak::ControllerAinsSoak()
    :
    input(std::make_shared<ControllerAinsSoak::Input>())
{
    input->parent = this;

    yang_name = "controller-ains-soak"; yang_parent_name = "Cisco-IOS-XR-controller-ains-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ControllerAinsSoak::~ControllerAinsSoak()
{
}

bool ControllerAinsSoak::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ControllerAinsSoak::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ControllerAinsSoak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-ains-act:controller-ains-soak";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControllerAinsSoak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ControllerAinsSoak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ControllerAinsSoak::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ControllerAinsSoak::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ControllerAinsSoak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ControllerAinsSoak::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ControllerAinsSoak::clone_ptr() const
{
    return std::make_shared<ControllerAinsSoak>();
}

std::string ControllerAinsSoak::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ControllerAinsSoak::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ControllerAinsSoak::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ControllerAinsSoak::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ControllerAinsSoak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ControllerAinsSoak::Input::Input()
    :
    controller{YType::str, "controller"},
    hours{YType::uint32, "hours"},
    minutes{YType::uint32, "minutes"}
{

    yang_name = "input"; yang_parent_name = "controller-ains-soak"; is_top_level_class = false; has_list_ancestor = false; 
}

ControllerAinsSoak::Input::~Input()
{
}

bool ControllerAinsSoak::Input::has_data() const
{
    if (is_presence_container) return true;
    return controller.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool ControllerAinsSoak::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string ControllerAinsSoak::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-ains-act:controller-ains-soak/" << get_segment_path();
    return path_buffer.str();
}

std::string ControllerAinsSoak::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ControllerAinsSoak::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.yfilter)) leaf_name_data.push_back(controller.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ControllerAinsSoak::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ControllerAinsSoak::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ControllerAinsSoak::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller")
    {
        controller = value;
        controller.value_namespace = name_space;
        controller.value_namespace_prefix = name_space_prefix;
    }
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
}

void ControllerAinsSoak::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller")
    {
        controller.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool ControllerAinsSoak::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "hours" || name == "minutes")
        return true;
    return false;
}


}
}

