
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_cfg {

Lacp::Lacp()
    :
    system_mac{YType::str, "system-mac"},
    system_priority{YType::uint32, "system-priority"}
{

    yang_name = "lacp"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Lacp::~Lacp()
{
}

bool Lacp::has_data() const
{
    if (is_presence_container) return true;
    return system_mac.is_set
	|| system_priority.is_set;
}

bool Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_mac.yfilter)
	|| ydk::is_set(system_priority.yfilter);
}

std::string Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Lacp::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Lacp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac" || name == "system-priority")
        return true;
    return false;
}

const Enum::YLeaf BundleMaximumActiveLinksMode::default_ {0, "default"};
const Enum::YLeaf BundleMaximumActiveLinksMode::hot_standby {1, "hot-standby"};

const Enum::YLeaf BundleCiscoExtTypes::lon_signaling_off {0, "lon-signaling-off"};
const Enum::YLeaf BundleCiscoExtTypes::lon_signaling_on {1, "lon-signaling-on"};

const Enum::YLeaf BundleMode::on {0, "on"};
const Enum::YLeaf BundleMode::active {1, "active"};
const Enum::YLeaf BundleMode::passive {2, "passive"};

const Enum::YLeaf BundleLoadBalance::default_ {0, "default"};
const Enum::YLeaf BundleLoadBalance::efp_auto {1, "efp-auto"};
const Enum::YLeaf BundleLoadBalance::efp_value {2, "efp-value"};
const Enum::YLeaf BundleLoadBalance::source_ip {3, "source-ip"};
const Enum::YLeaf BundleLoadBalance::destination_ip {4, "destination-ip"};

const Enum::YLeaf ChurnLogging::actor {1, "actor"};
const Enum::YLeaf ChurnLogging::partner {2, "partner"};
const Enum::YLeaf ChurnLogging::both {3, "both"};

const Enum::YLeaf MlacpSwitchover::brute_force {1, "brute-force"};
const Enum::YLeaf MlacpSwitchover::revertive {2, "revertive"};

const Enum::YLeaf MlacpMaximizeParameter::links {1, "links"};
const Enum::YLeaf MlacpMaximizeParameter::bandwidth {2, "bandwidth"};

const Enum::YLeaf BfdMode::no_cfg {0, "no-cfg"};
const Enum::YLeaf BfdMode::cisco {1, "cisco"};
const Enum::YLeaf BfdMode::ietf {2, "ietf"};

const Enum::YLeaf PeriodShortEnum::true_ {1, "true"};

const Enum::YLeaf BundleMinimumBandwidthRange::none {0, "none"};
const Enum::YLeaf BundleMinimumBandwidthRange::kbps {1, "kbps"};
const Enum::YLeaf BundleMinimumBandwidthRange::mbps {2, "mbps"};
const Enum::YLeaf BundleMinimumBandwidthRange::gbps {3, "gbps"};

const Enum::YLeaf BundlePeriod::true_ {1, "true"};

const Enum::YLeaf BundlePortActivity::on {1, "on"};
const Enum::YLeaf BundlePortActivity::active {2, "active"};
const Enum::YLeaf BundlePortActivity::passive {3, "passive"};
const Enum::YLeaf BundlePortActivity::inherit {4, "inherit"};


}
}

