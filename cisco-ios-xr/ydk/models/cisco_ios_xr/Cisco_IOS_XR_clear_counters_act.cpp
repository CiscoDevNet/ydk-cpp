
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clear_counters_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clear_counters_act {

ClearCounters::ClearCounters()
    :
    input(std::make_shared<ClearCounters::Input>())
{
    input->parent = this;

    yang_name = "clear-counters"; yang_parent_name = "Cisco-IOS-XR-clear-counters-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearCounters::~ClearCounters()
{
}

bool ClearCounters::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearCounters::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clear-counters-act:clear-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearCounters::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearCounters::clone_ptr() const
{
    return std::make_shared<ClearCounters>();
}

std::string ClearCounters::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearCounters::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearCounters::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearCounters::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearCounters::Input::Input()
    :
    controller{YType::str, "controller"}
{

    yang_name = "input"; yang_parent_name = "clear-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearCounters::Input::~Input()
{
}

bool ClearCounters::Input::has_data() const
{
    if (is_presence_container) return true;
    return controller.is_set;
}

bool ClearCounters::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller.yfilter);
}

std::string ClearCounters::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clear-counters-act:clear-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearCounters::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCounters::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller.is_set || is_set(controller.yfilter)) leaf_name_data.push_back(controller.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearCounters::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearCounters::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearCounters::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller")
    {
        controller = value;
        controller.value_namespace = name_space;
        controller.value_namespace_prefix = name_space_prefix;
    }
}

void ClearCounters::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller")
    {
        controller.yfilter = yfilter;
    }
}

bool ClearCounters::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}


}
}

