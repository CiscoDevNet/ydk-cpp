
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_datatypes {


const Enum::Value BgpSubsequentAddressFamilyEnum::unicast {1, "unicast"};
const Enum::Value BgpSubsequentAddressFamilyEnum::multicast {2, "multicast"};
const Enum::Value BgpSubsequentAddressFamilyEnum::labeled_unicast {4, "labeled-unicast"};
const Enum::Value BgpSubsequentAddressFamilyEnum::mvpn {5, "mvpn"};
const Enum::Value BgpSubsequentAddressFamilyEnum::mspw {6, "mspw"};
const Enum::Value BgpSubsequentAddressFamilyEnum::tunnel {64, "tunnel"};
const Enum::Value BgpSubsequentAddressFamilyEnum::vpls {65, "vpls"};
const Enum::Value BgpSubsequentAddressFamilyEnum::mdt {66, "mdt"};
const Enum::Value BgpSubsequentAddressFamilyEnum::vpws {68, "vpws"};
const Enum::Value BgpSubsequentAddressFamilyEnum::evpn {70, "evpn"};
const Enum::Value BgpSubsequentAddressFamilyEnum::ls {71, "ls"};
const Enum::Value BgpSubsequentAddressFamilyEnum::vpn {128, "vpn"};
const Enum::Value BgpSubsequentAddressFamilyEnum::vpn_mcast {129, "vpn-mcast"};
const Enum::Value BgpSubsequentAddressFamilyEnum::rt_filter {132, "rt-filter"};
const Enum::Value BgpSubsequentAddressFamilyEnum::flowspec {133, "flowspec"};
const Enum::Value BgpSubsequentAddressFamilyEnum::vpn_flowspec {134, "vpn-flowspec"};
const Enum::Value BgpSubsequentAddressFamilyEnum::all {254, "all"};

const Enum::Value BgpNbrCapAdditionalPathsCfgEnum::enable {1, "enable"};
const Enum::Value BgpNbrCapAdditionalPathsCfgEnum::disable {2, "disable"};

const Enum::Value BgpOfficialAddressFamilyEnum::ipv4 {1, "ipv4"};
const Enum::Value BgpOfficialAddressFamilyEnum::ipv6 {2, "ipv6"};
const Enum::Value BgpOfficialAddressFamilyEnum::l2vpn {25, "l2vpn"};
const Enum::Value BgpOfficialAddressFamilyEnum::ls {16388, "ls"};
const Enum::Value BgpOfficialAddressFamilyEnum::all {65534, "all"};

const Enum::Value BgpafAdditionalPathsCfgEnum::enable {1, "enable"};
const Enum::Value BgpafAdditionalPathsCfgEnum::disable {2, "disable"};

const Enum::Value BgpTosEnum::precedence {0, "precedence"};
const Enum::Value BgpTosEnum::dscp {1, "dscp"};

const Enum::Value BgpAddressFamilyEnum::ipv4_unicast {0, "ipv4-unicast"};
const Enum::Value BgpAddressFamilyEnum::ipv4_multicast {1, "ipv4-multicast"};
const Enum::Value BgpAddressFamilyEnum::ipv4_labeled_unicast {2, "ipv4-labeled-unicast"};
const Enum::Value BgpAddressFamilyEnum::ipv4_tunnel {3, "ipv4-tunnel"};
const Enum::Value BgpAddressFamilyEnum::vp_nv4_unicast {4, "vp-nv4-unicast"};
const Enum::Value BgpAddressFamilyEnum::ipv6_unicast {5, "ipv6-unicast"};
const Enum::Value BgpAddressFamilyEnum::ipv6_multicast {6, "ipv6-multicast"};
const Enum::Value BgpAddressFamilyEnum::ipv6_labeled_unicast {7, "ipv6-labeled-unicast"};
const Enum::Value BgpAddressFamilyEnum::vp_nv6_unicast {8, "vp-nv6-unicast"};
const Enum::Value BgpAddressFamilyEnum::ipv4mdt {9, "ipv4mdt"};
const Enum::Value BgpAddressFamilyEnum::l2vpnvpls {10, "l2vpnvpls"};
const Enum::Value BgpAddressFamilyEnum::ipv4rt_constraint {11, "ipv4rt-constraint"};
const Enum::Value BgpAddressFamilyEnum::ipv4mvpn {12, "ipv4mvpn"};
const Enum::Value BgpAddressFamilyEnum::ipv6mvpn {13, "ipv6mvpn"};
const Enum::Value BgpAddressFamilyEnum::l2vpnevpn {14, "l2vpnevpn"};
const Enum::Value BgpAddressFamilyEnum::lsls {15, "lsls"};
const Enum::Value BgpAddressFamilyEnum::vp_nv4_multicast {16, "vp-nv4-multicast"};
const Enum::Value BgpAddressFamilyEnum::vp_nv6_multicast {17, "vp-nv6-multicast"};
const Enum::Value BgpAddressFamilyEnum::ipv4_flowspec {18, "ipv4-flowspec"};
const Enum::Value BgpAddressFamilyEnum::ipv6_flowspec {19, "ipv6-flowspec"};
const Enum::Value BgpAddressFamilyEnum::vp_nv4_flowspec {20, "vp-nv4-flowspec"};
const Enum::Value BgpAddressFamilyEnum::vp_nv6_flowspec {21, "vp-nv6-flowspec"};
const Enum::Value BgpAddressFamilyEnum::l2vpnmspw {22, "l2vpnmspw"};
const Enum::Value BgpAddressFamilyEnum::all_address_family {23, "all-address-family"};

const Enum::Value BgpPrecedenceDscpEnum::af11 {10, "af11"};
const Enum::Value BgpPrecedenceDscpEnum::af12 {12, "af12"};
const Enum::Value BgpPrecedenceDscpEnum::af13 {14, "af13"};
const Enum::Value BgpPrecedenceDscpEnum::af21 {18, "af21"};
const Enum::Value BgpPrecedenceDscpEnum::af22 {20, "af22"};
const Enum::Value BgpPrecedenceDscpEnum::af23 {22, "af23"};
const Enum::Value BgpPrecedenceDscpEnum::af31 {26, "af31"};
const Enum::Value BgpPrecedenceDscpEnum::af32 {28, "af32"};
const Enum::Value BgpPrecedenceDscpEnum::af33 {30, "af33"};
const Enum::Value BgpPrecedenceDscpEnum::af41 {34, "af41"};
const Enum::Value BgpPrecedenceDscpEnum::af42 {36, "af42"};
const Enum::Value BgpPrecedenceDscpEnum::af43 {38, "af43"};
const Enum::Value BgpPrecedenceDscpEnum::cs1 {8, "cs1"};
const Enum::Value BgpPrecedenceDscpEnum::cs2 {16, "cs2"};
const Enum::Value BgpPrecedenceDscpEnum::cs3 {24, "cs3"};
const Enum::Value BgpPrecedenceDscpEnum::cs4 {32, "cs4"};
const Enum::Value BgpPrecedenceDscpEnum::cs5 {40, "cs5"};
const Enum::Value BgpPrecedenceDscpEnum::cs6 {48, "cs6"};
const Enum::Value BgpPrecedenceDscpEnum::cs7 {56, "cs7"};
const Enum::Value BgpPrecedenceDscpEnum::ef {46, "ef"};
const Enum::Value BgpPrecedenceDscpEnum::critical {5, "critical"};
const Enum::Value BgpPrecedenceDscpEnum::flash {3, "flash"};
const Enum::Value BgpPrecedenceDscpEnum::flash_override {4, "flash-override"};
const Enum::Value BgpPrecedenceDscpEnum::immediate {2, "immediate"};
const Enum::Value BgpPrecedenceDscpEnum::internet {6, "internet"};
const Enum::Value BgpPrecedenceDscpEnum::network {7, "network"};
const Enum::Value BgpPrecedenceDscpEnum::priority {1, "priority"};
const Enum::Value BgpPrecedenceDscpEnum::default_or_routine {0, "default-or-routine"};

const Enum::Value BgpUpdateFilterActionEnum::treat_as_withdraw {1, "treat-as-withdraw"};
const Enum::Value BgpUpdateFilterActionEnum::discard_attibute {2, "discard-attibute"};


}
}

