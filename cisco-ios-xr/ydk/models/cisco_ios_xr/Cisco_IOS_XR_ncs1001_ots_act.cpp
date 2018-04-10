
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1001_ots_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_ots_act {

PsmManualSwitchTo::PsmManualSwitchTo()
    :
    input(std::make_shared<PsmManualSwitchTo::Input>())
{
    input->parent = this;

    yang_name = "psm-manual-switch-to"; yang_parent_name = "Cisco-IOS-XR-ncs1001-ots-act"; is_top_level_class = true; has_list_ancestor = false;
}

PsmManualSwitchTo::~PsmManualSwitchTo()
{
}

bool PsmManualSwitchTo::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool PsmManualSwitchTo::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string PsmManualSwitchTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-act:psm-manual-switch-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PsmManualSwitchTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PsmManualSwitchTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<PsmManualSwitchTo::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PsmManualSwitchTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void PsmManualSwitchTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PsmManualSwitchTo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PsmManualSwitchTo::clone_ptr() const
{
    return std::make_shared<PsmManualSwitchTo>();
}

std::string PsmManualSwitchTo::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PsmManualSwitchTo::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PsmManualSwitchTo::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PsmManualSwitchTo::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PsmManualSwitchTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

PsmManualSwitchTo::Input::Input()
    :
    slot_id{YType::uint32, "slot-id"},
    manual_switch_to{YType::enumeration, "manual-switch-to"}
{

    yang_name = "input"; yang_parent_name = "psm-manual-switch-to"; is_top_level_class = false; has_list_ancestor = false;
}

PsmManualSwitchTo::Input::~Input()
{
}

bool PsmManualSwitchTo::Input::has_data() const
{
    return slot_id.is_set
	|| manual_switch_to.is_set;
}

bool PsmManualSwitchTo::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter)
	|| ydk::is_set(manual_switch_to.yfilter);
}

std::string PsmManualSwitchTo::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-act:psm-manual-switch-to/" << get_segment_path();
    return path_buffer.str();
}

std::string PsmManualSwitchTo::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PsmManualSwitchTo::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());
    if (manual_switch_to.is_set || is_set(manual_switch_to.yfilter)) leaf_name_data.push_back(manual_switch_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PsmManualSwitchTo::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PsmManualSwitchTo::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PsmManualSwitchTo::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-switch-to")
    {
        manual_switch_to = value;
        manual_switch_to.value_namespace = name_space;
        manual_switch_to.value_namespace_prefix = name_space_prefix;
    }
}

void PsmManualSwitchTo::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
    if(value_path == "manual-switch-to")
    {
        manual_switch_to.yfilter = yfilter;
    }
}

bool PsmManualSwitchTo::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot-id" || name == "manual-switch-to")
        return true;
    return false;
}

const Enum::YLeaf OtsPsmManualSwitch::working {1, "working"};
const Enum::YLeaf OtsPsmManualSwitch::protected_ {2, "protected"};


}
}

