
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_cfg {

Lacp::Lacp()
    :
    system_mac{YType::str, "system-mac"},
    system_priority{YType::uint32, "system-priority"}
{
    yang_name = "lacp"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-cfg";
}

Lacp::~Lacp()
{
}

bool Lacp::has_data() const
{
    return system_mac.is_set
	|| system_priority.is_set;
}

bool Lacp::has_operation() const
{
    return is_set(operation)
	|| is_set(system_mac.operation)
	|| is_set(system_priority.operation);
}

std::string Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";

    return path_buffer.str();

}

EntityPath Lacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_mac.is_set || is_set(system_mac.operation)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Lacp::get_children()
{
    return children;
}

void Lacp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-mac")
    {
        system_mac = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

std::shared_ptr<Entity> Lacp::clone_ptr() const
{
    return std::make_shared<Lacp>();
}

std::string Lacp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Lacp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Lacp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

const Enum::YLeaf BundleMaximumActiveLinksModeEnum::default_ {0, "default"};
const Enum::YLeaf BundleMaximumActiveLinksModeEnum::hot_standby {1, "hot-standby"};

const Enum::YLeaf BundleCiscoExtTypesEnum::lon_signaling_off {0, "lon-signaling-off"};
const Enum::YLeaf BundleCiscoExtTypesEnum::lon_signaling_on {1, "lon-signaling-on"};

const Enum::YLeaf BundleModeEnum::on {0, "on"};
const Enum::YLeaf BundleModeEnum::active {1, "active"};
const Enum::YLeaf BundleModeEnum::passive {2, "passive"};

const Enum::YLeaf BundleLoadBalanceEnum::default_ {0, "default"};
const Enum::YLeaf BundleLoadBalanceEnum::efp_auto {1, "efp-auto"};
const Enum::YLeaf BundleLoadBalanceEnum::efp_value {2, "efp-value"};
const Enum::YLeaf BundleLoadBalanceEnum::source_ip {3, "source-ip"};
const Enum::YLeaf BundleLoadBalanceEnum::destination_ip {4, "destination-ip"};

const Enum::YLeaf ChurnLoggingEnum::actor {1, "actor"};
const Enum::YLeaf ChurnLoggingEnum::partner {2, "partner"};
const Enum::YLeaf ChurnLoggingEnum::both {3, "both"};

const Enum::YLeaf MlacpSwitchoverEnum::brute_force {1, "brute-force"};
const Enum::YLeaf MlacpSwitchoverEnum::revertive {2, "revertive"};

const Enum::YLeaf MlacpMaximizeParameterEnum::links {1, "links"};
const Enum::YLeaf MlacpMaximizeParameterEnum::bandwidth {2, "bandwidth"};

const Enum::YLeaf BfdModeEnum::no_cfg {0, "no-cfg"};
const Enum::YLeaf BfdModeEnum::cisco {1, "cisco"};
const Enum::YLeaf BfdModeEnum::ietf {2, "ietf"};

const Enum::YLeaf PeriodShortEnumEnum::true_ {1, "true"};

const Enum::YLeaf BundleMinimumBandwidthRangeEnum::none {0, "none"};
const Enum::YLeaf BundleMinimumBandwidthRangeEnum::kbps {1, "kbps"};
const Enum::YLeaf BundleMinimumBandwidthRangeEnum::mbps {2, "mbps"};
const Enum::YLeaf BundleMinimumBandwidthRangeEnum::gbps {3, "gbps"};

const Enum::YLeaf BundlePeriodEnum::true_ {1, "true"};

const Enum::YLeaf BundlePortActivityEnum::on {1, "on"};
const Enum::YLeaf BundlePortActivityEnum::active {2, "active"};
const Enum::YLeaf BundlePortActivityEnum::passive {3, "passive"};
const Enum::YLeaf BundlePortActivityEnum::inherit {4, "inherit"};


}
}

