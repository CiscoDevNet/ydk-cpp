
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_act {

ClearOspfv3Routes::ClearOspfv3Routes()
    :
    input(std::make_shared<ClearOspfv3Routes::Input>())
{
    input->parent = this;

    yang_name = "clear-ospfv3-routes"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearOspfv3Routes::~ClearOspfv3Routes()
{
}

bool ClearOspfv3Routes::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfv3Routes::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfv3Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Routes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfv3Routes::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Routes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfv3Routes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3Routes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfv3Routes::clone_ptr() const
{
    return std::make_shared<ClearOspfv3Routes>();
}

std::string ClearOspfv3Routes::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfv3Routes::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfv3Routes::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfv3Routes::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfv3Routes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfv3Routes::Input::Input()
    :
    route{YType::empty, "route"}
        ,
    instance(std::make_shared<ClearOspfv3Routes::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospfv3-routes"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Routes::Input::~Input()
{
}

bool ClearOspfv3Routes::Input::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfv3Routes::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfv3Routes::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-routes/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Routes::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Routes::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Routes::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfv3Routes::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Routes::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfv3Routes::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Routes::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfv3Routes::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "route")
        return true;
    return false;
}

ClearOspfv3Routes::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Routes::Input::Instance::~Instance()
{
}

bool ClearOspfv3Routes::Input::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_identifier.is_set;
}

bool ClearOspfv3Routes::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfv3Routes::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-routes/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Routes::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Routes::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Routes::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Routes::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3Routes::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Routes::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfv3Routes::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfv3Redistribution::ClearOspfv3Redistribution()
    :
    input(std::make_shared<ClearOspfv3Redistribution::Input>())
{
    input->parent = this;

    yang_name = "clear-ospfv3-redistribution"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearOspfv3Redistribution::~ClearOspfv3Redistribution()
{
}

bool ClearOspfv3Redistribution::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfv3Redistribution::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfv3Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-redistribution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Redistribution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfv3Redistribution::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Redistribution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfv3Redistribution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3Redistribution::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfv3Redistribution::clone_ptr() const
{
    return std::make_shared<ClearOspfv3Redistribution>();
}

std::string ClearOspfv3Redistribution::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfv3Redistribution::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfv3Redistribution::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfv3Redistribution::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfv3Redistribution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfv3Redistribution::Input::Input()
    :
    redistribution{YType::empty, "redistribution"}
        ,
    instance(std::make_shared<ClearOspfv3Redistribution::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospfv3-redistribution"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Redistribution::Input::~Input()
{
}

bool ClearOspfv3Redistribution::Input::has_data() const
{
    if (is_presence_container) return true;
    return redistribution.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfv3Redistribution::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfv3Redistribution::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-redistribution/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Redistribution::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Redistribution::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Redistribution::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfv3Redistribution::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Redistribution::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfv3Redistribution::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Redistribution::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
}

bool ClearOspfv3Redistribution::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "redistribution")
        return true;
    return false;
}

ClearOspfv3Redistribution::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Redistribution::Input::Instance::~Instance()
{
}

bool ClearOspfv3Redistribution::Input::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_identifier.is_set;
}

bool ClearOspfv3Redistribution::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfv3Redistribution::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-redistribution/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Redistribution::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Redistribution::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Redistribution::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Redistribution::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3Redistribution::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Redistribution::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfv3Redistribution::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfv3Process::ClearOspfv3Process()
    :
    input(std::make_shared<ClearOspfv3Process::Input>())
{
    input->parent = this;

    yang_name = "clear-ospfv3-process"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearOspfv3Process::~ClearOspfv3Process()
{
}

bool ClearOspfv3Process::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfv3Process::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfv3Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfv3Process::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfv3Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfv3Process::clone_ptr() const
{
    return std::make_shared<ClearOspfv3Process>();
}

std::string ClearOspfv3Process::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfv3Process::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfv3Process::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfv3Process::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfv3Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfv3Process::Input::Input()
    :
    process{YType::empty, "process"}
        ,
    instance(std::make_shared<ClearOspfv3Process::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospfv3-process"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Process::Input::~Input()
{
}

bool ClearOspfv3Process::Input::has_data() const
{
    if (is_presence_container) return true;
    return process.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfv3Process::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfv3Process::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-process/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Process::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Process::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Process::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfv3Process::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Process::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfv3Process::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Process::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool ClearOspfv3Process::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "process")
        return true;
    return false;
}

ClearOspfv3Process::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Process::Input::Instance::~Instance()
{
}

bool ClearOspfv3Process::Input::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_identifier.is_set;
}

bool ClearOspfv3Process::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfv3Process::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-process/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Process::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Process::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Process::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Process::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3Process::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Process::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfv3Process::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfv3StatisticsNeighbor::ClearOspfv3StatisticsNeighbor()
    :
    input(std::make_shared<ClearOspfv3StatisticsNeighbor::Input>())
{
    input->parent = this;

    yang_name = "clear-ospfv3-statistics-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearOspfv3StatisticsNeighbor::~ClearOspfv3StatisticsNeighbor()
{
}

bool ClearOspfv3StatisticsNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfv3StatisticsNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfv3StatisticsNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3StatisticsNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3StatisticsNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfv3StatisticsNeighbor::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3StatisticsNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfv3StatisticsNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3StatisticsNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfv3StatisticsNeighbor::clone_ptr() const
{
    return std::make_shared<ClearOspfv3StatisticsNeighbor>();
}

std::string ClearOspfv3StatisticsNeighbor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfv3StatisticsNeighbor::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfv3StatisticsNeighbor::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfv3StatisticsNeighbor::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfv3StatisticsNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfv3StatisticsNeighbor::Input::Input()
    :
    instance(std::make_shared<ClearOspfv3StatisticsNeighbor::Input::Instance>())
    , neighbor(std::make_shared<ClearOspfv3StatisticsNeighbor::Input::Neighbor>())
{
    instance->parent = this;
    neighbor->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospfv3-statistics-neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3StatisticsNeighbor::Input::~Input()
{
}

bool ClearOspfv3StatisticsNeighbor::Input::has_data() const
{
    if (is_presence_container) return true;
    return (instance !=  nullptr && instance->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfv3StatisticsNeighbor::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfv3StatisticsNeighbor::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3StatisticsNeighbor::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3StatisticsNeighbor::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3StatisticsNeighbor::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfv3StatisticsNeighbor::Input::Instance>();
        }
        return instance;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfv3StatisticsNeighbor::Input::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3StatisticsNeighbor::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfv3StatisticsNeighbor::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3StatisticsNeighbor::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClearOspfv3StatisticsNeighbor::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "neighbor")
        return true;
    return false;
}

ClearOspfv3StatisticsNeighbor::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3StatisticsNeighbor::Input::Instance::~Instance()
{
}

bool ClearOspfv3StatisticsNeighbor::Input::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_identifier.is_set;
}

bool ClearOspfv3StatisticsNeighbor::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfv3StatisticsNeighbor::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics-neighbor/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3StatisticsNeighbor::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3StatisticsNeighbor::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3StatisticsNeighbor::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3StatisticsNeighbor::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3StatisticsNeighbor::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3StatisticsNeighbor::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfv3StatisticsNeighbor::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfv3StatisticsNeighbor::Input::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3StatisticsNeighbor::Input::Neighbor::~Neighbor()
{
}

bool ClearOspfv3StatisticsNeighbor::Input::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| interface_name.is_set;
}

bool ClearOspfv3StatisticsNeighbor::Input::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfv3StatisticsNeighbor::Input::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics-neighbor/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3StatisticsNeighbor::Input::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3StatisticsNeighbor::Input::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3StatisticsNeighbor::Input::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3StatisticsNeighbor::Input::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3StatisticsNeighbor::Input::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3StatisticsNeighbor::Input::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfv3StatisticsNeighbor::Input::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-id" || name == "interface-name")
        return true;
    return false;
}

ClearOspfv3Statistics::ClearOspfv3Statistics()
    :
    input(std::make_shared<ClearOspfv3Statistics::Input>())
{
    input->parent = this;

    yang_name = "clear-ospfv3-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearOspfv3Statistics::~ClearOspfv3Statistics()
{
}

bool ClearOspfv3Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfv3Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfv3Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfv3Statistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfv3Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfv3Statistics::clone_ptr() const
{
    return std::make_shared<ClearOspfv3Statistics>();
}

std::string ClearOspfv3Statistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfv3Statistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfv3Statistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfv3Statistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfv3Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfv3Statistics::Input::Input()
    :
    prefix_priority{YType::empty, "prefix-priority"},
    spf{YType::empty, "spf"},
    neighbor{YType::empty, "neighbor"}
        ,
    instance(std::make_shared<ClearOspfv3Statistics::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospfv3-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Statistics::Input::~Input()
{
}

bool ClearOspfv3Statistics::Input::has_data() const
{
    if (is_presence_container) return true;
    return prefix_priority.is_set
	|| spf.is_set
	|| neighbor.is_set
	|| (instance !=  nullptr && instance->has_data());
}

bool ClearOspfv3Statistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| ydk::is_set(spf.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfv3Statistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Statistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Statistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());
    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Statistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfv3Statistics::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Statistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfv3Statistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Statistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool ClearOspfv3Statistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "prefix-priority" || name == "spf" || name == "neighbor")
        return true;
    return false;
}

ClearOspfv3Statistics::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
{

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3Statistics::Input::Instance::~Instance()
{
}

bool ClearOspfv3Statistics::Input::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_identifier.is_set;
}

bool ClearOspfv3Statistics::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter);
}

std::string ClearOspfv3Statistics::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-statistics/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3Statistics::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3Statistics::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3Statistics::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3Statistics::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3Statistics::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3Statistics::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfv3Statistics::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-identifier")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::ClearOspfv3InstanceVrf()
    :
    input(std::make_shared<ClearOspfv3InstanceVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-ospfv3-instance-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv6-ospfv3-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::~ClearOspfv3InstanceVrf()
{
}

bool ClearOspfv3InstanceVrf::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearOspfv3InstanceVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearOspfv3InstanceVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearOspfv3InstanceVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearOspfv3InstanceVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3InstanceVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::clone_ptr() const
{
    return std::make_shared<ClearOspfv3InstanceVrf>();
}

std::string ClearOspfv3InstanceVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearOspfv3InstanceVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearOspfv3InstanceVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearOspfv3InstanceVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearOspfv3InstanceVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Input()
    :
    instance(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance>())
{
    instance->parent = this;

    yang_name = "input"; yang_parent_name = "clear-ospfv3-instance-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::~Input()
{
}

bool ClearOspfv3InstanceVrf::Input::has_data() const
{
    if (is_presence_container) return true;
    return (instance !=  nullptr && instance->has_data());
}

bool ClearOspfv3InstanceVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| (instance !=  nullptr && instance->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        if(instance == nullptr)
        {
            instance = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance>();
        }
        return instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(instance != nullptr)
    {
        children["instance"] = instance;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearOspfv3InstanceVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClearOspfv3InstanceVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::Instance()
    :
    instance_identifier{YType::str, "instance-identifier"}
        ,
    vrf(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf>())
    , all(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All>())
    , all_inclusive(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive>())
{
    vrf->parent = this;
    all->parent = this;
    all_inclusive->parent = this;

    yang_name = "instance"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::~Instance()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_identifier.is_set
	|| (vrf !=  nullptr && vrf->has_data())
	|| (all !=  nullptr && all->has_data())
	|| (all_inclusive !=  nullptr && all_inclusive->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_identifier.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (all !=  nullptr && all->has_operation())
	|| (all_inclusive !=  nullptr && all_inclusive->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_identifier.is_set || is_set(instance_identifier.yfilter)) leaf_name_data.push_back(instance_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All>();
        }
        return all;
    }

    if(child_yang_name == "all-inclusive")
    {
        if(all_inclusive == nullptr)
        {
            all_inclusive = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive>();
        }
        return all_inclusive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(all_inclusive != nullptr)
    {
        children["all-inclusive"] = all_inclusive;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier = value;
        instance_identifier.value_namespace = name_space;
        instance_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-identifier")
    {
        instance_identifier.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "all" || name == "all-inclusive" || name == "instance-identifier")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
        ,
    stats(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats>())
{
    stats->parent = this;

    yang_name = "vrf"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::~Vrf()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "vrf-name" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Stats()
    :
    spf{YType::empty, "spf"},
    prefix_priority{YType::empty, "prefix-priority"}
        ,
    neighbor(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::~Stats()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::has_data() const
{
    if (is_presence_container) return true;
    return spf.is_set
	|| prefix_priority.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf.yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "spf" || name == "prefix-priority")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
        ,
    interface(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::~Neighbor()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/vrf/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::~Interface()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/vrf/stats/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::Vrf::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::All::All()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
        ,
    stats(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All::Stats>())
{
    stats->parent = this;

    yang_name = "all"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::All::~All()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::has_data() const
{
    if (is_presence_container) return true;
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Stats()
    :
    spf{YType::empty, "spf"},
    prefix_priority{YType::empty, "prefix-priority"}
        ,
    neighbor(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::All::Stats::~Stats()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::has_data() const
{
    if (is_presence_container) return true;
    return spf.is_set
	|| prefix_priority.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf.yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::All::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::All::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::All::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::All::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::All::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "spf" || name == "prefix-priority")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
        ,
    interface(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::~Neighbor()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/all/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::~Interface()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/all/stats/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::All::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::AllInclusive()
    :
    process{YType::empty, "process"},
    redistribution{YType::empty, "redistribution"},
    route{YType::empty, "route"}
        ,
    stats(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats>())
{
    stats->parent = this;

    yang_name = "all-inclusive"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::~AllInclusive()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::has_data() const
{
    if (is_presence_container) return true;
    return process.is_set
	|| redistribution.is_set
	|| route.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(redistribution.yfilter)
	|| ydk::is_set(route.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-inclusive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (redistribution.is_set || is_set(redistribution.yfilter)) leaf_name_data.push_back(redistribution.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution")
    {
        redistribution = value;
        redistribution.value_namespace = name_space;
        redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "redistribution")
    {
        redistribution.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "process" || name == "redistribution" || name == "route")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Stats()
    :
    spf{YType::empty, "spf"},
    prefix_priority{YType::empty, "prefix-priority"}
        ,
    neighbor(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "stats"; yang_parent_name = "all-inclusive"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::~Stats()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::has_data() const
{
    if (is_presence_container) return true;
    return spf.is_set
	|| prefix_priority.is_set
	|| (neighbor !=  nullptr && neighbor->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf.yfilter)
	|| ydk::is_set(prefix_priority.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/all-inclusive/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf.is_set || is_set(spf.yfilter)) leaf_name_data.push_back(spf.get_name_leafdata());
    if (prefix_priority.is_set || is_set(prefix_priority.yfilter)) leaf_name_data.push_back(prefix_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf")
    {
        spf = value;
        spf.value_namespace = name_space;
        spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority = value;
        prefix_priority.value_namespace = name_space;
        prefix_priority.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf")
    {
        spf.yfilter = yfilter;
    }
    if(value_path == "prefix-priority")
    {
        prefix_priority.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "spf" || name == "prefix-priority")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Neighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
        ,
    interface(std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>())
{
    interface->parent = this;

    yang_name = "neighbor"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::~Neighbor()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/all-inclusive/stats/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "neighbor-id")
        return true;
    return false;
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "interface"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::~Interface()
{
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ospfv3-act:clear-ospfv3-instance-vrf/input/instance/all-inclusive/stats/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool ClearOspfv3InstanceVrf::Input::Instance::AllInclusive::Stats::Neighbor::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}


}
}

