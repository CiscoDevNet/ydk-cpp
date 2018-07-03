
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_config_cfgmgr_cfg {

Cfgmgr::Cfgmgr()
    :
    mode_exclusive{YType::boolean, "mode-exclusive"}
{

    yang_name = "cfgmgr"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Cfgmgr::~Cfgmgr()
{
}

bool Cfgmgr::has_data() const
{
    if (is_presence_container) return true;
    return mode_exclusive.is_set;
}

bool Cfgmgr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_exclusive.yfilter);
}

std::string Cfgmgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-cfg:cfgmgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Cfgmgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_exclusive.is_set || is_set(mode_exclusive.yfilter)) leaf_name_data.push_back(mode_exclusive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Cfgmgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfgmgr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Cfgmgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-exclusive")
    {
        mode_exclusive = value;
        mode_exclusive.value_namespace = name_space;
        mode_exclusive.value_namespace_prefix = name_space_prefix;
    }
}

void Cfgmgr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-exclusive")
    {
        mode_exclusive.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Cfgmgr::clone_ptr() const
{
    return std::make_shared<Cfgmgr>();
}

std::string Cfgmgr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Cfgmgr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Cfgmgr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Cfgmgr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Cfgmgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-exclusive")
        return true;
    return false;
}


}
}

