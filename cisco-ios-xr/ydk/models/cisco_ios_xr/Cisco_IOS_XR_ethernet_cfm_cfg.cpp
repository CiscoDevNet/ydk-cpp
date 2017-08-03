
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_cfm_cfg {

const Enum::YLeaf CfmMdidFormat::null {1, "null"};
const Enum::YLeaf CfmMdidFormat::dns_like {2, "dns-like"};
const Enum::YLeaf CfmMdidFormat::mac_address {3, "mac-address"};
const Enum::YLeaf CfmMdidFormat::string {4, "string"};

const Enum::YLeaf CfmShortMaNameFormat::vlan_id {1, "vlan-id"};
const Enum::YLeaf CfmShortMaNameFormat::string {2, "string"};
const Enum::YLeaf CfmShortMaNameFormat::number {3, "number"};
const Enum::YLeaf CfmShortMaNameFormat::vpn_id {4, "vpn-id"};
const Enum::YLeaf CfmShortMaNameFormat::icc_based {32, "icc-based"};

const Enum::YLeaf CfmMipPolicy::all {2, "all"};
const Enum::YLeaf CfmMipPolicy::lower_mep_only {3, "lower-mep-only"};

const Enum::YLeaf CfmService::bridge_domain {1, "bridge-domain"};
const Enum::YLeaf CfmService::p2p_cross_connect {2, "p2p-cross-connect"};
const Enum::YLeaf CfmService::mp2mp_cross_connect {3, "mp2mp-cross-connect"};
const Enum::YLeaf CfmService::down_meps {4, "down-meps"};

const Enum::YLeaf CfmLmCountersCfg::aggregate {1, "aggregate"};
const Enum::YLeaf CfmLmCountersCfg::list {2, "list"};
const Enum::YLeaf CfmLmCountersCfg::range {3, "range"};


}
}

