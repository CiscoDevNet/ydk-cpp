
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_fia_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_fia_cfg {

FabricFiaConfig::FabricFiaConfig()
    :
    fia_intf_policer(std::make_shared<FabricFiaConfig::FiaIntfPolicer>())
{
    fia_intf_policer->parent = this;

    yang_name = "fabric-fia-config"; yang_parent_name = "Cisco-IOS-XR-asr9k-fia-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

FabricFiaConfig::~FabricFiaConfig()
{
}

bool FabricFiaConfig::has_data() const
{
    if (is_presence_container) return true;
    return (fia_intf_policer !=  nullptr && fia_intf_policer->has_data());
}

bool FabricFiaConfig::has_operation() const
{
    return is_set(yfilter)
	|| (fia_intf_policer !=  nullptr && fia_intf_policer->has_operation());
}

std::string FabricFiaConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:fabric-fia-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricFiaConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FabricFiaConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fia-intf-policer")
    {
        if(fia_intf_policer == nullptr)
        {
            fia_intf_policer = std::make_shared<FabricFiaConfig::FiaIntfPolicer>();
        }
        return fia_intf_policer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricFiaConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fia_intf_policer != nullptr)
    {
        children["fia-intf-policer"] = fia_intf_policer;
    }

    return children;
}

void FabricFiaConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FabricFiaConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FabricFiaConfig::clone_ptr() const
{
    return std::make_shared<FabricFiaConfig>();
}

std::string FabricFiaConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FabricFiaConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FabricFiaConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FabricFiaConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FabricFiaConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fia-intf-policer")
        return true;
    return false;
}

FabricFiaConfig::FiaIntfPolicer::FiaIntfPolicer()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "fia-intf-policer"; yang_parent_name = "fabric-fia-config"; is_top_level_class = false; has_list_ancestor = false; 
}

FabricFiaConfig::FiaIntfPolicer::~FiaIntfPolicer()
{
}

bool FabricFiaConfig::FiaIntfPolicer::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool FabricFiaConfig::FiaIntfPolicer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string FabricFiaConfig::FiaIntfPolicer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-fia-cfg:fabric-fia-config/" << get_segment_path();
    return path_buffer.str();
}

std::string FabricFiaConfig::FiaIntfPolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fia-intf-policer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FabricFiaConfig::FiaIntfPolicer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FabricFiaConfig::FiaIntfPolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FabricFiaConfig::FiaIntfPolicer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FabricFiaConfig::FiaIntfPolicer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void FabricFiaConfig::FiaIntfPolicer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool FabricFiaConfig::FiaIntfPolicer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}


}
}

