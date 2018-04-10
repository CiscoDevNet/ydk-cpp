
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_resources_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fretta_bcm_dpa_resources_datatypes {

const Enum::YLeaf DpaTable::test_if {0, "test-if"};
const Enum::YLeaf DpaTable::test_nhg {1, "test-nhg"};
const Enum::YLeaf DpaTable::test_nh {2, "test-nh"};
const Enum::YLeaf DpaTable::test_rt {3, "test-rt"};
const Enum::YLeaf DpaTable::test_dynhg {4, "test-dynhg"};
const Enum::YLeaf DpaTable::test_ip_punt_policy {5, "test-ip-punt-policy"};
const Enum::YLeaf DpaTable::test_punt {6, "test-punt"};
const Enum::YLeaf DpaTable::test_punt_policy_stats {7, "test-punt-policy-stats"};
const Enum::YLeaf DpaTable::test_async_update {8, "test-async-update"};
const Enum::YLeaf DpaTable::test_ddel_q {9, "test-ddel-q"};
const Enum::YLeaf DpaTable::bdbvi {10, "bdbvi"};
const Enum::YLeaf DpaTable::sys {11, "sys"};
const Enum::YLeaf DpaTable::npu {12, "npu"};
const Enum::YLeaf DpaTable::npuhwid {13, "npuhwid"};
const Enum::YLeaf DpaTable::l1_port {14, "l1-port"};
const Enum::YLeaf DpaTable::l2_port {15, "l2-port"};
const Enum::YLeaf DpaTable::l2intf {16, "l2intf"};
const Enum::YLeaf DpaTable::mplspwe_port {17, "mplspwe-port"};
const Enum::YLeaf DpaTable::mhpwe_port {18, "mhpwe-port"};
const Enum::YLeaf DpaTable::l2xc {19, "l2xc"};
const Enum::YLeaf DpaTable::l2vpnstats {20, "l2vpnstats"};
const Enum::YLeaf DpaTable::l1_ports_tats {21, "l1-ports-tats"};
const Enum::YLeaf DpaTable::l3intf {22, "l3intf"};
const Enum::YLeaf DpaTable::l3intfrxstats {23, "l3intfrxstats"};
const Enum::YLeaf DpaTable::ip_route {24, "ip-route"};
const Enum::YLeaf DpaTable::ip6_route {25, "ip6-route"};
const Enum::YLeaf DpaTable::punt_policy_stats {26, "punt-policy-stats"};
const Enum::YLeaf DpaTable::ip_punt_policy {27, "ip-punt-policy"};
const Enum::YLeaf DpaTable::ip6_punt_policy {28, "ip6-punt-policy"};
const Enum::YLeaf DpaTable::isis_punt_policy {29, "isis-punt-policy"};
const Enum::YLeaf DpaTable::ipnh_group {30, "ipnh-group"};
const Enum::YLeaf DpaTable::ip6nh_group {31, "ip6nh-group"};
const Enum::YLeaf DpaTable::ipnh {32, "ipnh"};
const Enum::YLeaf DpaTable::ip6nh {33, "ip6nh"};
const Enum::YLeaf DpaTable::ipvrf {34, "ipvrf"};
const Enum::YLeaf DpaTable::mplsnh {35, "mplsnh"};
const Enum::YLeaf DpaTable::mpls_label {36, "mpls-label"};
const Enum::YLeaf DpaTable::dnx_trap {37, "dnx-trap"};
const Enum::YLeaf DpaTable::punt {38, "punt"};
const Enum::YLeaf DpaTable::punt_police_r {39, "punt-police-r"};
const Enum::YLeaf DpaTable::punt_lpts_police_r {40, "punt-lpts-police-r"};
const Enum::YLeaf DpaTable::punt_stats {41, "punt-stats"};
const Enum::YLeaf DpaTable::tm_port {42, "tm-port"};
const Enum::YLeaf DpaTable::span_session {43, "span-session"};
const Enum::YLeaf DpaTable::police_rstats {44, "police-rstats"};
const Enum::YLeaf DpaTable::tm_ports_tats {45, "tm-ports-tats"};
const Enum::YLeaf DpaTable::l3intftxstats {46, "l3intftxstats"};
const Enum::YLeaf DpaTable::mplstetxstats {47, "mplstetxstats"};
const Enum::YLeaf DpaTable::mplslblstats {48, "mplslblstats"};
const Enum::YLeaf DpaTable::police_r {49, "police-r"};
const Enum::YLeaf DpaTable::l2intfrxstats {50, "l2intfrxstats"};
const Enum::YLeaf DpaTable::l2intftxstats {51, "l2intftxstats"};
const Enum::YLeaf DpaTable::dnx_pbr_tt_ipv4 {52, "dnx-pbr-tt-ipv4"};
const Enum::YLeaf DpaTable::dnx_pbr_tt_ipv6 {53, "dnx-pbr-tt-ipv6"};
const Enum::YLeaf DpaTable::bfdhwoff {54, "bfdhwoff"};
const Enum::YLeaf DpaTable::global {55, "global"};
const Enum::YLeaf DpaTable::lag_port {56, "lag-port"};
const Enum::YLeaf DpaTable::qos_profile {57, "qos-profile"};
const Enum::YLeaf DpaTable::tmrate_profile {58, "tmrate-profile"};
const Enum::YLeaf DpaTable::dnx_port_range {59, "dnx-port-range"};
const Enum::YLeaf DpaTable::ipacl {60, "ipacl"};
const Enum::YLeaf DpaTable::ip6acl {61, "ip6acl"};
const Enum::YLeaf DpaTable::sched_tree {62, "sched-tree"};
const Enum::YLeaf DpaTable::tmcos {63, "tmcos"};
const Enum::YLeaf DpaTable::statsagg {64, "statsagg"};
const Enum::YLeaf DpaTable::nhprotect {65, "nhprotect"};
const Enum::YLeaf DpaTable::sampler {66, "sampler"};
const Enum::YLeaf DpaTable::l2qos {67, "l2qos"};
const Enum::YLeaf DpaTable::peer_qos {68, "peer-qos"};
const Enum::YLeaf DpaTable::ipqos {69, "ipqos"};
const Enum::YLeaf DpaTable::ip6qos {70, "ip6qos"};
const Enum::YLeaf DpaTable::mplsqos {71, "mplsqos"};
const Enum::YLeaf DpaTable::qosid {72, "qosid"};
const Enum::YLeaf DpaTable::extlif {73, "extlif"};
const Enum::YLeaf DpaTable::elif {74, "elif"};
const Enum::YLeaf DpaTable::ingaclstats {75, "ingaclstats"};
const Enum::YLeaf DpaTable::egraclstats {76, "egraclstats"};
const Enum::YLeaf DpaTable::edpl {77, "edpl"};
const Enum::YLeaf DpaTable::cfmmaid {78, "cfmmaid"};
const Enum::YLeaf DpaTable::cfmdefmps {79, "cfmdefmps"};
const Enum::YLeaf DpaTable::cfmofflmep {80, "cfmofflmep"};
const Enum::YLeaf DpaTable::cfmoffrmep {81, "cfmoffrmep"};
const Enum::YLeaf DpaTable::cfmnonoff {82, "cfmnonoff"};
const Enum::YLeaf DpaTable::cfmhwoffrxstats {83, "cfmhwoffrxstats"};
const Enum::YLeaf DpaTable::ipmc_route {84, "ipmc-route"};
const Enum::YLeaf DpaTable::l2ipmc_route {85, "l2ipmc-route"};
const Enum::YLeaf DpaTable::ipmco_list {86, "ipmco-list"};
const Enum::YLeaf DpaTable::l2mco_list {87, "l2mco-list"};
const Enum::YLeaf DpaTable::ipmc_merge_do_list {88, "ipmc-merge-do-list"};
const Enum::YLeaf DpaTable::sgfgid_list {89, "sgfgid-list"};
const Enum::YLeaf DpaTable::meshmc {90, "meshmc"};
const Enum::YLeaf DpaTable::l2_bridge {91, "l2-bridge"};
const Enum::YLeaf DpaTable::l2_bridge_port {92, "l2-bridge-port"};
const Enum::YLeaf DpaTable::l2_bridge_mac {93, "l2-bridge-mac"};
const Enum::YLeaf DpaTable::l2brmac {94, "l2brmac"};
const Enum::YLeaf DpaTable::ip_tunnel_decap {95, "ip-tunnel-decap"};
const Enum::YLeaf DpaTable::l2vlan_range {96, "l2vlan-range"};
const Enum::YLeaf DpaTable::ip_tunnel_encap {97, "ip-tunnel-encap"};
const Enum::YLeaf DpaTable::rawget {98, "rawget"};
const Enum::YLeaf DpaTable::ip6mc_route {99, "ip6mc-route"};
const Enum::YLeaf DpaTable::l2evpnact_remote_peer_id {100, "l2evpnact-remote-peer-id"};
const Enum::YLeaf DpaTable::l2evpnact_local_shl {101, "l2evpnact-local-shl"};
const Enum::YLeaf DpaTable::l2evpnact_remote_shl {102, "l2evpnact-remote-shl"};
const Enum::YLeaf DpaTable::evpn_iml_range {103, "evpn-iml-range"};
const Enum::YLeaf DpaTable::l2_bridge_o_list {104, "l2-bridge-o-list"};
const Enum::YLeaf DpaTable::l2acl {105, "l2acl"};
const Enum::YLeaf DpaTable::l2evpn_nh {106, "l2evpn-nh"};
const Enum::YLeaf DpaTable::l2_bridge_port_sc {107, "l2-bridge-port-sc"};
const Enum::YLeaf DpaTable::l3intfmctxstats {108, "l3intfmctxstats"};
const Enum::YLeaf DpaTable::tidl_sample {109, "tidl-sample"};
const Enum::YLeaf DpaTable::tidl_ref_sample {110, "tidl-ref-sample"};
const Enum::YLeaf DpaTable::ipacl_prefix {111, "ipacl-prefix"};
const Enum::YLeaf DpaTable::ip6acl_prefix {112, "ip6acl-prefix"};
const Enum::YLeaf DpaTable::ipacl_port {113, "ipacl-port"};
const Enum::YLeaf DpaTable::scaleacl {114, "scaleacl"};
const Enum::YLeaf DpaTable::ipmcf_hop {115, "ipmcf-hop"};
const Enum::YLeaf DpaTable::bundle_swoff {116, "bundle-swoff"};
const Enum::YLeaf DpaTable::mcidswoff {117, "mcidswoff"};
const Enum::YLeaf DpaTable::dest_map {118, "dest-map"};
const Enum::YLeaf DpaTable::l2_bridge_port_pw {119, "l2-bridge-port-pw"};
const Enum::YLeaf DpaTable::l2evpnact_local_shlstats {120, "l2evpnact-local-shlstats"};
const Enum::YLeaf DpaTable::test_hidden {121, "test-hidden"};
const Enum::YLeaf DpaTable::test_local {122, "test-local"};
const Enum::YLeaf DpaTable::test_repeated {123, "test-repeated"};
const Enum::YLeaf DpaTable::limd {124, "limd"};
const Enum::YLeaf DpaTable::litap {125, "litap"};
const Enum::YLeaf DpaTable::test_xtf {126, "test-xtf"};
const Enum::YLeaf DpaTable::ipmcrxstats {127, "ipmcrxstats"};


}
}

