
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2_eth_infra_datatypes {

const Enum::YLeaf VlanTagOrCvpEnum::native_with_cvlan_preservation {65534, "native-with-cvlan-preservation"};

const Enum::YLeaf RewriteEnum::pop1 {1, "pop1"};
const Enum::YLeaf RewriteEnum::pop2 {2, "pop2"};
const Enum::YLeaf RewriteEnum::push1 {3, "push1"};
const Enum::YLeaf RewriteEnum::push2 {4, "push2"};
const Enum::YLeaf RewriteEnum::translate1to1 {5, "translate1to1"};
const Enum::YLeaf RewriteEnum::translate1to2 {6, "translate1to2"};
const Enum::YLeaf RewriteEnum::translate2to1 {7, "translate2to1"};
const Enum::YLeaf RewriteEnum::translate2to2 {8, "translate2to2"};

const Enum::YLeaf VlanEnum::vlan_type_dot1ad {1, "vlan-type-dot1ad"};
const Enum::YLeaf VlanEnum::vlan_type_dot1q {2, "vlan-type-dot1q"};

const Enum::YLeaf EthertypeMatchEnum::ppp_over_ethernet {34915, "ppp-over-ethernet"};

const Enum::YLeaf VlanTagOrNullEnum::any {0, "any"};

const Enum::YLeaf VlanTagOrAnyEnum::any {4096, "any"};

const Enum::YLeaf VlanTagOrNativeEnum::native {65535, "native"};
const Enum::YLeaf VlanTagOrNativeEnum::native_with_cvlan_preservation {65534, "native-with-cvlan-preservation"};

const Enum::YLeaf MatchEnum::match_default {1, "match-default"};
const Enum::YLeaf MatchEnum::match_untagged {2, "match-untagged"};
const Enum::YLeaf MatchEnum::match_dot1q {3, "match-dot1q"};
const Enum::YLeaf MatchEnum::match_dot1ad {4, "match-dot1ad"};
const Enum::YLeaf MatchEnum::match_dot1q_priority {5, "match-dot1q-priority"};
const Enum::YLeaf MatchEnum::match_dot1ad_priority {6, "match-dot1ad-priority"};


}
}

