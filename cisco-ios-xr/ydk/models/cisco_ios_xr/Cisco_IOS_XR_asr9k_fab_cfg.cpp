
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_fab_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_fab_cfg {

FabVqiConfig::FabVqiConfig()
    :
    mode(std::make_shared<FabVqiConfig::Mode>())
{
    mode->parent = this;

    yang_name = "fab-vqi-config"; yang_parent_name = "Cisco-IOS-XR-asr9k-fab-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

FabVqiConfig::~FabVqiConfig()
{
}

bool FabVqiConfig::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool FabVqiConfig::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string FabVqiConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fab-cfg:fab-vqi-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabVqiConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FabVqiConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<FabVqiConfig::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabVqiConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void FabVqiConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FabVqiConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FabVqiConfig::clone_ptr() const
{
    return std::make_shared<FabVqiConfig>();
}

std::string FabVqiConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FabVqiConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FabVqiConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FabVqiConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FabVqiConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

FabVqiConfig::Mode::Mode()
    :
    fab_mode_type_xr{YType::enumeration, "fab-mode-type-xr"},
    fab_mode_type{YType::enumeration, "fab-mode-type"}
{

    yang_name = "mode"; yang_parent_name = "fab-vqi-config"; is_top_level_class = false; has_list_ancestor = false; 
}

FabVqiConfig::Mode::~Mode()
{
}

bool FabVqiConfig::Mode::has_data() const
{
    if (is_presence_container) return true;
    return fab_mode_type_xr.is_set
	|| fab_mode_type.is_set;
}

bool FabVqiConfig::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fab_mode_type_xr.yfilter)
	|| ydk::is_set(fab_mode_type.yfilter);
}

std::string FabVqiConfig::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fab-cfg:fab-vqi-config/" << get_segment_path();
    return path_buffer.str();
}

std::string FabVqiConfig::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabVqiConfig::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fab_mode_type_xr.is_set || is_set(fab_mode_type_xr.yfilter)) leaf_name_data.push_back(fab_mode_type_xr.get_name_leafdata());
    if (fab_mode_type.is_set || is_set(fab_mode_type.yfilter)) leaf_name_data.push_back(fab_mode_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FabVqiConfig::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabVqiConfig::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FabVqiConfig::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fab-mode-type-xr")
    {
        fab_mode_type_xr = value;
        fab_mode_type_xr.value_namespace = name_space;
        fab_mode_type_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab-mode-type")
    {
        fab_mode_type = value;
        fab_mode_type.value_namespace = name_space;
        fab_mode_type.value_namespace_prefix = name_space_prefix;
    }
}

void FabVqiConfig::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fab-mode-type-xr")
    {
        fab_mode_type_xr.yfilter = yfilter;
    }
    if(value_path == "fab-mode-type")
    {
        fab_mode_type.yfilter = yfilter;
    }
}

bool FabVqiConfig::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fab-mode-type-xr" || name == "fab-mode-type")
        return true;
    return false;
}

const Enum::YLeaf Asr9kFabMode::a99_highbandwidth {2, "a99-highbandwidth"};


}
}

