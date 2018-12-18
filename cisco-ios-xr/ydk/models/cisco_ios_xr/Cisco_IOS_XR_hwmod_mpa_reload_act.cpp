
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_hwmod_mpa_reload_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_hwmod_mpa_reload_act {

HwModuleSubslot::HwModuleSubslot()
    :
    input(std::make_shared<HwModuleSubslot::Input>())
{
    input->parent = this;

    yang_name = "hw-module-subslot"; yang_parent_name = "Cisco-IOS-XR-hwmod-mpa-reload-act"; is_top_level_class = true; has_list_ancestor = false; 
}

HwModuleSubslot::~HwModuleSubslot()
{
}

bool HwModuleSubslot::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool HwModuleSubslot::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string HwModuleSubslot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-hwmod-mpa-reload-act:hw-module-subslot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleSubslot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleSubslot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<HwModuleSubslot::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleSubslot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void HwModuleSubslot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleSubslot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HwModuleSubslot::clone_ptr() const
{
    return std::make_shared<HwModuleSubslot>();
}

std::string HwModuleSubslot::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModuleSubslot::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModuleSubslot::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModuleSubslot::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModuleSubslot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

HwModuleSubslot::Input::Input()
    :
    subslot{YType::str, "subslot"},
    reload{YType::empty, "reload"}
{

    yang_name = "input"; yang_parent_name = "hw-module-subslot"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModuleSubslot::Input::~Input()
{
}

bool HwModuleSubslot::Input::has_data() const
{
    if (is_presence_container) return true;
    return subslot.is_set
	|| reload.is_set;
}

bool HwModuleSubslot::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subslot.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string HwModuleSubslot::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-hwmod-mpa-reload-act:hw-module-subslot/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleSubslot::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleSubslot::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subslot.is_set || is_set(subslot.yfilter)) leaf_name_data.push_back(subslot.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModuleSubslot::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModuleSubslot::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModuleSubslot::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subslot")
    {
        subslot = value;
        subslot.value_namespace = name_space;
        subslot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleSubslot::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subslot")
    {
        subslot.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool HwModuleSubslot::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subslot" || name == "reload")
        return true;
    return false;
}


}
}

