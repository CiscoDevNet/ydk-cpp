
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_6.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpVrfAs::ClearBgpVrfAs()
    :
    input(std::make_shared<ClearBgpVrfAs::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAs::~ClearBgpVrfAs()
{
}

bool ClearBgpVrfAs::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAs::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAs::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAs::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAs>();
}

std::string ClearBgpVrfAs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAs::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-as"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAs::Input::~Input()
{
}

bool ClearBgpVrfAs::Input::has_data() const
{
    return vrf_all.is_set
	|| as_number.is_set;
}

bool ClearBgpVrfAs::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpVrfAs::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-as/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAs::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAs::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAs::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAs::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAs::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAs::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpVrfAs::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "as-number")
        return true;
    return false;
}

ClearBgpVrfExternalGraceful::ClearBgpVrfExternalGraceful()
    :
    input(std::make_shared<ClearBgpVrfExternalGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfExternalGraceful::~ClearBgpVrfExternalGraceful()
{
}

bool ClearBgpVrfExternalGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfExternalGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfExternalGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-external-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfExternalGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfExternalGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfExternalGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfExternalGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfExternalGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfExternalGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfExternalGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfExternalGraceful>();
}

std::string ClearBgpVrfExternalGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfExternalGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfExternalGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfExternalGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfExternalGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfExternalGraceful::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-external-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfExternalGraceful::Input::~Input()
{
}

bool ClearBgpVrfExternalGraceful::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfExternalGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfExternalGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-external-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfExternalGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfExternalGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfExternalGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfExternalGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfExternalGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfExternalGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfExternalGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfExternal::ClearBgpVrfExternal()
    :
    input(std::make_shared<ClearBgpVrfExternal::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfExternal::~ClearBgpVrfExternal()
{
}

bool ClearBgpVrfExternal::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfExternal::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfExternal::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfExternal::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfExternal>();
}

std::string ClearBgpVrfExternal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfExternal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfExternal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfExternal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfExternal::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-external"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfExternal::Input::~Input()
{
}

bool ClearBgpVrfExternal::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfExternal::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfExternal::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-external/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfExternal::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfExternal::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfExternal::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfExternal::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfExternal::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfExternal::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfExternal::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::ClearBgpVrfAfiSafiAllSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::~ClearBgpVrfAfiSafiAllSoftInPrefixFilter()
{
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilter>();
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftIn::ClearBgpVrfAfiSafiAllSoftIn()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftIn::~ClearBgpVrfAfiSafiAllSoftIn()
{
}

bool ClearBgpVrfAfiSafiAllSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftIn>();
}

std::string ClearBgpVrfAfiSafiAllSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftIn::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftIn::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoftIn::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAllSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftOut::ClearBgpVrfAfiSafiAllSoftOut()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftOut::~ClearBgpVrfAfiSafiAllSoftOut()
{
}

bool ClearBgpVrfAfiSafiAllSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftOut>();
}

std::string ClearBgpVrfAfiSafiAllSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftOut::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftOut::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoftOut::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAllSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoft::ClearBgpVrfAfiSafiAllSoft()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoft::~ClearBgpVrfAfiSafiAllSoft()
{
}

bool ClearBgpVrfAfiSafiAllSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoft>();
}

std::string ClearBgpVrfAfiSafiAllSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoft::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoft::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoft::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiAllSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAllSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrLongLivedStale::ClearBgpVrfAfiSafiIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrLongLivedStale::~ClearBgpVrfAfiSafiIpAddrLongLivedStale()
{
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStale::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrLongLivedStale>();
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::~ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoftIn::ClearBgpVrfAfiSafiIpAddrSoftIn()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoftIn::~ClearBgpVrfAfiSafiIpAddrSoftIn()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiIpAddrSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiIpAddrSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiIpAddrSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftIn>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiIpAddrSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiIpAddrSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoftIn::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoftIn::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftIn::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiIpAddrSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiIpAddrSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoftOut::ClearBgpVrfAfiSafiIpAddrSoftOut()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoftOut::~ClearBgpVrfAfiSafiIpAddrSoftOut()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiIpAddrSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiIpAddrSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftOut>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiIpAddrSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiIpAddrSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoftOut::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoftOut::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftOut::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiIpAddrSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiIpAddrSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoft::ClearBgpVrfAfiSafiIpAddrSoft()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiIpAddrSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoft::~ClearBgpVrfAfiSafiIpAddrSoft()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiIpAddrSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiIpAddrSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiIpAddrSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiIpAddrSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoft>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiIpAddrSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiIpAddrSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiIpAddrSoft::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-ip-addr-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiIpAddrSoft::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoft::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiIpAddrSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiIpAddrSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiIpAddrSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiIpAddrSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiIpAddrSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiIpAddrSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftInPrefixFilter::ClearBgpVrfAfiSafiAsSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftInPrefixFilter::~ClearBgpVrfAfiSafiAsSoftInPrefixFilter()
{
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAsSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAsSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftInPrefixFilter>();
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAsSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-as-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftIn::ClearBgpVrfAfiSafiAsSoftIn()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAsSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftIn::~ClearBgpVrfAfiSafiAsSoftIn()
{
}

bool ClearBgpVrfAfiSafiAsSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAsSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAsSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAsSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAsSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAsSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftIn>();
}

std::string ClearBgpVrfAfiSafiAsSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAsSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAsSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftIn::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-as-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftIn::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAsSoftIn::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpVrfAfiSafiAsSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAsSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAsSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAsSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiAsSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftOut::ClearBgpVrfAfiSafiAsSoftOut()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAsSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftOut::~ClearBgpVrfAfiSafiAsSoftOut()
{
}

bool ClearBgpVrfAfiSafiAsSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAsSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAsSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAsSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAsSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAsSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftOut>();
}

std::string ClearBgpVrfAfiSafiAsSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAsSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAsSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftOut::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-as-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftOut::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAsSoftOut::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpVrfAfiSafiAsSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAsSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAsSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAsSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiAsSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoft::ClearBgpVrfAfiSafiAsSoft()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAsSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoft::~ClearBgpVrfAfiSafiAsSoft()
{
}

bool ClearBgpVrfAfiSafiAsSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAsSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAsSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAsSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAsSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAsSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoft>();
}

std::string ClearBgpVrfAfiSafiAsSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAsSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAsSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoft::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-as-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoft::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAsSoft::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpVrfAfiSafiAsSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpVrfAfiSafiAsSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAsSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAsSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiAsSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiAsSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpVrfAfiSafiDampeningIpv4Prefix::ClearBgpVrfAfiSafiDampeningIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiDampeningIpv4Prefix::~ClearBgpVrfAfiSafiDampeningIpv4Prefix()
{
}

bool ClearBgpVrfAfiSafiDampeningIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiDampeningIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiDampeningIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiDampeningIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiDampeningIpv4Prefix>();
}

std::string ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiDampeningIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiDampeningIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-dampening-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiDampeningIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpVrfAfiSafiDampening::ClearBgpVrfAfiSafiDampening()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiDampening::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiDampening::~ClearBgpVrfAfiSafiDampening()
{
}

bool ClearBgpVrfAfiSafiDampening::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiDampening::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiDampening::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampening::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiDampening>();
}

std::string ClearBgpVrfAfiSafiDampening::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiDampening::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiDampening::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiDampening::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiDampening::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-dampening"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiDampening::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiDampening::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiDampening::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiDampening::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiDampening::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiDampening::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampening::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiDampening::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiDampening::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiDampening::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiDampening::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::ClearBgpVrfAfiSafiExternalSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::~ClearBgpVrfAfiSafiExternalSoftInPrefixFilter()
{
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftInPrefixFilter>();
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-external-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoftIn::ClearBgpVrfAfiSafiExternalSoftIn()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiExternalSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoftIn::~ClearBgpVrfAfiSafiExternalSoftIn()
{
}

bool ClearBgpVrfAfiSafiExternalSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiExternalSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiExternalSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiExternalSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiExternalSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiExternalSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftIn>();
}

std::string ClearBgpVrfAfiSafiExternalSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiExternalSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiExternalSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoftIn::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-external-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoftIn::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiExternalSoftIn::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiExternalSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiExternalSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiExternalSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiExternalSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoftOut::ClearBgpVrfAfiSafiExternalSoftOut()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiExternalSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoftOut::~ClearBgpVrfAfiSafiExternalSoftOut()
{
}

bool ClearBgpVrfAfiSafiExternalSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiExternalSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiExternalSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiExternalSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiExternalSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiExternalSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftOut>();
}

std::string ClearBgpVrfAfiSafiExternalSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiExternalSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiExternalSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoftOut::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-external-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoftOut::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiExternalSoftOut::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiExternalSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiExternalSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiExternalSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiExternalSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoft::ClearBgpVrfAfiSafiExternalSoft()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiExternalSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoft::~ClearBgpVrfAfiSafiExternalSoft()
{
}

bool ClearBgpVrfAfiSafiExternalSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiExternalSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiExternalSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiExternalSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiExternalSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiExternalSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoft>();
}

std::string ClearBgpVrfAfiSafiExternalSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiExternalSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiExternalSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiExternalSoft::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-external-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiExternalSoft::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiExternalSoft::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiExternalSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiExternalSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiExternalSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiExternalSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiExternalSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiExternalSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiExternalSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::~ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddr::ClearBgpVrfAfiSafiFlapStatisticsIpAddr()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddr::~ClearBgpVrfAfiSafiFlapStatisticsIpAddr()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddr>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatisticsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::~ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsRegexp::ClearBgpVrfAfiSafiFlapStatisticsRegexp()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsRegexp::~ClearBgpVrfAfiSafiFlapStatisticsRegexp()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexp::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRegexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatisticsRegexp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRegexp::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRegexp>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatisticsRegexp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics-regexp"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(regexp_pattern.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-regexp/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.yfilter)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiFlapStatisticsRegexp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "regexp-pattern")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::~ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics-route-policy"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "route-policy-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatistics::ClearBgpVrfAfiSafiFlapStatistics()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatistics::~ClearBgpVrfAfiSafiFlapStatistics()
{
}

bool ClearBgpVrfAfiSafiFlapStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatistics>();
}

std::string ClearBgpVrfAfiSafiFlapStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatistics::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatistics::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatistics::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiFlapStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiNexthopPerformanceStatistics::ClearBgpVrfAfiSafiNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiNexthopPerformanceStatistics::~ClearBgpVrfAfiSafiNexthopPerformanceStatistics()
{
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiNexthopPerformanceStatistics>();
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::ClearBgpVrfAfiSafiNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::~ClearBgpVrfAfiSafiNexthopRegistrationIpAddr()
{
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiNexthopRegistrationIpAddr>();
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiSelfOriginated::ClearBgpVrfAfiSafiSelfOriginated()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiSelfOriginated::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiSelfOriginated::~ClearBgpVrfAfiSafiSelfOriginated()
{
}

bool ClearBgpVrfAfiSafiSelfOriginated::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiSelfOriginated::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiSelfOriginated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-self-originated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiSelfOriginated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiSelfOriginated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiSelfOriginated::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiSelfOriginated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiSelfOriginated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiSelfOriginated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiSelfOriginated::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiSelfOriginated>();
}

std::string ClearBgpVrfAfiSafiSelfOriginated::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiSelfOriginated::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiSelfOriginated::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiSelfOriginated::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiSelfOriginated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiSelfOriginated::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-self-originated"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiSelfOriginated::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiSelfOriginated::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiSelfOriginated::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiSelfOriginated::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-self-originated/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiSelfOriginated::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiSelfOriginated::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiSelfOriginated::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiSelfOriginated::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiSelfOriginated::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiSelfOriginated::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiSelfOriginated::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiShutdown::ClearBgpVrfAfiSafiShutdown()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiShutdown::~ClearBgpVrfAfiSafiShutdown()
{
}

bool ClearBgpVrfAfiSafiShutdown::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiShutdown>();
}

std::string ClearBgpVrfAfiSafiShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiShutdown::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-shutdown"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiShutdown::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiShutdown::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::~ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamily::ClearBgpVrfAfiSafiUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamily::~ClearBgpVrfAfiSafiUpdateOutqAddressFamily()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamily::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamily>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::ClearBgpVrfAfiSafiUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroup()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroup>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpVrfAfiSafiDampeningIpv6Prefix::ClearBgpVrfAfiSafiDampeningIpv6Prefix()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiDampeningIpv6Prefix::~ClearBgpVrfAfiSafiDampeningIpv6Prefix()
{
}

bool ClearBgpVrfAfiSafiDampeningIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiDampeningIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiDampeningIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiDampeningIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiDampeningIpv6Prefix>();
}

std::string ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiDampeningIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiDampeningIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-dampening-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiDampeningIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::~ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-flap-statistics-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpVrfNexthopPerformanceStatistics::ClearBgpVrfNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpVrfNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfNexthopPerformanceStatistics::~ClearBgpVrfNexthopPerformanceStatistics()
{
}

bool ClearBgpVrfNexthopPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfNexthopPerformanceStatistics>();
}

std::string ClearBgpVrfNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfNexthopPerformanceStatistics::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpVrfNexthopPerformanceStatistics::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfNexthopRegistrationIpAddr::ClearBgpVrfNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpVrfNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfNexthopRegistrationIpAddr::~ClearBgpVrfNexthopRegistrationIpAddr()
{
}

bool ClearBgpVrfNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfNexthopRegistrationIpAddr>();
}

std::string ClearBgpVrfNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfNexthopRegistrationIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpVrfNexthopRegistrationIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVrfNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfPeerDropsAll::ClearBgpVrfPeerDropsAll()
    :
    input(std::make_shared<ClearBgpVrfPeerDropsAll::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfPeerDropsAll::~ClearBgpVrfPeerDropsAll()
{
}

bool ClearBgpVrfPeerDropsAll::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfPeerDropsAll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfPeerDropsAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-peer-drops-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfPeerDropsAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfPeerDropsAll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfPeerDropsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfPeerDropsAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfPeerDropsAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsAll::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfPeerDropsAll>();
}

std::string ClearBgpVrfPeerDropsAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfPeerDropsAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfPeerDropsAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfPeerDropsAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfPeerDropsAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfPeerDropsAll::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-peer-drops-all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfPeerDropsAll::Input::~Input()
{
}

bool ClearBgpVrfPeerDropsAll::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfPeerDropsAll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfPeerDropsAll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-peer-drops-all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfPeerDropsAll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfPeerDropsAll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsAll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfPeerDropsAll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfPeerDropsAll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfPeerDropsAll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfPeerDropsAll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfPeerDropsIpAddr::ClearBgpVrfPeerDropsIpAddr()
    :
    input(std::make_shared<ClearBgpVrfPeerDropsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfPeerDropsIpAddr::~ClearBgpVrfPeerDropsIpAddr()
{
}

bool ClearBgpVrfPeerDropsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfPeerDropsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfPeerDropsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-peer-drops-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfPeerDropsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfPeerDropsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfPeerDropsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfPeerDropsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfPeerDropsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfPeerDropsIpAddr>();
}

std::string ClearBgpVrfPeerDropsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfPeerDropsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfPeerDropsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfPeerDropsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfPeerDropsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfPeerDropsIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-peer-drops-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfPeerDropsIpAddr::Input::~Input()
{
}

bool ClearBgpVrfPeerDropsIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfPeerDropsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfPeerDropsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-peer-drops-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfPeerDropsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfPeerDropsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfPeerDropsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfPeerDropsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfPeerDropsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVrfPeerDropsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfPerformanceStatistics::ClearBgpVrfPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpVrfPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfPerformanceStatistics::~ClearBgpVrfPerformanceStatistics()
{
}

bool ClearBgpVrfPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfPerformanceStatistics>();
}

std::string ClearBgpVrfPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfPerformanceStatistics::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpVrfPerformanceStatistics::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfShutdown::ClearBgpVrfShutdown()
    :
    input(std::make_shared<ClearBgpVrfShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfShutdown::~ClearBgpVrfShutdown()
{
}

bool ClearBgpVrfShutdown::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfShutdown>();
}

std::string ClearBgpVrfShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfShutdown::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-shutdown"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfShutdown::Input::~Input()
{
}

bool ClearBgpVrfShutdown::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::ClearBgpVrfUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::~ClearBgpVrfUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqAddressFamily::ClearBgpVrfUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqAddressFamily::~ClearBgpVrfUpdateOutqAddressFamily()
{
}

bool ClearBgpVrfUpdateOutqAddressFamily::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqAddressFamily>();
}

std::string ClearBgpVrfUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqAddressFamily::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqAddressFamily::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::ClearBgpVrfUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::~ClearBgpVrfUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddr::ClearBgpVrfUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddr::~ClearBgpVrfUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqNeighborIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroup::ClearBgpVrfUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroup::~ClearBgpVrfUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return vrf_all.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return vrf_all.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::ClearBgpVrfUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::~ClearBgpVrfUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return vrf_all.is_set
	|| update_group.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "update-group")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroup::ClearBgpVrfUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpVrfUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroup::~ClearBgpVrfUpdateOutqUpdateGroup()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroup>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfUpdateOutqUpdateGroup::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroup::Input::has_data() const
{
    return vrf_all.is_set
	|| update_group.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpVrfUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVrfUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpVrfUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "update-group")
        return true;
    return false;
}


}
}

