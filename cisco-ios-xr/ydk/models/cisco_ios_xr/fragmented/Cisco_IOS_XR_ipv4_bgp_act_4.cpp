
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceVrfAsGraceful::ClearBgpInstanceVrfAsGraceful()
    :
    input(std::make_shared<ClearBgpInstanceVrfAsGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAsGraceful::~ClearBgpInstanceVrfAsGraceful()
{
}

bool ClearBgpInstanceVrfAsGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAsGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAsGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAsGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAsGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAsGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAsGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAsGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAsGraceful>();
}

std::string ClearBgpInstanceVrfAsGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAsGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAsGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAsGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAsGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAsGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-as-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAsGraceful::Input::~Input()
{
}

bool ClearBgpInstanceVrfAsGraceful::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceVrfAsGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceVrfAsGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAsGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAsGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAsGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAsGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAsGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAsGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceVrfAs::ClearBgpInstanceVrfAs()
    :
    input(std::make_shared<ClearBgpInstanceVrfAs::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAs::~ClearBgpInstanceVrfAs()
{
}

bool ClearBgpInstanceVrfAs::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAs::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAs::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAs::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAs>();
}

std::string ClearBgpInstanceVrfAs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAs::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-as"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAs::Input::~Input()
{
}

bool ClearBgpInstanceVrfAs::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceVrfAs::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceVrfAs::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAs::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAs::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAs::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAs::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAs::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAs::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAs::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceVrfExternalGraceful::ClearBgpInstanceVrfExternalGraceful()
    :
    input(std::make_shared<ClearBgpInstanceVrfExternalGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfExternalGraceful::~ClearBgpInstanceVrfExternalGraceful()
{
}

bool ClearBgpInstanceVrfExternalGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfExternalGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfExternalGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfExternalGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfExternalGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternalGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfExternalGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfExternalGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfExternalGraceful>();
}

std::string ClearBgpInstanceVrfExternalGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfExternalGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfExternalGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfExternalGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfExternalGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfExternalGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-external-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfExternalGraceful::Input::~Input()
{
}

bool ClearBgpInstanceVrfExternalGraceful::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfExternalGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfExternalGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfExternalGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfExternalGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternalGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfExternalGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfExternalGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfExternalGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfExternal::ClearBgpInstanceVrfExternal()
    :
    input(std::make_shared<ClearBgpInstanceVrfExternal::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfExternal::~ClearBgpInstanceVrfExternal()
{
}

bool ClearBgpInstanceVrfExternal::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfExternal::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfExternal::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternal::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfExternal>();
}

std::string ClearBgpInstanceVrfExternal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfExternal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfExternal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfExternal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfExternal::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-external"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfExternal::Input::~Input()
{
}

bool ClearBgpInstanceVrfExternal::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfExternal::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfExternal::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfExternal::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfExternal::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternal::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfExternal::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfExternal::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfExternal::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfExternal::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::~ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoftIn::ClearBgpInstanceVrfAfiSafiAllSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoftIn::~ClearBgpInstanceVrfAfiSafiAllSoftIn()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAllSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftIn>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAllSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAllSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoftOut::ClearBgpInstanceVrfAfiSafiAllSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoftOut::~ClearBgpInstanceVrfAfiSafiAllSoftOut()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAllSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOut>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAllSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoft::ClearBgpInstanceVrfAfiSafiAllSoft()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoft::~ClearBgpInstanceVrfAfiSafiAllSoft()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAllSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAllSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAllSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoft>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAllSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAllSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAllSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-all-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAllSoft::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoft::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAllSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAllSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAllSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAllSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::~ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::~ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::ClearBgpInstanceVrfAfiSafiIpAddrSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::~ClearBgpInstanceVrfAfiSafiIpAddrSoftIn()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftIn>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::ClearBgpInstanceVrfAfiSafiIpAddrSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::~ClearBgpInstanceVrfAfiSafiIpAddrSoftOut()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOut>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoft::ClearBgpInstanceVrfAfiSafiIpAddrSoft()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoft::~ClearBgpInstanceVrfAfiSafiIpAddrSoft()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoft>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiIpAddrSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::~ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoftIn::ClearBgpInstanceVrfAfiSafiAsSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoftIn::~ClearBgpInstanceVrfAfiSafiAsSoftIn()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAsSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftIn>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAsSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAsSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoftOut::ClearBgpInstanceVrfAfiSafiAsSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoftOut::~ClearBgpInstanceVrfAfiSafiAsSoftOut()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAsSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOut>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAsSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoft::ClearBgpInstanceVrfAfiSafiAsSoft()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoft::~ClearBgpInstanceVrfAfiSafiAsSoft()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiAsSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiAsSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiAsSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoft>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiAsSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiAsSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiAsSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-as-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiAsSoft::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoft::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiAsSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiAsSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiAsSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiAsSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::~ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiDampening::ClearBgpInstanceVrfAfiSafiDampening()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiDampening::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiDampening::~ClearBgpInstanceVrfAfiSafiDampening()
{
}

bool ClearBgpInstanceVrfAfiSafiDampening::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiDampening::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiDampening::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampening::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampening>();
}

std::string ClearBgpInstanceVrfAfiSafiDampening::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampening::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampening::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiDampening::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiDampening::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-dampening"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiDampening::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiDampening::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampening::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiDampening::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiDampening::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiDampening::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampening::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampening::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampening::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiDampening::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiDampening::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::~ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftIn::ClearBgpInstanceVrfAfiSafiExternalSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftIn::~ClearBgpInstanceVrfAfiSafiExternalSoftIn()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiExternalSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftIn>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiExternalSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftOut::ClearBgpInstanceVrfAfiSafiExternalSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftOut::~ClearBgpInstanceVrfAfiSafiExternalSoftOut()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOut>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiExternalSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoft::ClearBgpInstanceVrfAfiSafiExternalSoft()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoft::~ClearBgpInstanceVrfAfiSafiExternalSoft()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiExternalSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiExternalSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoft>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiExternalSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiExternalSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-external-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiExternalSoft::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoft::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiExternalSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiExternalSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiExternalSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiExternalSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(regexp_pattern.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.yfilter)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
        regexp_pattern.value_namespace = name_space;
        regexp_pattern.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "regexp-pattern")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "route-policy-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatistics::ClearBgpInstanceVrfAfiSafiFlapStatistics()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatistics::~ClearBgpInstanceVrfAfiSafiFlapStatistics()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatistics>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::~ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics>();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::~ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr>();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiSelfOriginated::ClearBgpInstanceVrfAfiSafiSelfOriginated()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginated::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiSelfOriginated::~ClearBgpInstanceVrfAfiSafiSelfOriginated()
{
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginated::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginated::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-self-originated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiSelfOriginated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginated::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiSelfOriginated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiSelfOriginated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiSelfOriginated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginated::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginated>();
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginated::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginated::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiSelfOriginated::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiSelfOriginated::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-self-originated"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-self-originated/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginated::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiShutdown::ClearBgpInstanceVrfAfiSafiShutdown()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiShutdown::~ClearBgpInstanceVrfAfiSafiShutdown()
{
}

bool ClearBgpInstanceVrfAfiSafiShutdown::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiShutdown>();
}

std::string ClearBgpInstanceVrfAfiSafiShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiShutdown::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-shutdown"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiShutdown::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiShutdown::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::~ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceVrfNexthopPerformanceStatistics::ClearBgpInstanceVrfNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfNexthopPerformanceStatistics::~ClearBgpInstanceVrfNexthopPerformanceStatistics()
{
}

bool ClearBgpInstanceVrfNexthopPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatistics>();
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfNexthopRegistrationIpAddr::ClearBgpInstanceVrfNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfNexthopRegistrationIpAddr::~ClearBgpInstanceVrfNexthopRegistrationIpAddr()
{
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddr>();
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfPeerDropsAll::ClearBgpInstanceVrfPeerDropsAll()
    :
    input(std::make_shared<ClearBgpInstanceVrfPeerDropsAll::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfPeerDropsAll::~ClearBgpInstanceVrfPeerDropsAll()
{
}

bool ClearBgpInstanceVrfPeerDropsAll::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfPeerDropsAll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfPeerDropsAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfPeerDropsAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfPeerDropsAll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfPeerDropsAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfPeerDropsAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAll::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPeerDropsAll>();
}

std::string ClearBgpInstanceVrfPeerDropsAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPeerDropsAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPeerDropsAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfPeerDropsAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfPeerDropsAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfPeerDropsAll::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-peer-drops-all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfPeerDropsAll::Input::~Input()
{
}

bool ClearBgpInstanceVrfPeerDropsAll::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPeerDropsAll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfPeerDropsAll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfPeerDropsAll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfPeerDropsAll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsAll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfPeerDropsAll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfPeerDropsAll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfPeerDropsAll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfPeerDropsIpAddr::ClearBgpInstanceVrfPeerDropsIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfPeerDropsIpAddr::~ClearBgpInstanceVrfPeerDropsIpAddr()
{
}

bool ClearBgpInstanceVrfPeerDropsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfPeerDropsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfPeerDropsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfPeerDropsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfPeerDropsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfPeerDropsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddr>();
}

std::string ClearBgpInstanceVrfPeerDropsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPeerDropsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPeerDropsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfPeerDropsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfPeerDropsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfPeerDropsIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-peer-drops-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfPeerDropsIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfPeerDropsIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfPeerDropsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfPeerDropsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfPeerDropsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfPeerDropsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPeerDropsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfPeerDropsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfPeerDropsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfPeerDropsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfPerformanceStatistics::ClearBgpInstanceVrfPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpInstanceVrfPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfPerformanceStatistics::~ClearBgpInstanceVrfPerformanceStatistics()
{
}

bool ClearBgpInstanceVrfPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPerformanceStatistics>();
}

std::string ClearBgpInstanceVrfPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfPerformanceStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpInstanceVrfPerformanceStatistics::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfShutdown::ClearBgpInstanceVrfShutdown()
    :
    input(std::make_shared<ClearBgpInstanceVrfShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfShutdown::~ClearBgpInstanceVrfShutdown()
{
}

bool ClearBgpInstanceVrfShutdown::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfShutdown>();
}

std::string ClearBgpInstanceVrfShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfShutdown::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-shutdown"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfShutdown::Input::~Input()
{
}

bool ClearBgpInstanceVrfShutdown::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::~ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamily::ClearBgpInstanceVrfUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamily::~ClearBgpInstanceVrfUpdateOutqAddressFamily()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamily::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamily>();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::ClearBgpInstanceVrfUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::~ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "update-group")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroup::ClearBgpInstanceVrfUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroup::~ClearBgpInstanceVrfUpdateOutqUpdateGroup()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroup>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "update-group")
        return true;
    return false;
}

ClearBgpAfiSafiDampeningIpv4Prefix::ClearBgpAfiSafiDampeningIpv4Prefix()
    :
    input(std::make_shared<ClearBgpAfiSafiDampeningIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpAfiSafiDampeningIpv4Prefix::~ClearBgpAfiSafiDampeningIpv4Prefix()
{
}

bool ClearBgpAfiSafiDampeningIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiDampeningIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiDampeningIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampeningIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiDampeningIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiDampeningIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiDampeningIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpv4Prefix>();
}

std::string ClearBgpAfiSafiDampeningIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiDampeningIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiDampeningIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiDampeningIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-dampening-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpAfiSafiDampeningIpv4Prefix::Input::~Input()
{
}

bool ClearBgpAfiSafiDampeningIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpAfiSafiDampeningIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiDampeningIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampeningIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiDampeningIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiDampeningIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiDampeningIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpv4Prefix::ClearBgpAfiSafiFlapStatisticsIpv4Prefix()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpAfiSafiFlapStatisticsIpv4Prefix::~ClearBgpAfiSafiFlapStatisticsIpv4Prefix()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4Prefix>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpAfiSafiDampeningIpv6Prefix::ClearBgpAfiSafiDampeningIpv6Prefix()
    :
    input(std::make_shared<ClearBgpAfiSafiDampeningIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpAfiSafiDampeningIpv6Prefix::~ClearBgpAfiSafiDampeningIpv6Prefix()
{
}

bool ClearBgpAfiSafiDampeningIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiDampeningIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiDampeningIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampeningIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiDampeningIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiDampeningIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiDampeningIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpv6Prefix>();
}

std::string ClearBgpAfiSafiDampeningIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiDampeningIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiDampeningIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiDampeningIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-dampening-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpAfiSafiDampeningIpv6Prefix::Input::~Input()
{
}

bool ClearBgpAfiSafiDampeningIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpAfiSafiDampeningIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiDampeningIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiDampeningIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiDampeningIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiDampeningIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiDampeningIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiDampeningIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpv6Prefix::ClearBgpAfiSafiFlapStatisticsIpv6Prefix()
    :
    input(std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpAfiSafiFlapStatisticsIpv6Prefix::~ClearBgpAfiSafiFlapStatisticsIpv6Prefix()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpAfiSafiFlapStatisticsIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpAfiSafiFlapStatisticsIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6Prefix>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpAfiSafiFlapStatisticsIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpAfiSafiFlapStatisticsIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-afi-safi-flap-statistics-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::~Input()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpAfiSafiFlapStatisticsIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpNexthopPerformanceStatistics::ClearBgpNexthopPerformanceStatistics()
{

    yang_name = "clear-bgp-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpNexthopPerformanceStatistics::~ClearBgpNexthopPerformanceStatistics()
{
}

bool ClearBgpNexthopPerformanceStatistics::has_data() const
{
    return false;
}

bool ClearBgpNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpNexthopPerformanceStatistics>();
}

std::string ClearBgpNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpNexthopRegistrationIpAddr::ClearBgpNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpNexthopRegistrationIpAddr::~ClearBgpNexthopRegistrationIpAddr()
{
}

bool ClearBgpNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpNexthopRegistrationIpAddr>();
}

std::string ClearBgpNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpNexthopRegistrationIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpNexthopRegistrationIpAddr::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpPeerDropsAll::ClearBgpPeerDropsAll()
{

    yang_name = "clear-bgp-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpPeerDropsAll::~ClearBgpPeerDropsAll()
{
}

bool ClearBgpPeerDropsAll::has_data() const
{
    return false;
}

bool ClearBgpPeerDropsAll::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpPeerDropsAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpPeerDropsAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpPeerDropsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPeerDropsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpPeerDropsAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpPeerDropsAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpPeerDropsAll::clone_ptr() const
{
    return std::make_shared<ClearBgpPeerDropsAll>();
}

std::string ClearBgpPeerDropsAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPeerDropsAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPeerDropsAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpPeerDropsAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpPeerDropsAll::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpPeerDropsIpAddr::ClearBgpPeerDropsIpAddr()
    :
    input(std::make_shared<ClearBgpPeerDropsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpPeerDropsIpAddr::~ClearBgpPeerDropsIpAddr()
{
}

bool ClearBgpPeerDropsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpPeerDropsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpPeerDropsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpPeerDropsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpPeerDropsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPeerDropsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpPeerDropsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpPeerDropsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpPeerDropsIpAddr>();
}

std::string ClearBgpPeerDropsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPeerDropsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPeerDropsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpPeerDropsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpPeerDropsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpPeerDropsIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-peer-drops-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpPeerDropsIpAddr::Input::~Input()
{
}

bool ClearBgpPeerDropsIpAddr::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpPeerDropsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpPeerDropsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpPeerDropsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpPeerDropsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPeerDropsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpPeerDropsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpPeerDropsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpPeerDropsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpPerformanceStatistics::ClearBgpPerformanceStatistics()
{

    yang_name = "clear-bgp-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpPerformanceStatistics::~ClearBgpPerformanceStatistics()
{
}

bool ClearBgpPerformanceStatistics::has_data() const
{
    return false;
}

bool ClearBgpPerformanceStatistics::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpPerformanceStatistics>();
}

std::string ClearBgpPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpRpkiServerAllSerialQuery::ClearBgpRpkiServerAllSerialQuery()
{

    yang_name = "clear-bgp-rpki-server-all-serial-query"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpRpkiServerAllSerialQuery::~ClearBgpRpkiServerAllSerialQuery()
{
}

bool ClearBgpRpkiServerAllSerialQuery::has_data() const
{
    return false;
}

bool ClearBgpRpkiServerAllSerialQuery::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpRpkiServerAllSerialQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-all-serial-query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiServerAllSerialQuery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiServerAllSerialQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerAllSerialQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiServerAllSerialQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpRpkiServerAllSerialQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerAllSerialQuery::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerAllSerialQuery>();
}

std::string ClearBgpRpkiServerAllSerialQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerAllSerialQuery::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerAllSerialQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpRpkiServerAllSerialQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpRpkiServerAllSerialQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpRpkiServerAll::ClearBgpRpkiServerAll()
{

    yang_name = "clear-bgp-rpki-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpRpkiServerAll::~ClearBgpRpkiServerAll()
{
}

bool ClearBgpRpkiServerAll::has_data() const
{
    return false;
}

bool ClearBgpRpkiServerAll::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpRpkiServerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiServerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiServerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiServerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpRpkiServerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerAll::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerAll>();
}

std::string ClearBgpRpkiServerAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpRpkiServerAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpRpkiServerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpRpkiServerRpkiServer::ClearBgpRpkiServerRpkiServer()
    :
    input(std::make_shared<ClearBgpRpkiServerRpkiServer::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-rpki-server-rpki-server"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpRpkiServerRpkiServer::~ClearBgpRpkiServerRpkiServer()
{
}

bool ClearBgpRpkiServerRpkiServer::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpRpkiServerRpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpRpkiServerRpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-rpki-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiServerRpkiServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpRpkiServerRpkiServer::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerRpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpRpkiServerRpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpRpkiServerRpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServer::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerRpkiServer>();
}

std::string ClearBgpRpkiServerRpkiServer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerRpkiServer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerRpkiServer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpRpkiServerRpkiServer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpRpkiServerRpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpRpkiServerRpkiServer::Input::Input()
    :
    rpki_server{YType::str, "rpki-server"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-rpki-server-rpki-server"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpRpkiServerRpkiServer::Input::~Input()
{
}

bool ClearBgpRpkiServerRpkiServer::Input::has_data() const
{
    return rpki_server.is_set;
}

bool ClearBgpRpkiServerRpkiServer::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpki_server.yfilter);
}

std::string ClearBgpRpkiServerRpkiServer::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-rpki-server/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpRpkiServerRpkiServer::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiServerRpkiServer::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpki_server.is_set || is_set(rpki_server.yfilter)) leaf_name_data.push_back(rpki_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServer::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiServerRpkiServer::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiServerRpkiServer::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpki-server")
    {
        rpki_server = value;
        rpki_server.value_namespace = name_space;
        rpki_server.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpRpkiServerRpkiServer::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpki-server")
    {
        rpki_server.yfilter = yfilter;
    }
}

bool ClearBgpRpkiServerRpkiServer::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-server")
        return true;
    return false;
}

ClearBgpRpkiValidationIpv4::ClearBgpRpkiValidationIpv4()
{

    yang_name = "clear-bgp-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpRpkiValidationIpv4::~ClearBgpRpkiValidationIpv4()
{
}

bool ClearBgpRpkiValidationIpv4::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationIpv4::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpRpkiValidationIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiValidationIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiValidationIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiValidationIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpRpkiValidationIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationIpv4>();
}

std::string ClearBgpRpkiValidationIpv4::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationIpv4::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationIpv4::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpRpkiValidationIpv4::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpRpkiValidationIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

