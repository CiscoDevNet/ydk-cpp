
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_arp_act.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_arp_act {

ClearArpApiStatsApi::ClearArpApiStatsApi()
    :
    input(std::make_shared<ClearArpApiStatsApi::Input>())
{
    input->parent = this;

    yang_name = "clear-arp-api-stats-api"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearArpApiStatsApi::~ClearArpApiStatsApi()
{
}

bool ClearArpApiStatsApi::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearArpApiStatsApi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearArpApiStatsApi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-act:clear-arp-api-stats-api";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearArpApiStatsApi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearArpApiStatsApi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearArpApiStatsApi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearArpApiStatsApi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearArpApiStatsApi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearArpApiStatsApi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearArpApiStatsApi::clone_ptr() const
{
    return std::make_shared<ClearArpApiStatsApi>();
}

std::string ClearArpApiStatsApi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearArpApiStatsApi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearArpApiStatsApi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearArpApiStatsApi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearArpApiStatsApi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearArpApiStatsApi::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "clear-arp-api-stats-api"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearArpApiStatsApi::Input::~Input()
{
}

bool ClearArpApiStatsApi::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool ClearArpApiStatsApi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string ClearArpApiStatsApi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-act:clear-arp-api-stats-api/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearArpApiStatsApi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearArpApiStatsApi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearArpApiStatsApi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearArpApiStatsApi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearArpApiStatsApi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearArpApiStatsApi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool ClearArpApiStatsApi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

ClearArpApiStatsLocation::ClearArpApiStatsLocation()
    :
    input(std::make_shared<ClearArpApiStatsLocation::Input>())
{
    input->parent = this;

    yang_name = "clear-arp-api-stats-location"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-act"; is_top_level_class = true; has_list_ancestor = false; 
}

ClearArpApiStatsLocation::~ClearArpApiStatsLocation()
{
}

bool ClearArpApiStatsLocation::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool ClearArpApiStatsLocation::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearArpApiStatsLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-act:clear-arp-api-stats-location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearArpApiStatsLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearArpApiStatsLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearArpApiStatsLocation::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearArpApiStatsLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    return _children;
}

void ClearArpApiStatsLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearArpApiStatsLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClearArpApiStatsLocation::clone_ptr() const
{
    return std::make_shared<ClearArpApiStatsLocation>();
}

std::string ClearArpApiStatsLocation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearArpApiStatsLocation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearArpApiStatsLocation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearArpApiStatsLocation::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearArpApiStatsLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearArpApiStatsLocation::Input::Input()
    :
    node_location{YType::str, "node-location"}
{

    yang_name = "input"; yang_parent_name = "clear-arp-api-stats-location"; is_top_level_class = false; has_list_ancestor = false; 
}

ClearArpApiStatsLocation::Input::~Input()
{
}

bool ClearArpApiStatsLocation::Input::has_data() const
{
    if (is_presence_container) return true;
    return node_location.is_set;
}

bool ClearArpApiStatsLocation::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter);
}

std::string ClearArpApiStatsLocation::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-act:clear-arp-api-stats-location/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearArpApiStatsLocation::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearArpApiStatsLocation::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClearArpApiStatsLocation::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClearArpApiStatsLocation::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClearArpApiStatsLocation::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
}

void ClearArpApiStatsLocation::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
}

bool ClearArpApiStatsLocation::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-location")
        return true;
    return false;
}


}
}

