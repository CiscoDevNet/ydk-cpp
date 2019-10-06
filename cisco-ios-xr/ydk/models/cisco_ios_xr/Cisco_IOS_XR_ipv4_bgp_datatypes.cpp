
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_datatypes {

const Enum::YLeaf BgpAfAdditionalPathsCfg::enable {1, "enable"};
const Enum::YLeaf BgpAfAdditionalPathsCfg::disable {2, "disable"};

const Enum::YLeaf BgpSubsequentAddressFamily::unicast {1, "unicast"};
const Enum::YLeaf BgpSubsequentAddressFamily::multicast {2, "multicast"};
const Enum::YLeaf BgpSubsequentAddressFamily::labeled_unicast {4, "labeled-unicast"};
const Enum::YLeaf BgpSubsequentAddressFamily::mvpn {5, "mvpn"};
const Enum::YLeaf BgpSubsequentAddressFamily::mspw {6, "mspw"};
const Enum::YLeaf BgpSubsequentAddressFamily::tunnel {64, "tunnel"};
const Enum::YLeaf BgpSubsequentAddressFamily::vpls {65, "vpls"};
const Enum::YLeaf BgpSubsequentAddressFamily::mdt {66, "mdt"};
const Enum::YLeaf BgpSubsequentAddressFamily::vpws {68, "vpws"};
const Enum::YLeaf BgpSubsequentAddressFamily::evpn {70, "evpn"};
const Enum::YLeaf BgpSubsequentAddressFamily::ls {71, "ls"};
const Enum::YLeaf BgpSubsequentAddressFamily::sr_policy {73, "sr-policy"};
const Enum::YLeaf BgpSubsequentAddressFamily::vpn {128, "vpn"};
const Enum::YLeaf BgpSubsequentAddressFamily::vpn_mcast {129, "vpn-mcast"};
const Enum::YLeaf BgpSubsequentAddressFamily::rt_filter {132, "rt-filter"};
const Enum::YLeaf BgpSubsequentAddressFamily::flowspec {133, "flowspec"};
const Enum::YLeaf BgpSubsequentAddressFamily::vpn_flowspec {134, "vpn-flowspec"};
const Enum::YLeaf BgpSubsequentAddressFamily::all {254, "all"};

const Enum::YLeaf BgpNbrCapAdditionalPathsCfg::enable {1, "enable"};
const Enum::YLeaf BgpNbrCapAdditionalPathsCfg::disable {2, "disable"};

const Enum::YLeaf BgpOfficialAddressFamily::ipv4 {1, "ipv4"};
const Enum::YLeaf BgpOfficialAddressFamily::ipv6 {2, "ipv6"};
const Enum::YLeaf BgpOfficialAddressFamily::l2vpn {25, "l2vpn"};
const Enum::YLeaf BgpOfficialAddressFamily::ls {16388, "ls"};
const Enum::YLeaf BgpOfficialAddressFamily::all {65534, "all"};

const Enum::YLeaf BgpTos::precedence {0, "precedence"};
const Enum::YLeaf BgpTos::dscp {1, "dscp"};

const Enum::YLeaf BgpAddressFamily::ipv4_unicast {0, "ipv4-unicast"};
const Enum::YLeaf BgpAddressFamily::ipv4_multicast {1, "ipv4-multicast"};
const Enum::YLeaf BgpAddressFamily::ipv4_labeled_unicast {2, "ipv4-labeled-unicast"};
const Enum::YLeaf BgpAddressFamily::ipv4_tunnel {3, "ipv4-tunnel"};
const Enum::YLeaf BgpAddressFamily::vpnv4_unicast {4, "vpnv4-unicast"};
const Enum::YLeaf BgpAddressFamily::ipv6_unicast {5, "ipv6-unicast"};
const Enum::YLeaf BgpAddressFamily::ipv6_multicast {6, "ipv6-multicast"};
const Enum::YLeaf BgpAddressFamily::ipv6_labeled_unicast {7, "ipv6-labeled-unicast"};
const Enum::YLeaf BgpAddressFamily::vpnv6_unicast {8, "vpnv6-unicast"};
const Enum::YLeaf BgpAddressFamily::ipv4_mdt {9, "ipv4-mdt"};
const Enum::YLeaf BgpAddressFamily::l2vpn_vpls {10, "l2vpn-vpls"};
const Enum::YLeaf BgpAddressFamily::ipv4rt_constraint {11, "ipv4rt-constraint"};
const Enum::YLeaf BgpAddressFamily::ipv4_mvpn {12, "ipv4-mvpn"};
const Enum::YLeaf BgpAddressFamily::ipv6_mvpn {13, "ipv6-mvpn"};
const Enum::YLeaf BgpAddressFamily::l2vpn_evpn {14, "l2vpn-evpn"};
const Enum::YLeaf BgpAddressFamily::lsls {15, "lsls"};
const Enum::YLeaf BgpAddressFamily::vpnv4_multicast {16, "vpnv4-multicast"};
const Enum::YLeaf BgpAddressFamily::vpnv6_multicast {17, "vpnv6-multicast"};
const Enum::YLeaf BgpAddressFamily::ipv4_flowspec {18, "ipv4-flowspec"};
const Enum::YLeaf BgpAddressFamily::ipv6_flowspec {19, "ipv6-flowspec"};
const Enum::YLeaf BgpAddressFamily::vpnv4_flowspec {20, "vpnv4-flowspec"};
const Enum::YLeaf BgpAddressFamily::vpnv6_flowspec {21, "vpnv6-flowspec"};
const Enum::YLeaf BgpAddressFamily::l2vpn_mspw {22, "l2vpn-mspw"};
const Enum::YLeaf BgpAddressFamily::ipv4_sr_policy {23, "ipv4-sr-policy"};
const Enum::YLeaf BgpAddressFamily::ipv6_sr_policy {24, "ipv6-sr-policy"};
const Enum::YLeaf BgpAddressFamily::all_address_family {25, "all-address-family"};

const Enum::YLeaf BgpPrecedenceDscp::af11 {10, "af11"};
const Enum::YLeaf BgpPrecedenceDscp::af12 {12, "af12"};
const Enum::YLeaf BgpPrecedenceDscp::af13 {14, "af13"};
const Enum::YLeaf BgpPrecedenceDscp::af21 {18, "af21"};
const Enum::YLeaf BgpPrecedenceDscp::af22 {20, "af22"};
const Enum::YLeaf BgpPrecedenceDscp::af23 {22, "af23"};
const Enum::YLeaf BgpPrecedenceDscp::af31 {26, "af31"};
const Enum::YLeaf BgpPrecedenceDscp::af32 {28, "af32"};
const Enum::YLeaf BgpPrecedenceDscp::af33 {30, "af33"};
const Enum::YLeaf BgpPrecedenceDscp::af41 {34, "af41"};
const Enum::YLeaf BgpPrecedenceDscp::af42 {36, "af42"};
const Enum::YLeaf BgpPrecedenceDscp::af43 {38, "af43"};
const Enum::YLeaf BgpPrecedenceDscp::cs1 {8, "cs1"};
const Enum::YLeaf BgpPrecedenceDscp::cs2 {16, "cs2"};
const Enum::YLeaf BgpPrecedenceDscp::cs3 {24, "cs3"};
const Enum::YLeaf BgpPrecedenceDscp::cs4 {32, "cs4"};
const Enum::YLeaf BgpPrecedenceDscp::cs5 {40, "cs5"};
const Enum::YLeaf BgpPrecedenceDscp::cs6 {48, "cs6"};
const Enum::YLeaf BgpPrecedenceDscp::cs7 {56, "cs7"};
const Enum::YLeaf BgpPrecedenceDscp::ef {46, "ef"};
const Enum::YLeaf BgpPrecedenceDscp::critical {5, "critical"};
const Enum::YLeaf BgpPrecedenceDscp::flash {3, "flash"};
const Enum::YLeaf BgpPrecedenceDscp::flash_override {4, "flash-override"};
const Enum::YLeaf BgpPrecedenceDscp::immediate {2, "immediate"};
const Enum::YLeaf BgpPrecedenceDscp::internet {6, "internet"};
const Enum::YLeaf BgpPrecedenceDscp::network {7, "network"};
const Enum::YLeaf BgpPrecedenceDscp::priority {1, "priority"};
const Enum::YLeaf BgpPrecedenceDscp::default_or_routine {0, "default-or-routine"};

const Enum::YLeaf BgpAdvertiseLocalLabeledRouteCfg::enable {1, "enable"};
const Enum::YLeaf BgpAdvertiseLocalLabeledRouteCfg::disable {2, "disable"};

const Enum::YLeaf BgpUpdateFilterAction::treat_as_withdraw {1, "treat-as-withdraw"};
const Enum::YLeaf BgpUpdateFilterAction::discard_attibute {2, "discard-attibute"};


}
}

