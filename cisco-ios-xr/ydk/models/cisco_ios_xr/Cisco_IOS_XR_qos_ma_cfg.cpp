
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_qos_ma_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_qos_ma_cfg {

Qos::Qos()
    :
    fabric_service_policy{YType::str, "fabric-service-policy"}
{
    yang_name = "qos"; yang_parent_name = "Cisco-IOS-XR-qos-ma-cfg";
}

Qos::~Qos()
{
}

bool Qos::has_data() const
{
    return fabric_service_policy.is_set;
}

bool Qos::has_operation() const
{
    return is_set(operation)
	|| is_set(fabric_service_policy.operation);
}

std::string Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:qos";

    return path_buffer.str();

}

EntityPath Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabric_service_policy.is_set || is_set(fabric_service_policy.operation)) leaf_name_data.push_back(fabric_service_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Qos::get_children()
{
    return children;
}

void Qos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fabric-service-policy")
    {
        fabric_service_policy = value;
    }
}

std::shared_ptr<Entity> Qos::clone_ptr() const
{
    return std::make_shared<Qos>();
}

std::string Qos::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Qos::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Qos::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

const Enum::YLeaf QosFieldNotSupportedEnum::not_supported {0, "not-supported"};

const Enum::YLeaf QosPolicyAccountEnum::layer1 {8, "layer1"};
const Enum::YLeaf QosPolicyAccountEnum::layer2 {1, "layer2"};
const Enum::YLeaf QosPolicyAccountEnum::nolayer2 {2, "nolayer2"};
const Enum::YLeaf QosPolicyAccountEnum::user_defined {4, "user-defined"};


}
}

