
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_acl_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_acl_datatypes {

const Enum::YLeaf Ipv4AclProtocolNumber::ip {0, "ip"};
const Enum::YLeaf Ipv4AclProtocolNumber::icmp {1, "icmp"};
const Enum::YLeaf Ipv4AclProtocolNumber::igmp {2, "igmp"};
const Enum::YLeaf Ipv4AclProtocolNumber::ip_in_ip {4, "ip-in-ip"};
const Enum::YLeaf Ipv4AclProtocolNumber::tcp {6, "tcp"};
const Enum::YLeaf Ipv4AclProtocolNumber::igrp {9, "igrp"};
const Enum::YLeaf Ipv4AclProtocolNumber::udp {17, "udp"};
const Enum::YLeaf Ipv4AclProtocolNumber::gre {47, "gre"};
const Enum::YLeaf Ipv4AclProtocolNumber::esp {50, "esp"};
const Enum::YLeaf Ipv4AclProtocolNumber::ahp {51, "ahp"};
const Enum::YLeaf Ipv4AclProtocolNumber::eigrp {88, "eigrp"};
const Enum::YLeaf Ipv4AclProtocolNumber::ospf {89, "ospf"};
const Enum::YLeaf Ipv4AclProtocolNumber::nos {94, "nos"};
const Enum::YLeaf Ipv4AclProtocolNumber::pim {103, "pim"};
const Enum::YLeaf Ipv4AclProtocolNumber::pcp {108, "pcp"};
const Enum::YLeaf Ipv4AclProtocolNumber::sctp {132, "sctp"};

const Enum::YLeaf Ipv4AclTcpMatchOperatorEnum::match_all {1, "match-all"};
const Enum::YLeaf Ipv4AclTcpMatchOperatorEnum::match_any {3, "match-any"};

const Enum::YLeaf Ipv4AclGrantEnum::deny {0, "deny"};
const Enum::YLeaf Ipv4AclGrantEnum::permit {1, "permit"};

const Enum::YLeaf Ipv4AclOperatorEnum::equal {1, "equal"};
const Enum::YLeaf Ipv4AclOperatorEnum::greater_than {2, "greater-than"};
const Enum::YLeaf Ipv4AclOperatorEnum::less_than {3, "less-than"};
const Enum::YLeaf Ipv4AclOperatorEnum::not_equal {4, "not-equal"};
const Enum::YLeaf Ipv4AclOperatorEnum::range {5, "range"};

const Enum::YLeaf Ipv4AclPrecedenceNumber::critical {5, "critical"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::flash {3, "flash"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::flash_override {4, "flash-override"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::immediate {2, "immediate"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::internet {6, "internet"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::network {7, "network"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::priority {1, "priority"};
const Enum::YLeaf Ipv4AclPrecedenceNumber::routine {0, "routine"};

const Enum::YLeaf Ipv4AclPortNumber::echo {7, "echo"};
const Enum::YLeaf Ipv4AclPortNumber::discard {9, "discard"};
const Enum::YLeaf Ipv4AclPortNumber::daytime {13, "daytime"};
const Enum::YLeaf Ipv4AclPortNumber::char_gen {19, "char-gen"};
const Enum::YLeaf Ipv4AclPortNumber::ftp_data {20, "ftp-data"};
const Enum::YLeaf Ipv4AclPortNumber::ftp {21, "ftp"};
const Enum::YLeaf Ipv4AclPortNumber::telnet {23, "telnet"};
const Enum::YLeaf Ipv4AclPortNumber::smtp {25, "smtp"};
const Enum::YLeaf Ipv4AclPortNumber::time {37, "time"};
const Enum::YLeaf Ipv4AclPortNumber::name_server {42, "name-server"};
const Enum::YLeaf Ipv4AclPortNumber::who_is {43, "who-is"};
const Enum::YLeaf Ipv4AclPortNumber::tacacs {49, "tacacs"};
const Enum::YLeaf Ipv4AclPortNumber::dns {53, "dns"};
const Enum::YLeaf Ipv4AclPortNumber::boot_ps {67, "boot-ps"};
const Enum::YLeaf Ipv4AclPortNumber::boot_pc {68, "boot-pc"};
const Enum::YLeaf Ipv4AclPortNumber::tftp {69, "tftp"};
const Enum::YLeaf Ipv4AclPortNumber::gopher {70, "gopher"};
const Enum::YLeaf Ipv4AclPortNumber::finger {79, "finger"};
const Enum::YLeaf Ipv4AclPortNumber::www {80, "www"};
const Enum::YLeaf Ipv4AclPortNumber::host_name {101, "host-name"};
const Enum::YLeaf Ipv4AclPortNumber::pop2 {109, "pop2"};
const Enum::YLeaf Ipv4AclPortNumber::pop3 {110, "pop3"};
const Enum::YLeaf Ipv4AclPortNumber::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf Ipv4AclPortNumber::ident {113, "ident"};
const Enum::YLeaf Ipv4AclPortNumber::nntp {119, "nntp"};
const Enum::YLeaf Ipv4AclPortNumber::ntp {123, "ntp"};
const Enum::YLeaf Ipv4AclPortNumber::net_bios_ns {137, "net-bios-ns"};
const Enum::YLeaf Ipv4AclPortNumber::net_bios_dgs {138, "net-bios-dgs"};
const Enum::YLeaf Ipv4AclPortNumber::net_bios_ss {139, "net-bios-ss"};
const Enum::YLeaf Ipv4AclPortNumber::snmp {161, "snmp"};
const Enum::YLeaf Ipv4AclPortNumber::snmp_trap {162, "snmp-trap"};
const Enum::YLeaf Ipv4AclPortNumber::xdmcp {177, "xdmcp"};
const Enum::YLeaf Ipv4AclPortNumber::bgp {179, "bgp"};
const Enum::YLeaf Ipv4AclPortNumber::irc {194, "irc"};
const Enum::YLeaf Ipv4AclPortNumber::dnsix {195, "dnsix"};
const Enum::YLeaf Ipv4AclPortNumber::mobile_ip {434, "mobile-ip"};
const Enum::YLeaf Ipv4AclPortNumber::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf Ipv4AclPortNumber::isakmp {500, "isakmp"};
const Enum::YLeaf Ipv4AclPortNumber::exec_or_biff {512, "exec-or-biff"};
const Enum::YLeaf Ipv4AclPortNumber::login_or_who {513, "login-or-who"};
const Enum::YLeaf Ipv4AclPortNumber::cmd_or_syslog {514, "cmd-or-syslog"};
const Enum::YLeaf Ipv4AclPortNumber::lpd {515, "lpd"};
const Enum::YLeaf Ipv4AclPortNumber::talk {517, "talk"};
const Enum::YLeaf Ipv4AclPortNumber::rip {520, "rip"};
const Enum::YLeaf Ipv4AclPortNumber::uucp {540, "uucp"};
const Enum::YLeaf Ipv4AclPortNumber::klogin {543, "klogin"};
const Enum::YLeaf Ipv4AclPortNumber::kshell {544, "kshell"};
const Enum::YLeaf Ipv4AclPortNumber::ldp {646, "ldp"};

const Enum::YLeaf Ipv4AclIgmpNumber::host_query {17, "host-query"};
const Enum::YLeaf Ipv4AclIgmpNumber::host_report {18, "host-report"};
const Enum::YLeaf Ipv4AclIgmpNumber::dvmrp {19, "dvmrp"};
const Enum::YLeaf Ipv4AclIgmpNumber::pim {20, "pim"};
const Enum::YLeaf Ipv4AclIgmpNumber::trace {21, "trace"};
const Enum::YLeaf Ipv4AclIgmpNumber::v2_report {22, "v2-report"};
const Enum::YLeaf Ipv4AclIgmpNumber::v2_leave {23, "v2-leave"};
const Enum::YLeaf Ipv4AclIgmpNumber::mtrace_response {30, "mtrace-response"};
const Enum::YLeaf Ipv4AclIgmpNumber::mtrace {31, "mtrace"};
const Enum::YLeaf Ipv4AclIgmpNumber::v3_report {34, "v3-report"};

const Enum::YLeaf Ipv4AclDscpNumber::default_ {0, "default"};
const Enum::YLeaf Ipv4AclDscpNumber::af11 {10, "af11"};
const Enum::YLeaf Ipv4AclDscpNumber::af12 {12, "af12"};
const Enum::YLeaf Ipv4AclDscpNumber::af13 {14, "af13"};
const Enum::YLeaf Ipv4AclDscpNumber::af21 {18, "af21"};
const Enum::YLeaf Ipv4AclDscpNumber::af22 {20, "af22"};
const Enum::YLeaf Ipv4AclDscpNumber::af23 {22, "af23"};
const Enum::YLeaf Ipv4AclDscpNumber::af31 {26, "af31"};
const Enum::YLeaf Ipv4AclDscpNumber::af32 {28, "af32"};
const Enum::YLeaf Ipv4AclDscpNumber::af33 {30, "af33"};
const Enum::YLeaf Ipv4AclDscpNumber::af41 {34, "af41"};
const Enum::YLeaf Ipv4AclDscpNumber::af42 {36, "af42"};
const Enum::YLeaf Ipv4AclDscpNumber::af43 {38, "af43"};
const Enum::YLeaf Ipv4AclDscpNumber::cs1 {8, "cs1"};
const Enum::YLeaf Ipv4AclDscpNumber::cs2 {16, "cs2"};
const Enum::YLeaf Ipv4AclDscpNumber::cs3 {24, "cs3"};
const Enum::YLeaf Ipv4AclDscpNumber::cs4 {32, "cs4"};
const Enum::YLeaf Ipv4AclDscpNumber::cs5 {40, "cs5"};
const Enum::YLeaf Ipv4AclDscpNumber::cs6 {48, "cs6"};
const Enum::YLeaf Ipv4AclDscpNumber::cs7 {56, "cs7"};
const Enum::YLeaf Ipv4AclDscpNumber::ef {46, "ef"};

const Enum::YLeaf Ipv4AclStatusEnum::disabled {0, "disabled"};
const Enum::YLeaf Ipv4AclStatusEnum::enabled {1, "enabled"};

const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::echo_reply {65535, "echo-reply"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::network_unreachable {196608, "network-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_unreachable {196609, "host-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::protocol_unreachable {196610, "protocol-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::port_unreachable {196611, "port-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::packet_too_big {196612, "packet-too-big"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::source_route_failed {196613, "source-route-failed"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::network_unknown {196614, "network-unknown"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_unknown {196615, "host-unknown"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_isolated {196616, "host-isolated"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::dod_net_prohibited {196617, "dod-net-prohibited"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::dod_host_prohibited {196618, "dod-host-prohibited"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_tos_unreachable {196619, "host-tos-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::net_tos_unreachable {196620, "net-tos-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::administratively_prohibited {196621, "administratively-prohibited"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_precedence_unreachable {196622, "host-precedence-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::precedence_unreachable {196623, "precedence-unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::unreachable {262143, "unreachable"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::source_quench {327679, "source-quench"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::network_redirect {327680, "network-redirect"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_redirect {327681, "host-redirect"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::net_tos_redirect {327682, "net-tos-redirect"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::host_tos_redirect {327683, "host-tos-redirect"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::redirect {393215, "redirect"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::alternate_address {458751, "alternate-address"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::echo {589823, "echo"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::router_advertisement {655359, "router-advertisement"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::router_solicitation {720895, "router-solicitation"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::ttl_exceeded {720896, "ttl-exceeded"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::reassembly_timeout {720897, "reassembly-timeout"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::time_exceeded {786431, "time-exceeded"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::general_parameter_problem {786432, "general-parameter-problem"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::option_missing {786433, "option-missing"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::no_room_for_option {786434, "no-room-for-option"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::parameter_problem {851967, "parameter-problem"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::timestamp_request {917503, "timestamp-request"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::timestamp_reply {983039, "timestamp-reply"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::information_request {1048575, "information-request"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::information_reply {1114111, "information-reply"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::mask_request {1179647, "mask-request"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::mask_reply {1245183, "mask-reply"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::traceroute {2031615, "traceroute"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::conversion_error {2097151, "conversion-error"};
const Enum::YLeaf Ipv4AclIcmpTypeCodeEnum::mobile_redirect {2162687, "mobile-redirect"};

const Enum::YLeaf Ipv4AclFragFlags::dont_fragment {1, "dont-fragment"};
const Enum::YLeaf Ipv4AclFragFlags::is_fragment {2, "is-fragment"};
const Enum::YLeaf Ipv4AclFragFlags::first_fragment {4, "first-fragment"};
const Enum::YLeaf Ipv4AclFragFlags::last_fragment {8, "last-fragment"};
const Enum::YLeaf Ipv4AclFragFlags::dont_fragment_is_fragment {3, "dont-fragment-is-fragment"};
const Enum::YLeaf Ipv4AclFragFlags::dont_fragment_first_fragment {5, "dont-fragment-first-fragment"};
const Enum::YLeaf Ipv4AclFragFlags::dont_fragment_last_fragment {9, "dont-fragment-last-fragment"};

const Enum::YLeaf Ipv4AclTcpBitsNumber::established {20, "established"};
const Enum::YLeaf Ipv4AclTcpBitsNumber::ack {16, "ack"};
const Enum::YLeaf Ipv4AclTcpBitsNumber::rst {4, "rst"};
const Enum::YLeaf Ipv4AclTcpBitsNumber::fin {1, "fin"};
const Enum::YLeaf Ipv4AclTcpBitsNumber::psh {8, "psh"};
const Enum::YLeaf Ipv4AclTcpBitsNumber::syn {2, "syn"};
const Enum::YLeaf Ipv4AclTcpBitsNumber::urg {32, "urg"};

const Enum::YLeaf Ipv4AclLoggingEnum::log {1, "log"};
const Enum::YLeaf Ipv4AclLoggingEnum::log_input {2, "log-input"};


}
}

