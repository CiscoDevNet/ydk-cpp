
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2_eth_infra_datatypes {

const Enum::YLeaf VlanTagOrCvp::native_with_cvlan_preservation {65534, "native-with-cvlan-preservation"};

const Enum::YLeaf Rewrite::pop1 {1, "pop1"};
const Enum::YLeaf Rewrite::pop2 {2, "pop2"};
const Enum::YLeaf Rewrite::push1 {3, "push1"};
const Enum::YLeaf Rewrite::push2 {4, "push2"};
const Enum::YLeaf Rewrite::translate1to1 {5, "translate1to1"};
const Enum::YLeaf Rewrite::translate1to2 {6, "translate1to2"};
const Enum::YLeaf Rewrite::translate2to1 {7, "translate2to1"};
const Enum::YLeaf Rewrite::translate2to2 {8, "translate2to2"};

const Enum::YLeaf Vlan::vlan_type_dot1ad {1, "vlan-type-dot1ad"};
const Enum::YLeaf Vlan::vlan_type_dot1q {2, "vlan-type-dot1q"};

const Enum::YLeaf EthertypeMatch::ppp_over_ethernet {34915, "ppp-over-ethernet"};

const Enum::YLeaf VlanTagOrNull::any {0, "any"};

const Enum::YLeaf VlanTagOrAny::any {4096, "any"};

const Enum::YLeaf VlanTagOrNative::native {65535, "native"};
const Enum::YLeaf VlanTagOrNative::native_with_cvlan_preservation {65534, "native-with-cvlan-preservation"};

const Enum::YLeaf Match::match_default {1, "match-default"};
const Enum::YLeaf Match::match_untagged {2, "match-untagged"};
const Enum::YLeaf Match::match_dot1q {3, "match-dot1q"};
const Enum::YLeaf Match::match_dot1ad {4, "match-dot1ad"};
const Enum::YLeaf Match::match_dot1q_priority {5, "match-dot1q-priority"};
const Enum::YLeaf Match::match_dot1ad_priority {6, "match-dot1ad-priority"};


}
}

