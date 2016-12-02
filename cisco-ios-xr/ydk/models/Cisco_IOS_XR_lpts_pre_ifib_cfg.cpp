
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_pre_ifib_cfg {


const Enum::Value LptsPreIFibPrecedenceNumberEnum::critical {5, "critical"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::flash {3, "flash"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::flash_override {4, "flash-override"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::immediate {2, "immediate"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::internet {6, "internet"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::network {7, "network"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::priority {1, "priority"};
const Enum::Value LptsPreIFibPrecedenceNumberEnum::routine {0, "routine"};

const Enum::Value LptsFlowEnum::config_default {0, "config-default"};
const Enum::Value LptsFlowEnum::l2tpv2_fragment {1, "l2tpv2-fragment"};
const Enum::Value LptsFlowEnum::fragment {2, "fragment"};
const Enum::Value LptsFlowEnum::ospf_multicast_known {3, "ospf-multicast-known"};
const Enum::Value LptsFlowEnum::ospf_multicast_default {4, "ospf-multicast-default"};
const Enum::Value LptsFlowEnum::ospf_unicast_known {5, "ospf-unicast-known"};
const Enum::Value LptsFlowEnum::ospf_unicast_default {6, "ospf-unicast-default"};
const Enum::Value LptsFlowEnum::isis_known {7, "isis-known"};
const Enum::Value LptsFlowEnum::isis_default {8, "isis-default"};
const Enum::Value LptsFlowEnum::bfd_known {9, "bfd-known"};
const Enum::Value LptsFlowEnum::bfd_default {10, "bfd-default"};
const Enum::Value LptsFlowEnum::bfd_multipath_known {11, "bfd-multipath-known"};
const Enum::Value LptsFlowEnum::bfd_multipath0 {12, "bfd-multipath0"};
const Enum::Value LptsFlowEnum::bfd_blb_known {13, "bfd-blb-known"};
const Enum::Value LptsFlowEnum::bfd_blb0 {14, "bfd-blb0"};
const Enum::Value LptsFlowEnum::bfd_sp0 {15, "bfd-sp0"};
const Enum::Value LptsFlowEnum::bgp_known {16, "bgp-known"};
const Enum::Value LptsFlowEnum::bgp_config_peer {17, "bgp-config-peer"};
const Enum::Value LptsFlowEnum::bgp_default {18, "bgp-default"};
const Enum::Value LptsFlowEnum::pim_multicast_default {19, "pim-multicast-default"};
const Enum::Value LptsFlowEnum::pim_multicast_known {20, "pim-multicast-known"};
const Enum::Value LptsFlowEnum::pim_unicast {21, "pim-unicast"};
const Enum::Value LptsFlowEnum::igmp {22, "igmp"};
const Enum::Value LptsFlowEnum::icmp_local {23, "icmp-local"};
const Enum::Value LptsFlowEnum::icmp_app {24, "icmp-app"};
const Enum::Value LptsFlowEnum::icmp_control {25, "icmp-control"};
const Enum::Value LptsFlowEnum::icmp_default {26, "icmp-default"};
const Enum::Value LptsFlowEnum::icmp_app_default {27, "icmp-app-default"};
const Enum::Value LptsFlowEnum::ldp_tcp_known {28, "ldp-tcp-known"};
const Enum::Value LptsFlowEnum::ldp_tcp_config_peer {29, "ldp-tcp-config-peer"};
const Enum::Value LptsFlowEnum::ldp_tcp_default {30, "ldp-tcp-default"};
const Enum::Value LptsFlowEnum::ldp_udp {31, "ldp-udp"};
const Enum::Value LptsFlowEnum::all_routers {32, "all-routers"};
const Enum::Value LptsFlowEnum::lmp_tcp_known {33, "lmp-tcp-known"};
const Enum::Value LptsFlowEnum::lmp_tcp_config_peer {34, "lmp-tcp-config-peer"};
const Enum::Value LptsFlowEnum::lmp_tcp_default {35, "lmp-tcp-default"};
const Enum::Value LptsFlowEnum::lmp_udp {36, "lmp-udp"};
const Enum::Value LptsFlowEnum::rsvp_udp {37, "rsvp-udp"};
const Enum::Value LptsFlowEnum::rsvp_default {38, "rsvp-default"};
const Enum::Value LptsFlowEnum::rsvp_known {39, "rsvp-known"};
const Enum::Value LptsFlowEnum::ike {40, "ike"};
const Enum::Value LptsFlowEnum::ipsec_known {41, "ipsec-known"};
const Enum::Value LptsFlowEnum::ipsec_default {42, "ipsec-default"};
const Enum::Value LptsFlowEnum::ipsec_fragment {43, "ipsec-fragment"};
const Enum::Value LptsFlowEnum::msdp_known {44, "msdp-known"};
const Enum::Value LptsFlowEnum::msdp_config_peer {45, "msdp-config-peer"};
const Enum::Value LptsFlowEnum::msdp_default {46, "msdp-default"};
const Enum::Value LptsFlowEnum::snmp {47, "snmp"};
const Enum::Value LptsFlowEnum::ssh_known {48, "ssh-known"};
const Enum::Value LptsFlowEnum::ssh_default {49, "ssh-default"};
const Enum::Value LptsFlowEnum::http_known {50, "http-known"};
const Enum::Value LptsFlowEnum::http_default {51, "http-default"};
const Enum::Value LptsFlowEnum::shttp_known {52, "shttp-known"};
const Enum::Value LptsFlowEnum::shttp_default {53, "shttp-default"};
const Enum::Value LptsFlowEnum::telnet_known {54, "telnet-known"};
const Enum::Value LptsFlowEnum::telnet_default {55, "telnet-default"};
const Enum::Value LptsFlowEnum::css_known {56, "css-known"};
const Enum::Value LptsFlowEnum::css_default {57, "css-default"};
const Enum::Value LptsFlowEnum::rsh_known {58, "rsh-known"};
const Enum::Value LptsFlowEnum::rsh_default {59, "rsh-default"};
const Enum::Value LptsFlowEnum::udp_known {60, "udp-known"};
const Enum::Value LptsFlowEnum::udp_listen {61, "udp-listen"};
const Enum::Value LptsFlowEnum::udp_config_peer {62, "udp-config-peer"};
const Enum::Value LptsFlowEnum::udp_default {63, "udp-default"};
const Enum::Value LptsFlowEnum::tcp_known {64, "tcp-known"};
const Enum::Value LptsFlowEnum::tcp_listen {65, "tcp-listen"};
const Enum::Value LptsFlowEnum::tcp_config_peer {66, "tcp-config-peer"};
const Enum::Value LptsFlowEnum::tcp_default {67, "tcp-default"};
const Enum::Value LptsFlowEnum::multicast_known {68, "multicast-known"};
const Enum::Value LptsFlowEnum::multicast_default {69, "multicast-default"};
const Enum::Value LptsFlowEnum::raw_listen {70, "raw-listen"};
const Enum::Value LptsFlowEnum::raw_default {71, "raw-default"};
const Enum::Value LptsFlowEnum::ipsla {72, "ipsla"};
const Enum::Value LptsFlowEnum::eigrp {73, "eigrp"};
const Enum::Value LptsFlowEnum::rip {74, "rip"};
const Enum::Value LptsFlowEnum::l2tpv3 {75, "l2tpv3"};
const Enum::Value LptsFlowEnum::pcep_tcp_default {76, "pcep-tcp-default"};
const Enum::Value LptsFlowEnum::gre {77, "gre"};
const Enum::Value LptsFlowEnum::vrrp {78, "vrrp"};
const Enum::Value LptsFlowEnum::hsrp {79, "hsrp"};
const Enum::Value LptsFlowEnum::mpls_ping {80, "mpls-ping"};
const Enum::Value LptsFlowEnum::l2tpv2_default {81, "l2tpv2-default"};
const Enum::Value LptsFlowEnum::l2tpv2_known {82, "l2tpv2-known"};
const Enum::Value LptsFlowEnum::dns {83, "dns"};
const Enum::Value LptsFlowEnum::radius {84, "radius"};
const Enum::Value LptsFlowEnum::tacacs {85, "tacacs"};
const Enum::Value LptsFlowEnum::ntp_default {86, "ntp-default"};
const Enum::Value LptsFlowEnum::ntp_known {87, "ntp-known"};
const Enum::Value LptsFlowEnum::mobile_ipv6 {88, "mobile-ipv6"};
const Enum::Value LptsFlowEnum::amt {89, "amt"};
const Enum::Value LptsFlowEnum::sdac_tcp {90, "sdac-tcp"};
const Enum::Value LptsFlowEnum::radius_coa {91, "radius-coa"};
const Enum::Value LptsFlowEnum::rel_udp {92, "rel-udp"};
const Enum::Value LptsFlowEnum::dhcp4 {93, "dhcp4"};
const Enum::Value LptsFlowEnum::dhcp6 {94, "dhcp6"};
const Enum::Value LptsFlowEnum::onepk {95, "onepk"};
const Enum::Value LptsFlowEnum::exr {96, "exr"};


}
}

