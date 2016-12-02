
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_mac.is_set || is_set(system_mac.operation)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Lacp::get_children()
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

std::unique_ptr<Entity> Lacp::clone_ptr()
{
    return std::make_unique<Lacp>();
}

const Enum::Value BundleMaximumActiveLinksModeEnum::default_ {0, "default"};
const Enum::Value BundleMaximumActiveLinksModeEnum::hot_standby {1, "hot-standby"};

const Enum::Value BundleCiscoExtTypesEnum::lon_signaling_off {0, "lon-signaling-off"};
const Enum::Value BundleCiscoExtTypesEnum::lon_signaling_on {1, "lon-signaling-on"};

const Enum::Value BundleModeEnum::on {0, "on"};
const Enum::Value BundleModeEnum::active {1, "active"};
const Enum::Value BundleModeEnum::passive {2, "passive"};

const Enum::Value BundleLoadBalanceEnum::default_ {0, "default"};
const Enum::Value BundleLoadBalanceEnum::efp_auto {1, "efp-auto"};
const Enum::Value BundleLoadBalanceEnum::efp_value {2, "efp-value"};
const Enum::Value BundleLoadBalanceEnum::source_ip {3, "source-ip"};
const Enum::Value BundleLoadBalanceEnum::destination_ip {4, "destination-ip"};

const Enum::Value ChurnLoggingEnum::actor {1, "actor"};
const Enum::Value ChurnLoggingEnum::partner {2, "partner"};
const Enum::Value ChurnLoggingEnum::both {3, "both"};

const Enum::Value MlacpSwitchoverEnum::brute_force {1, "brute-force"};
const Enum::Value MlacpSwitchoverEnum::revertive {2, "revertive"};

const Enum::Value MlacpMaximizeParameterEnum::links {1, "links"};
const Enum::Value MlacpMaximizeParameterEnum::bandwidth {2, "bandwidth"};

const Enum::Value BfdModeEnum::no_cfg {0, "no-cfg"};
const Enum::Value BfdModeEnum::cisco {1, "cisco"};
const Enum::Value BfdModeEnum::ietf {2, "ietf"};

const Enum::Value PeriodShortEnumEnum::true_ {1, "true"};

const Enum::Value BundlePeriodEnum::true_ {1, "true"};

const Enum::Value BundlePortActivityEnum::on {1, "on"};
const Enum::Value BundlePortActivityEnum::active {2, "active"};
const Enum::Value BundlePortActivityEnum::passive {3, "passive"};
const Enum::Value BundlePortActivityEnum::inherit {4, "inherit"};


}
}

