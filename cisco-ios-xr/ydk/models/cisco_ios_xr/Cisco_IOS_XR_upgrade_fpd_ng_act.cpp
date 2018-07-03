
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_upgrade_fpd_ng_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_upgrade_fpd_ng_act {

UpgradeFpd::UpgradeFpd()
    :
    input(std::make_shared<UpgradeFpd::Input>())
{
    input->parent = this;

    yang_name = "upgrade-fpd"; yang_parent_name = "Cisco-IOS-XR-upgrade-fpd-ng-act"; is_top_level_class = true; has_list_ancestor = false; 
}

UpgradeFpd::~UpgradeFpd()
{
}

bool UpgradeFpd::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool UpgradeFpd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string UpgradeFpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-ng-act:upgrade-fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UpgradeFpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> UpgradeFpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<UpgradeFpd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UpgradeFpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void UpgradeFpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UpgradeFpd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> UpgradeFpd::clone_ptr() const
{
    return std::make_shared<UpgradeFpd>();
}

std::string UpgradeFpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string UpgradeFpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function UpgradeFpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> UpgradeFpd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool UpgradeFpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

UpgradeFpd::Input::Input()
    :
    location{YType::str, "location"},
    fpd{YType::str, "fpd"},
    force{YType::empty, "force"}
{

    yang_name = "input"; yang_parent_name = "upgrade-fpd"; is_top_level_class = false; has_list_ancestor = false; 
}

UpgradeFpd::Input::~Input()
{
}

bool UpgradeFpd::Input::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| fpd.is_set
	|| force.is_set;
}

bool UpgradeFpd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(fpd.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string UpgradeFpd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-ng-act:upgrade-fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string UpgradeFpd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UpgradeFpd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (fpd.is_set || is_set(fpd.yfilter)) leaf_name_data.push_back(fpd.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UpgradeFpd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UpgradeFpd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void UpgradeFpd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd")
    {
        fpd = value;
        fpd.value_namespace = name_space;
        fpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void UpgradeFpd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "fpd")
    {
        fpd.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool UpgradeFpd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "fpd" || name == "force")
        return true;
    return false;
}


}
}

