
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_shellutil_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_cfg {

HostNames::HostNames()
    :
    host_name{YType::str, "host-name"}
{
    yang_name = "host-names"; yang_parent_name = "Cisco-IOS-XR-shellutil-cfg";
}

HostNames::~HostNames()
{
}

bool HostNames::has_data() const
{
    return host_name.is_set;
}

bool HostNames::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation);
}

std::string HostNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-shellutil-cfg:host-names";

    return path_buffer.str();

}

const EntityPath HostNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HostNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HostNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HostNames::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
}

std::shared_ptr<Entity> HostNames::clone_ptr() const
{
    return std::make_shared<HostNames>();
}

std::string HostNames::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HostNames::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HostNames::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

