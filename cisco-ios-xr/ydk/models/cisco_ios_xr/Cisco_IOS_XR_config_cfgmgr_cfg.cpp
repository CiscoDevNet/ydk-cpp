
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_config_cfgmgr_cfg {

Cfgmgr::Cfgmgr()
    :
    mode_exclusive{YType::boolean, "mode-exclusive"}
{
    yang_name = "cfgmgr"; yang_parent_name = "Cisco-IOS-XR-config-cfgmgr-cfg";
}

Cfgmgr::~Cfgmgr()
{
}

bool Cfgmgr::has_data() const
{
    return mode_exclusive.is_set;
}

bool Cfgmgr::has_operation() const
{
    return is_set(operation)
	|| is_set(mode_exclusive.operation);
}

std::string Cfgmgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-config-cfgmgr-cfg:cfgmgr";

    return path_buffer.str();

}

const EntityPath Cfgmgr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_exclusive.is_set || is_set(mode_exclusive.operation)) leaf_name_data.push_back(mode_exclusive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cfgmgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cfgmgr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cfgmgr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode-exclusive")
    {
        mode_exclusive = value;
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


}
}

