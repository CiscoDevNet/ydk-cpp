
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_cfm_cfg {

const Enum::YLeaf CfmLmCountersCfgEnum::aggregate {1, "aggregate"};
const Enum::YLeaf CfmLmCountersCfgEnum::list {2, "list"};
const Enum::YLeaf CfmLmCountersCfgEnum::range {3, "range"};

const Enum::YLeaf CfmMdidFormatEnum::null {1, "null"};
const Enum::YLeaf CfmMdidFormatEnum::dns_like {2, "dns-like"};
const Enum::YLeaf CfmMdidFormatEnum::mac_address {3, "mac-address"};
const Enum::YLeaf CfmMdidFormatEnum::string {4, "string"};

const Enum::YLeaf CfmShortMaNameFormatEnum::vlan_id {1, "vlan-id"};
const Enum::YLeaf CfmShortMaNameFormatEnum::string {2, "string"};
const Enum::YLeaf CfmShortMaNameFormatEnum::number {3, "number"};
const Enum::YLeaf CfmShortMaNameFormatEnum::vpn_id {4, "vpn-id"};
const Enum::YLeaf CfmShortMaNameFormatEnum::icc_based {32, "icc-based"};

const Enum::YLeaf CfmServiceEnum::bridge_domain {1, "bridge-domain"};
const Enum::YLeaf CfmServiceEnum::p2p_cross_connect {2, "p2p-cross-connect"};
const Enum::YLeaf CfmServiceEnum::mp2mp_cross_connect {3, "mp2mp-cross-connect"};
const Enum::YLeaf CfmServiceEnum::down_meps {4, "down-meps"};

const Enum::YLeaf CfmMipPolicyEnum::all {2, "all"};
const Enum::YLeaf CfmMipPolicyEnum::lower_mep_only {3, "lower-mep-only"};


}
}

