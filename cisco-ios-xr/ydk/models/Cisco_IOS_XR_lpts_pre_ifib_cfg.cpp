
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_pre_ifib_cfg {


const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::critical {5, "critical"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::flash {3, "flash"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::flash_override {4, "flash-override"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::immediate {2, "immediate"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::internet {6, "internet"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::network {7, "network"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::priority {1, "priority"};
const Enum::YLeaf LptsPreIFibPrecedenceNumberEnum::routine {0, "routine"};

const Enum::YLeaf LptsFlowEnum::config_default {0, "config-default"};
const Enum::YLeaf LptsFlowEnum::l2tpv2_fragment {1, "l2tpv2-fragment"};
const Enum::YLeaf LptsFlowEnum::fragment {2, "fragment"};
const Enum::YLeaf LptsFlowEnum::ospf_multicast_known {3, "ospf-multicast-known"};
const Enum::YLeaf LptsFlowEnum::ospf_multicast_default {4, "ospf-multicast-default"};
const Enum::YLeaf LptsFlowEnum::ospf_unicast_known {5, "ospf-unicast-known"};
const Enum::YLeaf LptsFlowEnum::ospf_unicast_default {6, "ospf-unicast-default"};
const Enum::YLeaf LptsFlowEnum::isis_known {7, "isis-known"};
const Enum::YLeaf LptsFlowEnum::isis_default {8, "isis-default"};
const Enum::YLeaf LptsFlowEnum::bfd_known {9, "bfd-known"};
const Enum::YLeaf LptsFlowEnum::bfd_default {10, "bfd-default"};
const Enum::YLeaf LptsFlowEnum::bfd_multipath_known {11, "bfd-multipath-known"};
const Enum::YLeaf LptsFlowEnum::bfd_multipath0 {12, "bfd-multipath0"};
const Enum::YLeaf LptsFlowEnum::bfd_blb_known {13, "bfd-blb-known"};
const Enum::YLeaf LptsFlowEnum::bfd_blb0 {14, "bfd-blb0"};
const Enum::YLeaf LptsFlowEnum::bfd_sp0 {15, "bfd-sp0"};
const Enum::YLeaf LptsFlowEnum::bgp_known {16, "bgp-known"};
const Enum::YLeaf LptsFlowEnum::bgp_config_peer {17, "bgp-config-peer"};
const Enum::YLeaf LptsFlowEnum::bgp_default {18, "bgp-default"};
const Enum::YLeaf LptsFlowEnum::pim_multicast_default {19, "pim-multicast-default"};
const Enum::YLeaf LptsFlowEnum::pim_multicast_known {20, "pim-multicast-known"};
const Enum::YLeaf LptsFlowEnum::pim_unicast {21, "pim-unicast"};
const Enum::YLeaf LptsFlowEnum::igmp {22, "igmp"};
const Enum::YLeaf LptsFlowEnum::icmp_local {23, "icmp-local"};
const Enum::YLeaf LptsFlowEnum::icmp_app {24, "icmp-app"};
const Enum::YLeaf LptsFlowEnum::icmp_control {25, "icmp-control"};
const Enum::YLeaf LptsFlowEnum::icmp_default {26, "icmp-default"};
const Enum::YLeaf LptsFlowEnum::icmp_app_default {27, "icmp-app-default"};
const Enum::YLeaf LptsFlowEnum::ldp_tcp_known {28, "ldp-tcp-known"};
const Enum::YLeaf LptsFlowEnum::ldp_tcp_config_peer {29, "ldp-tcp-config-peer"};
const Enum::YLeaf LptsFlowEnum::ldp_tcp_default {30, "ldp-tcp-default"};
const Enum::YLeaf LptsFlowEnum::ldp_udp {31, "ldp-udp"};
const Enum::YLeaf LptsFlowEnum::all_routers {32, "all-routers"};
const Enum::YLeaf LptsFlowEnum::lmp_tcp_known {33, "lmp-tcp-known"};
const Enum::YLeaf LptsFlowEnum::lmp_tcp_config_peer {34, "lmp-tcp-config-peer"};
const Enum::YLeaf LptsFlowEnum::lmp_tcp_default {35, "lmp-tcp-default"};
const Enum::YLeaf LptsFlowEnum::lmp_udp {36, "lmp-udp"};
const Enum::YLeaf LptsFlowEnum::rsvp_udp {37, "rsvp-udp"};
const Enum::YLeaf LptsFlowEnum::rsvp_default {38, "rsvp-default"};
const Enum::YLeaf LptsFlowEnum::rsvp_known {39, "rsvp-known"};
const Enum::YLeaf LptsFlowEnum::ike {40, "ike"};
const Enum::YLeaf LptsFlowEnum::ipsec_known {41, "ipsec-known"};
const Enum::YLeaf LptsFlowEnum::ipsec_default {42, "ipsec-default"};
const Enum::YLeaf LptsFlowEnum::ipsec_fragment {43, "ipsec-fragment"};
const Enum::YLeaf LptsFlowEnum::msdp_known {44, "msdp-known"};
const Enum::YLeaf LptsFlowEnum::msdp_config_peer {45, "msdp-config-peer"};
const Enum::YLeaf LptsFlowEnum::msdp_default {46, "msdp-default"};
const Enum::YLeaf LptsFlowEnum::snmp {47, "snmp"};
const Enum::YLeaf LptsFlowEnum::ssh_known {48, "ssh-known"};
const Enum::YLeaf LptsFlowEnum::ssh_default {49, "ssh-default"};
const Enum::YLeaf LptsFlowEnum::http_known {50, "http-known"};
const Enum::YLeaf LptsFlowEnum::http_default {51, "http-default"};
const Enum::YLeaf LptsFlowEnum::shttp_known {52, "shttp-known"};
const Enum::YLeaf LptsFlowEnum::shttp_default {53, "shttp-default"};
const Enum::YLeaf LptsFlowEnum::telnet_known {54, "telnet-known"};
const Enum::YLeaf LptsFlowEnum::telnet_default {55, "telnet-default"};
const Enum::YLeaf LptsFlowEnum::css_known {56, "css-known"};
const Enum::YLeaf LptsFlowEnum::css_default {57, "css-default"};
const Enum::YLeaf LptsFlowEnum::rsh_known {58, "rsh-known"};
const Enum::YLeaf LptsFlowEnum::rsh_default {59, "rsh-default"};
const Enum::YLeaf LptsFlowEnum::udp_known {60, "udp-known"};
const Enum::YLeaf LptsFlowEnum::udp_listen {61, "udp-listen"};
const Enum::YLeaf LptsFlowEnum::udp_config_peer {62, "udp-config-peer"};
const Enum::YLeaf LptsFlowEnum::udp_default {63, "udp-default"};
const Enum::YLeaf LptsFlowEnum::tcp_known {64, "tcp-known"};
const Enum::YLeaf LptsFlowEnum::tcp_listen {65, "tcp-listen"};
const Enum::YLeaf LptsFlowEnum::tcp_config_peer {66, "tcp-config-peer"};
const Enum::YLeaf LptsFlowEnum::tcp_default {67, "tcp-default"};
const Enum::YLeaf LptsFlowEnum::multicast_known {68, "multicast-known"};
const Enum::YLeaf LptsFlowEnum::multicast_default {69, "multicast-default"};
const Enum::YLeaf LptsFlowEnum::raw_listen {70, "raw-listen"};
const Enum::YLeaf LptsFlowEnum::raw_default {71, "raw-default"};
const Enum::YLeaf LptsFlowEnum::ipsla {72, "ipsla"};
const Enum::YLeaf LptsFlowEnum::eigrp {73, "eigrp"};
const Enum::YLeaf LptsFlowEnum::rip {74, "rip"};
const Enum::YLeaf LptsFlowEnum::l2tpv3 {75, "l2tpv3"};
const Enum::YLeaf LptsFlowEnum::pcep_tcp_default {76, "pcep-tcp-default"};
const Enum::YLeaf LptsFlowEnum::gre {77, "gre"};
const Enum::YLeaf LptsFlowEnum::vrrp {78, "vrrp"};
const Enum::YLeaf LptsFlowEnum::hsrp {79, "hsrp"};
const Enum::YLeaf LptsFlowEnum::mpls_ping {80, "mpls-ping"};
const Enum::YLeaf LptsFlowEnum::l2tpv2_default {81, "l2tpv2-default"};
const Enum::YLeaf LptsFlowEnum::l2tpv2_known {82, "l2tpv2-known"};
const Enum::YLeaf LptsFlowEnum::dns {83, "dns"};
const Enum::YLeaf LptsFlowEnum::radius {84, "radius"};
const Enum::YLeaf LptsFlowEnum::tacacs {85, "tacacs"};
const Enum::YLeaf LptsFlowEnum::ntp_default {86, "ntp-default"};
const Enum::YLeaf LptsFlowEnum::ntp_known {87, "ntp-known"};
const Enum::YLeaf LptsFlowEnum::mobile_ipv6 {88, "mobile-ipv6"};
const Enum::YLeaf LptsFlowEnum::amt {89, "amt"};
const Enum::YLeaf LptsFlowEnum::sdac_tcp {90, "sdac-tcp"};
const Enum::YLeaf LptsFlowEnum::radius_coa {91, "radius-coa"};
const Enum::YLeaf LptsFlowEnum::rel_udp {92, "rel-udp"};
const Enum::YLeaf LptsFlowEnum::dhcp4 {93, "dhcp4"};
const Enum::YLeaf LptsFlowEnum::dhcp6 {94, "dhcp6"};
const Enum::YLeaf LptsFlowEnum::onepk {95, "onepk"};
const Enum::YLeaf LptsFlowEnum::exr {96, "exr"};


}
}

