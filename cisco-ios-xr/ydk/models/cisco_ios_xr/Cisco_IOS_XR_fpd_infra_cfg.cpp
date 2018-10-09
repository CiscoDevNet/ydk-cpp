
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fpd_infra_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fpd_infra_cfg {

Fpd::Fpd()
    :
    auto_reload{YType::enumeration, "auto-reload"},
    auto_upgrade{YType::enumeration, "auto-upgrade"}
{

    yang_name = "fpd"; yang_parent_name = "Cisco-IOS-XR-fpd-infra-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Fpd::~Fpd()
{
}

bool Fpd::has_data() const
{
    if (is_presence_container) return true;
    return auto_reload.is_set
	|| auto_upgrade.is_set;
}

bool Fpd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_reload.yfilter)
	|| ydk::is_set(auto_upgrade.yfilter);
}

std::string Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fpd-infra-cfg:fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_reload.is_set || is_set(auto_reload.yfilter)) leaf_name_data.push_back(auto_reload.get_name_leafdata());
    if (auto_upgrade.is_set || is_set(auto_upgrade.yfilter)) leaf_name_data.push_back(auto_upgrade.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Fpd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-reload")
    {
        auto_reload = value;
        auto_reload.value_namespace = name_space;
        auto_reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-upgrade")
    {
        auto_upgrade = value;
        auto_upgrade.value_namespace = name_space;
        auto_upgrade.value_namespace_prefix = name_space_prefix;
    }
}

void Fpd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-reload")
    {
        auto_reload.yfilter = yfilter;
    }
    if(value_path == "auto-upgrade")
    {
        auto_upgrade.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Fpd::clone_ptr() const
{
    return std::make_shared<Fpd>();
}

std::string Fpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fpd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fpd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-reload" || name == "auto-upgrade")
        return true;
    return false;
}

const Enum::YLeaf AutoReload::disable {0, "disable"};
const Enum::YLeaf AutoReload::enable {1, "enable"};

const Enum::YLeaf AutoUpgrade::disable {0, "disable"};
const Enum::YLeaf AutoUpgrade::enable {1, "enable"};


}
}

