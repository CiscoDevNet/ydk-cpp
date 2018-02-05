
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_qos_ma_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_qos_ma_cfg {

Qos::Qos()
    :
    fabric_service_policy{YType::str, "fabric-service-policy"}
{

    yang_name = "qos"; yang_parent_name = "Cisco-IOS-XR-qos-ma-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(fabric_service_policy.yfilter);
}

std::string Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabric_service_policy.is_set || is_set(fabric_service_policy.yfilter)) leaf_name_data.push_back(fabric_service_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabric-service-policy")
    {
        fabric_service_policy = value;
        fabric_service_policy.value_namespace = name_space;
        fabric_service_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabric-service-policy")
    {
        fabric_service_policy.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> Qos::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric-service-policy")
        return true;
    return false;
}

const Enum::YLeaf QosFieldNotSupported::not_supported {0, "not-supported"};

const Enum::YLeaf QosPolicyAccount::layer1 {8, "layer1"};
const Enum::YLeaf QosPolicyAccount::layer2 {1, "layer2"};
const Enum::YLeaf QosPolicyAccount::nolayer2 {2, "nolayer2"};
const Enum::YLeaf QosPolicyAccount::user_defined {4, "user-defined"};


}
}

