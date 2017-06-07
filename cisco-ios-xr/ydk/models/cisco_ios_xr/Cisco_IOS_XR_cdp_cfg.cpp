
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_cdp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_cdp_cfg {

Cdp::Cdp()
    :
    advertise_v1_only{YType::empty, "advertise-v1-only"},
    enable{YType::boolean, "enable"},
    hold_time{YType::uint32, "hold-time"},
    log_adjacency{YType::empty, "log-adjacency"},
    timer{YType::uint32, "timer"}
{
    yang_name = "cdp"; yang_parent_name = "Cisco-IOS-XR-cdp-cfg";
}

Cdp::~Cdp()
{
}

bool Cdp::has_data() const
{
    return advertise_v1_only.is_set
	|| enable.is_set
	|| hold_time.is_set
	|| log_adjacency.is_set
	|| timer.is_set;
}

bool Cdp::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_v1_only.operation)
	|| is_set(enable.operation)
	|| is_set(hold_time.operation)
	|| is_set(log_adjacency.operation)
	|| is_set(timer.operation);
}

std::string Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-cfg:cdp";

    return path_buffer.str();

}

const EntityPath Cdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_v1_only.is_set || is_set(advertise_v1_only.operation)) leaf_name_data.push_back(advertise_v1_only.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (log_adjacency.is_set || is_set(log_adjacency.operation)) leaf_name_data.push_back(log_adjacency.get_name_leafdata());
    if (timer.is_set || is_set(timer.operation)) leaf_name_data.push_back(timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Cdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-v1-only")
    {
        advertise_v1_only = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "log-adjacency")
    {
        log_adjacency = value;
    }
    if(value_path == "timer")
    {
        timer = value;
    }
}

std::shared_ptr<Entity> Cdp::clone_ptr() const
{
    return std::make_shared<Cdp>();
}

std::string Cdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Cdp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Cdp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

