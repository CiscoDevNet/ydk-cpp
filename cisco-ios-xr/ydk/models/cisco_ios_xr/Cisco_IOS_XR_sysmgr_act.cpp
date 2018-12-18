
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysmgr_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysmgr_act {

SysmgrProcessRestart::SysmgrProcessRestart()
    :
    input(std::make_shared<SysmgrProcessRestart::Input>())
{
    input->parent = this;

    yang_name = "sysmgr-process-restart"; yang_parent_name = "Cisco-IOS-XR-sysmgr-act"; is_top_level_class = true; has_list_ancestor = false; 
}

SysmgrProcessRestart::~SysmgrProcessRestart()
{
}

bool SysmgrProcessRestart::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool SysmgrProcessRestart::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string SysmgrProcessRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-act:sysmgr-process-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SysmgrProcessRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SysmgrProcessRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<SysmgrProcessRestart::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SysmgrProcessRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void SysmgrProcessRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SysmgrProcessRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SysmgrProcessRestart::clone_ptr() const
{
    return std::make_shared<SysmgrProcessRestart>();
}

std::string SysmgrProcessRestart::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SysmgrProcessRestart::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SysmgrProcessRestart::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SysmgrProcessRestart::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SysmgrProcessRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

SysmgrProcessRestart::Input::Input()
    :
    process_name{YType::str, "process-name"},
    location{YType::str, "location"}
{

    yang_name = "input"; yang_parent_name = "sysmgr-process-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

SysmgrProcessRestart::Input::~Input()
{
}

bool SysmgrProcessRestart::Input::has_data() const
{
    if (is_presence_container) return true;
    return process_name.is_set
	|| location.is_set;
}

bool SysmgrProcessRestart::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string SysmgrProcessRestart::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysmgr-act:sysmgr-process-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string SysmgrProcessRestart::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SysmgrProcessRestart::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SysmgrProcessRestart::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SysmgrProcessRestart::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SysmgrProcessRestart::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void SysmgrProcessRestart::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool SysmgrProcessRestart::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name" || name == "location")
        return true;
    return false;
}


}
}

