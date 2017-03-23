
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_patch_panel_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_patch_panel_cfg {

PatchPanel::PatchPanel()
    :
    enable{YType::empty, "enable"},
    ipv4{YType::str, "ipv4"},
    password{YType::str, "password"},
    user_name{YType::str, "user-name"}
{
    yang_name = "patch-panel"; yang_parent_name = "Cisco-IOS-XR-patch-panel-cfg";
}

PatchPanel::~PatchPanel()
{
}

bool PatchPanel::has_data() const
{
    return enable.is_set
	|| ipv4.is_set
	|| password.is_set
	|| user_name.is_set;
}

bool PatchPanel::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(ipv4.operation)
	|| is_set(password.operation)
	|| is_set(user_name.operation);
}

std::string PatchPanel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-patch-panel-cfg:patch-panel";

    return path_buffer.str();

}

EntityPath PatchPanel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (user_name.is_set || is_set(user_name.operation)) leaf_name_data.push_back(user_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PatchPanel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PatchPanel::get_children()
{
    return children;
}

void PatchPanel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "user-name")
    {
        user_name = value;
    }
}

std::shared_ptr<Entity> PatchPanel::clone_ptr() const
{
    return std::make_shared<PatchPanel>();
}

std::string PatchPanel::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PatchPanel::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PatchPanel::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

