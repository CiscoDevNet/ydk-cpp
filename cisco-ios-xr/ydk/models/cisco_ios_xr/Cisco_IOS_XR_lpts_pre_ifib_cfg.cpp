
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pre_ifib_cfg {

const Enum::YLeaf LptsDynamicFlowConfig::flows_config {0, "flows-config"};
const Enum::YLeaf LptsDynamicFlowConfig::platform_config {1, "platform-config"};

const Enum::YLeaf LptsPreIFibPrecedenceNumber::critical {5, "critical"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::flash {3, "flash"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::flash_override {4, "flash-override"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::immediate {2, "immediate"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::internet {6, "internet"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::network {7, "network"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::priority {1, "priority"};
const Enum::YLeaf LptsPreIFibPrecedenceNumber::routine {0, "routine"};

const Enum::YLeaf LptsFlow::config_default {0, "config-default"};
const Enum::YLeaf LptsFlow::l2tpv2_fragment {1, "l2tpv2-fragment"};
const Enum::YLeaf LptsFlow::fragment {2, "fragment"};
const Enum::YLeaf LptsFlow::ospf_multicast_known {3, "ospf-multicast-known"};
const Enum::YLeaf LptsFlow::ospf_multicast_default {4, "ospf-multicast-default"};
const Enum::YLeaf LptsFlow::ospf_unicast_known {5, "ospf-unicast-known"};
const Enum::YLeaf LptsFlow::ospf_unicast_default {6, "ospf-unicast-default"};
const Enum::YLeaf LptsFlow::isis_known {7, "isis-known"};
const Enum::YLeaf LptsFlow::isis_default {8, "isis-default"};
const Enum::YLeaf LptsFlow::bfd_known {9, "bfd-known"};
const Enum::YLeaf LptsFlow::bfd_default {10, "bfd-default"};
const Enum::YLeaf LptsFlow::bfd_multipath_known {11, "bfd-multipath-known"};
const Enum::YLeaf LptsFlow::bfd_multipath0 {12, "bfd-multipath0"};
const Enum::YLeaf LptsFlow::bfd_blb_known {13, "bfd-blb-known"};
const Enum::YLeaf LptsFlow::bfd_blb0 {14, "bfd-blb0"};
const Enum::YLeaf LptsFlow::bfd_sp0 {15, "bfd-sp0"};
const Enum::YLeaf LptsFlow::bgp_known {16, "bgp-known"};
const Enum::YLeaf LptsFlow::bgp_config_peer {17, "bgp-config-peer"};
const Enum::YLeaf LptsFlow::bgp_default {18, "bgp-default"};
const Enum::YLeaf LptsFlow::pim_multicast_default {19, "pim-multicast-default"};
const Enum::YLeaf LptsFlow::pim_multicast_known {20, "pim-multicast-known"};
const Enum::YLeaf LptsFlow::pim_unicast {21, "pim-unicast"};
const Enum::YLeaf LptsFlow::igmp {22, "igmp"};
const Enum::YLeaf LptsFlow::icmp_local {23, "icmp-local"};
const Enum::YLeaf LptsFlow::icmp_app {24, "icmp-app"};
const Enum::YLeaf LptsFlow::icmp_control {25, "icmp-control"};
const Enum::YLeaf LptsFlow::icmp_default {26, "icmp-default"};
const Enum::YLeaf LptsFlow::icmp_app_default {27, "icmp-app-default"};
const Enum::YLeaf LptsFlow::ldp_tcp_known {28, "ldp-tcp-known"};
const Enum::YLeaf LptsFlow::ldp_tcp_config_peer {29, "ldp-tcp-config-peer"};
const Enum::YLeaf LptsFlow::ldp_tcp_default {30, "ldp-tcp-default"};
const Enum::YLeaf LptsFlow::ldp_udp {31, "ldp-udp"};
const Enum::YLeaf LptsFlow::all_routers {32, "all-routers"};
const Enum::YLeaf LptsFlow::lmp_tcp_known {33, "lmp-tcp-known"};
const Enum::YLeaf LptsFlow::lmp_tcp_config_peer {34, "lmp-tcp-config-peer"};
const Enum::YLeaf LptsFlow::lmp_tcp_default {35, "lmp-tcp-default"};
const Enum::YLeaf LptsFlow::lmp_udp {36, "lmp-udp"};
const Enum::YLeaf LptsFlow::rsvp_udp {37, "rsvp-udp"};
const Enum::YLeaf LptsFlow::rsvp_default {38, "rsvp-default"};
const Enum::YLeaf LptsFlow::rsvp_known {39, "rsvp-known"};
const Enum::YLeaf LptsFlow::ike {40, "ike"};
const Enum::YLeaf LptsFlow::ipsec_known {41, "ipsec-known"};
const Enum::YLeaf LptsFlow::ipsec_default {42, "ipsec-default"};
const Enum::YLeaf LptsFlow::ipsec_fragment {43, "ipsec-fragment"};
const Enum::YLeaf LptsFlow::msdp_known {44, "msdp-known"};
const Enum::YLeaf LptsFlow::msdp_config_peer {45, "msdp-config-peer"};
const Enum::YLeaf LptsFlow::msdp_default {46, "msdp-default"};
const Enum::YLeaf LptsFlow::snmp {47, "snmp"};
const Enum::YLeaf LptsFlow::ssh_known {48, "ssh-known"};
const Enum::YLeaf LptsFlow::ssh_default {49, "ssh-default"};
const Enum::YLeaf LptsFlow::http_known {50, "http-known"};
const Enum::YLeaf LptsFlow::http_default {51, "http-default"};
const Enum::YLeaf LptsFlow::shttp_known {52, "shttp-known"};
const Enum::YLeaf LptsFlow::shttp_default {53, "shttp-default"};
const Enum::YLeaf LptsFlow::telnet_known {54, "telnet-known"};
const Enum::YLeaf LptsFlow::telnet_default {55, "telnet-default"};
const Enum::YLeaf LptsFlow::css_known {56, "css-known"};
const Enum::YLeaf LptsFlow::css_default {57, "css-default"};
const Enum::YLeaf LptsFlow::rsh_known {58, "rsh-known"};
const Enum::YLeaf LptsFlow::rsh_default {59, "rsh-default"};
const Enum::YLeaf LptsFlow::udp_known {60, "udp-known"};
const Enum::YLeaf LptsFlow::udp_listen {61, "udp-listen"};
const Enum::YLeaf LptsFlow::udp_config_peer {62, "udp-config-peer"};
const Enum::YLeaf LptsFlow::udp_default {63, "udp-default"};
const Enum::YLeaf LptsFlow::tcp_known {64, "tcp-known"};
const Enum::YLeaf LptsFlow::tcp_listen {65, "tcp-listen"};
const Enum::YLeaf LptsFlow::tcp_config_peer {66, "tcp-config-peer"};
const Enum::YLeaf LptsFlow::tcp_default {67, "tcp-default"};
const Enum::YLeaf LptsFlow::multicast_known {68, "multicast-known"};
const Enum::YLeaf LptsFlow::multicast_default {69, "multicast-default"};
const Enum::YLeaf LptsFlow::raw_listen {70, "raw-listen"};
const Enum::YLeaf LptsFlow::raw_default {71, "raw-default"};
const Enum::YLeaf LptsFlow::ipsla {72, "ipsla"};
const Enum::YLeaf LptsFlow::eigrp {73, "eigrp"};
const Enum::YLeaf LptsFlow::rip {74, "rip"};
const Enum::YLeaf LptsFlow::l2tpv3 {75, "l2tpv3"};
const Enum::YLeaf LptsFlow::pcep_tcp_default {76, "pcep-tcp-default"};
const Enum::YLeaf LptsFlow::gre {77, "gre"};
const Enum::YLeaf LptsFlow::vrrp {78, "vrrp"};
const Enum::YLeaf LptsFlow::hsrp {79, "hsrp"};
const Enum::YLeaf LptsFlow::mpls_ping {80, "mpls-ping"};
const Enum::YLeaf LptsFlow::l2tpv2_default {81, "l2tpv2-default"};
const Enum::YLeaf LptsFlow::l2tpv2_known {82, "l2tpv2-known"};
const Enum::YLeaf LptsFlow::dns {83, "dns"};
const Enum::YLeaf LptsFlow::radius {84, "radius"};
const Enum::YLeaf LptsFlow::tacacs {85, "tacacs"};
const Enum::YLeaf LptsFlow::ntp_default {86, "ntp-default"};
const Enum::YLeaf LptsFlow::ntp_known {87, "ntp-known"};
const Enum::YLeaf LptsFlow::mobile_ipv6 {88, "mobile-ipv6"};
const Enum::YLeaf LptsFlow::amt {89, "amt"};
const Enum::YLeaf LptsFlow::sdac_tcp {90, "sdac-tcp"};
const Enum::YLeaf LptsFlow::radius_coa {91, "radius-coa"};
const Enum::YLeaf LptsFlow::rel_udp {92, "rel-udp"};
const Enum::YLeaf LptsFlow::dhcp4 {93, "dhcp4"};
const Enum::YLeaf LptsFlow::dhcp6 {94, "dhcp6"};
const Enum::YLeaf LptsFlow::onepk {95, "onepk"};
const Enum::YLeaf LptsFlow::exr {96, "exr"};
const Enum::YLeaf LptsFlow::platform_limit {97, "platform-limit"};


}
}

