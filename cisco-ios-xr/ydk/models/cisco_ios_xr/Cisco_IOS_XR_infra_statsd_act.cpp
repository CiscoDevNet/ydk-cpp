
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_statsd_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_statsd_act {

ClearCountersController::ClearCountersController()
    :
    input(std::make_shared<ClearCountersController::Input>())
{
    input->parent = this;

    yang_name = "clear-counters-controller"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearCountersController::~ClearCountersController()
{
}

bool ClearCountersController::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearCountersController::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearCountersController::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-act:clear-counters-controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCountersController::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearCountersController::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearCountersController::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearCountersController::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearCountersController::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearCountersController::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearCountersController::clone_ptr() const
{
    return std::make_shared<ClearCountersController>();
}

std::string ClearCountersController::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearCountersController::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearCountersController::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearCountersController::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearCountersController::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearCountersController::Input::Input()
    :
    controller_name{YType::str, "controller-name"}
{

    yang_name = "input"; yang_parent_name = "clear-counters-controller"; is_top_level_class = false; has_list_ancestor = false;
}

ClearCountersController::Input::~Input()
{
}

bool ClearCountersController::Input::has_data() const
{
    return controller_name.is_set;
}

bool ClearCountersController::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter);
}

std::string ClearCountersController::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-act:clear-counters-controller/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearCountersController::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCountersController::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearCountersController::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearCountersController::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearCountersController::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearCountersController::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
}

bool ClearCountersController::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-name")
        return true;
    return false;
}

ClearCountersAll::ClearCountersAll()
{

    yang_name = "clear-counters-all"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearCountersAll::~ClearCountersAll()
{
}

bool ClearCountersAll::has_data() const
{
    return false;
}

bool ClearCountersAll::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearCountersAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-act:clear-counters-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCountersAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearCountersAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearCountersAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearCountersAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearCountersAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearCountersAll::clone_ptr() const
{
    return std::make_shared<ClearCountersAll>();
}

std::string ClearCountersAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearCountersAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearCountersAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearCountersAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearCountersAll::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearCountersInterface::ClearCountersInterface()
    :
    input(std::make_shared<ClearCountersInterface::Input>())
{
    input->parent = this;

    yang_name = "clear-counters-interface"; yang_parent_name = "Cisco-IOS-XR-infra-statsd-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearCountersInterface::~ClearCountersInterface()
{
}

bool ClearCountersInterface::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearCountersInterface::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearCountersInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-act:clear-counters-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCountersInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearCountersInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearCountersInterface::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearCountersInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearCountersInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearCountersInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearCountersInterface::clone_ptr() const
{
    return std::make_shared<ClearCountersInterface>();
}

std::string ClearCountersInterface::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearCountersInterface::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearCountersInterface::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearCountersInterface::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearCountersInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearCountersInterface::Input::Input()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "input"; yang_parent_name = "clear-counters-interface"; is_top_level_class = false; has_list_ancestor = false;
}

ClearCountersInterface::Input::~Input()
{
}

bool ClearCountersInterface::Input::has_data() const
{
    return interface_name.is_set;
}

bool ClearCountersInterface::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearCountersInterface::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-act:clear-counters-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearCountersInterface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearCountersInterface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearCountersInterface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearCountersInterface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearCountersInterface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearCountersInterface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearCountersInterface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}


}
}

