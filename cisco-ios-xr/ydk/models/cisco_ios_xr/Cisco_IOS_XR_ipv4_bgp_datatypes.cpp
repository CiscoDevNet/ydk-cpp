
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_datatypes {

const Enum::YLeaf BgpSubsequentAddressFamilyEnum::unicast {1, "unicast"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::multicast {2, "multicast"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::labeled_unicast {4, "labeled-unicast"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::mvpn {5, "mvpn"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::mspw {6, "mspw"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::tunnel {64, "tunnel"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::vpls {65, "vpls"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::mdt {66, "mdt"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::vpws {68, "vpws"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::evpn {70, "evpn"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::ls {71, "ls"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::sr_policy {73, "sr-policy"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::vpn {128, "vpn"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::vpn_mcast {129, "vpn-mcast"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::rt_filter {132, "rt-filter"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::flowspec {133, "flowspec"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::vpn_flowspec {134, "vpn-flowspec"};
const Enum::YLeaf BgpSubsequentAddressFamilyEnum::all {254, "all"};

const Enum::YLeaf BgpNbrCapAdditionalPathsCfgEnum::enable {1, "enable"};
const Enum::YLeaf BgpNbrCapAdditionalPathsCfgEnum::disable {2, "disable"};

const Enum::YLeaf BgpOfficialAddressFamilyEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf BgpOfficialAddressFamilyEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf BgpOfficialAddressFamilyEnum::l2vpn {25, "l2vpn"};
const Enum::YLeaf BgpOfficialAddressFamilyEnum::ls {16388, "ls"};
const Enum::YLeaf BgpOfficialAddressFamilyEnum::all {65534, "all"};

const Enum::YLeaf BgpafAdditionalPathsCfgEnum::enable {1, "enable"};
const Enum::YLeaf BgpafAdditionalPathsCfgEnum::disable {2, "disable"};

const Enum::YLeaf BgpTosEnum::precedence {0, "precedence"};
const Enum::YLeaf BgpTosEnum::dscp {1, "dscp"};

const Enum::YLeaf BgpAddressFamilyEnum::ipv4_unicast {0, "ipv4-unicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4_multicast {1, "ipv4-multicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4_labeled_unicast {2, "ipv4-labeled-unicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4_tunnel {3, "ipv4-tunnel"};
const Enum::YLeaf BgpAddressFamilyEnum::vp_nv4_unicast {4, "vp-nv4-unicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv6_unicast {5, "ipv6-unicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv6_multicast {6, "ipv6-multicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv6_labeled_unicast {7, "ipv6-labeled-unicast"};
const Enum::YLeaf BgpAddressFamilyEnum::vp_nv6_unicast {8, "vp-nv6-unicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4mdt {9, "ipv4mdt"};
const Enum::YLeaf BgpAddressFamilyEnum::l2vpnvpls {10, "l2vpnvpls"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4rt_constraint {11, "ipv4rt-constraint"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4mvpn {12, "ipv4mvpn"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv6mvpn {13, "ipv6mvpn"};
const Enum::YLeaf BgpAddressFamilyEnum::l2vpnevpn {14, "l2vpnevpn"};
const Enum::YLeaf BgpAddressFamilyEnum::lsls {15, "lsls"};
const Enum::YLeaf BgpAddressFamilyEnum::vp_nv4_multicast {16, "vp-nv4-multicast"};
const Enum::YLeaf BgpAddressFamilyEnum::vp_nv6_multicast {17, "vp-nv6-multicast"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4_flowspec {18, "ipv4-flowspec"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv6_flowspec {19, "ipv6-flowspec"};
const Enum::YLeaf BgpAddressFamilyEnum::vp_nv4_flowspec {20, "vp-nv4-flowspec"};
const Enum::YLeaf BgpAddressFamilyEnum::vp_nv6_flowspec {21, "vp-nv6-flowspec"};
const Enum::YLeaf BgpAddressFamilyEnum::l2vpnmspw {22, "l2vpnmspw"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv4sr_policy {23, "ipv4sr-policy"};
const Enum::YLeaf BgpAddressFamilyEnum::ipv6sr_policy {24, "ipv6sr-policy"};
const Enum::YLeaf BgpAddressFamilyEnum::all_address_family {25, "all-address-family"};

const Enum::YLeaf BgpPrecedenceDscpEnum::af11 {10, "af11"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af12 {12, "af12"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af13 {14, "af13"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af21 {18, "af21"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af22 {20, "af22"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af23 {22, "af23"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af31 {26, "af31"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af32 {28, "af32"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af33 {30, "af33"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af41 {34, "af41"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af42 {36, "af42"};
const Enum::YLeaf BgpPrecedenceDscpEnum::af43 {38, "af43"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs1 {8, "cs1"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs2 {16, "cs2"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs3 {24, "cs3"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs4 {32, "cs4"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs5 {40, "cs5"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs6 {48, "cs6"};
const Enum::YLeaf BgpPrecedenceDscpEnum::cs7 {56, "cs7"};
const Enum::YLeaf BgpPrecedenceDscpEnum::ef {46, "ef"};
const Enum::YLeaf BgpPrecedenceDscpEnum::critical {5, "critical"};
const Enum::YLeaf BgpPrecedenceDscpEnum::flash {3, "flash"};
const Enum::YLeaf BgpPrecedenceDscpEnum::flash_override {4, "flash-override"};
const Enum::YLeaf BgpPrecedenceDscpEnum::immediate {2, "immediate"};
const Enum::YLeaf BgpPrecedenceDscpEnum::internet {6, "internet"};
const Enum::YLeaf BgpPrecedenceDscpEnum::network {7, "network"};
const Enum::YLeaf BgpPrecedenceDscpEnum::priority {1, "priority"};
const Enum::YLeaf BgpPrecedenceDscpEnum::default_or_routine {0, "default-or-routine"};

const Enum::YLeaf BgpAdvertiseLocalLabeledRouteCfgEnum::enable {1, "enable"};
const Enum::YLeaf BgpAdvertiseLocalLabeledRouteCfgEnum::disable {2, "disable"};

const Enum::YLeaf BgpUpdateFilterActionEnum::treat_as_withdraw {1, "treat-as-withdraw"};
const Enum::YLeaf BgpUpdateFilterActionEnum::discard_attibute {2, "discard-attibute"};


}
}

