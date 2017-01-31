
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_acl_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_datatypes {


const Enum::YLeaf Ipv6AclTcpMatchOperatorEnumEnum::match_all {1, "match-all"};
const Enum::YLeaf Ipv6AclTcpMatchOperatorEnumEnum::match_any {3, "match-any"};

const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::no_route_to_destination {65536, "no-route-to-destination"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::administratively_prohibited {65537, "administratively-prohibited"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::beyond_scope_of_source_address {65538, "beyond-scope-of-source-address"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::host_unreachable {65539, "host-unreachable"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::port_unreachable {65540, "port-unreachable"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::unreachable {131071, "unreachable"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::packet_too_big {131072, "packet-too-big"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::ttl_exceeded {196608, "ttl-exceeded"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::reassembly_timeout {196609, "reassembly-timeout"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::time_exceeded {262143, "time-exceeded"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::erronenous_header_field {262144, "erronenous-header-field"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::option_missing {262145, "option-missing"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::no_room_for_option {262146, "no-room-for-option"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::parameter_problem {327679, "parameter-problem"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::echo {8388608, "echo"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::echo_reply {8454144, "echo-reply"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::group_membership_query {8585215, "group-membership-query"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::group_membership_report {8650751, "group-membership-report"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::group_membership_reduction {8716287, "group-membership-reduction"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::router_solicitation {8716288, "router-solicitation"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::router_advertisement {8781824, "router-advertisement"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::neighbor_solicitation {8847360, "neighbor-solicitation"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::neighbor_advertisement {8912896, "neighbor-advertisement"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::redirect {8978432, "redirect"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::rr_command {9043968, "rr-command"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::rr_result {9043969, "rr-result"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::rr_seqnum_reset {9044223, "rr-seqnum-reset"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::router_renumbering {9109503, "router-renumbering"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::query_subject_is_ipv6_address {9109504, "query-subject-is-ipv6-address"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::query_subject_is_domain_name {9109505, "query-subject-is-domain-name"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::query_subject_is_ipv4_address {9109506, "query-subject-is-ipv4-address"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::who_are_you_request {9175039, "who-are-you-request"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::node_information_successful_reply {9175040, "node-information-successful-reply"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::node_information_request_is_refused {9175041, "node-information-request-is-refused"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::unknown_query_type {9175042, "unknown-query-type"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnumEnum::who_are_you_reply {9240575, "who-are-you-reply"};

const Enum::YLeaf Ipv6AclProtocolNumberEnum::ip {0, "ip"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::icmp {1, "icmp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::igmp {2, "igmp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::ip_in_ip {4, "ip-in-ip"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::tcp {6, "tcp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::igrp {9, "igrp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::udp {17, "udp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::gre {47, "gre"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::esp {50, "esp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::ahp {51, "ahp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::eigrp {88, "eigrp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::ospf {89, "ospf"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::nos {94, "nos"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::pim {103, "pim"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::pcp {108, "pcp"};
const Enum::YLeaf Ipv6AclProtocolNumberEnum::sctp {132, "sctp"};

const Enum::YLeaf Ipv6PrefixMatchMinLengthEnum::match_min_length {2, "match-min-length"};

const Enum::YLeaf Ipv6AclGrantEnumEnum::deny {0, "deny"};
const Enum::YLeaf Ipv6AclGrantEnumEnum::permit {1, "permit"};

const Enum::YLeaf Ipv6PrefixMatchMaxLengthEnum::match_max_length {3, "match-max-length"};

const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::critical {5, "critical"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::flash {3, "flash"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::flash_override {4, "flash-override"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::immediate {2, "immediate"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::internet {6, "internet"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::network {7, "network"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::priority {1, "priority"};
const Enum::YLeaf Ipv6AclPrecedenceNumberEnum::routine {0, "routine"};

const Enum::YLeaf Ipv6AclOperatorEnumEnum::equal {1, "equal"};
const Enum::YLeaf Ipv6AclOperatorEnumEnum::greater_than {2, "greater-than"};
const Enum::YLeaf Ipv6AclOperatorEnumEnum::less_than {3, "less-than"};
const Enum::YLeaf Ipv6AclOperatorEnumEnum::not_equal {4, "not-equal"};
const Enum::YLeaf Ipv6AclOperatorEnumEnum::range {5, "range"};

const Enum::YLeaf Ipv6AclDscpNumberEnum::default_ {0, "default"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af11 {10, "af11"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af12 {12, "af12"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af13 {14, "af13"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af21 {18, "af21"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af22 {20, "af22"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af23 {22, "af23"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af31 {26, "af31"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af32 {28, "af32"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af33 {30, "af33"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af41 {34, "af41"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af42 {36, "af42"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::af43 {38, "af43"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs1 {8, "cs1"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs2 {16, "cs2"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs3 {24, "cs3"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs4 {32, "cs4"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs5 {40, "cs5"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs6 {48, "cs6"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::cs7 {56, "cs7"};
const Enum::YLeaf Ipv6AclDscpNumberEnum::ef {46, "ef"};

const Enum::YLeaf Ipv6PrefixMatchExactLengthEnum::match_exact_length {1, "match-exact-length"};

const Enum::YLeaf Ipv6AclPortNumberEnum::echo {7, "echo"};
const Enum::YLeaf Ipv6AclPortNumberEnum::discard {9, "discard"};
const Enum::YLeaf Ipv6AclPortNumberEnum::daytime {13, "daytime"};
const Enum::YLeaf Ipv6AclPortNumberEnum::char_gen {19, "char-gen"};
const Enum::YLeaf Ipv6AclPortNumberEnum::ftp_data {20, "ftp-data"};
const Enum::YLeaf Ipv6AclPortNumberEnum::ftp {21, "ftp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::telnet {23, "telnet"};
const Enum::YLeaf Ipv6AclPortNumberEnum::smtp {25, "smtp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::time {37, "time"};
const Enum::YLeaf Ipv6AclPortNumberEnum::name_server {42, "name-server"};
const Enum::YLeaf Ipv6AclPortNumberEnum::who_is {43, "who-is"};
const Enum::YLeaf Ipv6AclPortNumberEnum::tacacs {49, "tacacs"};
const Enum::YLeaf Ipv6AclPortNumberEnum::dns {53, "dns"};
const Enum::YLeaf Ipv6AclPortNumberEnum::boot_ps {67, "boot-ps"};
const Enum::YLeaf Ipv6AclPortNumberEnum::boot_pc {68, "boot-pc"};
const Enum::YLeaf Ipv6AclPortNumberEnum::tftp {69, "tftp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::gopher {70, "gopher"};
const Enum::YLeaf Ipv6AclPortNumberEnum::finger {79, "finger"};
const Enum::YLeaf Ipv6AclPortNumberEnum::www {80, "www"};
const Enum::YLeaf Ipv6AclPortNumberEnum::host_name {101, "host-name"};
const Enum::YLeaf Ipv6AclPortNumberEnum::pop2 {109, "pop2"};
const Enum::YLeaf Ipv6AclPortNumberEnum::pop3 {110, "pop3"};
const Enum::YLeaf Ipv6AclPortNumberEnum::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf Ipv6AclPortNumberEnum::ident {113, "ident"};
const Enum::YLeaf Ipv6AclPortNumberEnum::nntp {119, "nntp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::ntp {123, "ntp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::net_bios_ns {137, "net-bios-ns"};
const Enum::YLeaf Ipv6AclPortNumberEnum::net_bios_dgs {138, "net-bios-dgs"};
const Enum::YLeaf Ipv6AclPortNumberEnum::net_bios_ss {139, "net-bios-ss"};
const Enum::YLeaf Ipv6AclPortNumberEnum::snmp {161, "snmp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::snmp_trap {162, "snmp-trap"};
const Enum::YLeaf Ipv6AclPortNumberEnum::xdmcp {177, "xdmcp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::bgp {179, "bgp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::irc {194, "irc"};
const Enum::YLeaf Ipv6AclPortNumberEnum::dnsix {195, "dnsix"};
const Enum::YLeaf Ipv6AclPortNumberEnum::mobile_ip {434, "mobile-ip"};
const Enum::YLeaf Ipv6AclPortNumberEnum::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::isakmp {500, "isakmp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::exec_or_biff {512, "exec-or-biff"};
const Enum::YLeaf Ipv6AclPortNumberEnum::login_or_who {513, "login-or-who"};
const Enum::YLeaf Ipv6AclPortNumberEnum::cmd_or_syslog {514, "cmd-or-syslog"};
const Enum::YLeaf Ipv6AclPortNumberEnum::lpd {515, "lpd"};
const Enum::YLeaf Ipv6AclPortNumberEnum::talk {517, "talk"};
const Enum::YLeaf Ipv6AclPortNumberEnum::rip {520, "rip"};
const Enum::YLeaf Ipv6AclPortNumberEnum::uucp {540, "uucp"};
const Enum::YLeaf Ipv6AclPortNumberEnum::klogin {543, "klogin"};
const Enum::YLeaf Ipv6AclPortNumberEnum::kshell {544, "kshell"};
const Enum::YLeaf Ipv6AclPortNumberEnum::ldp {646, "ldp"};

const Enum::YLeaf Ipv6AclLoggingEnumEnum::log {1, "log"};
const Enum::YLeaf Ipv6AclLoggingEnumEnum::log_input {2, "log-input"};

const Enum::YLeaf Ipv6AclTypeEnumEnum::acl {1, "acl"};
const Enum::YLeaf Ipv6AclTypeEnumEnum::prefix_list {2, "prefix-list"};

const Enum::YLeaf Ipv6AclStatusEnumEnum::disabled {0, "disabled"};
const Enum::YLeaf Ipv6AclStatusEnumEnum::enabled {1, "enabled"};

const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::established {20, "established"};
const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::ack {16, "ack"};
const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::rst {4, "rst"};
const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::fin {1, "fin"};
const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::psh {8, "psh"};
const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::syn {2, "syn"};
const Enum::YLeaf Ipv6AclTcpBitsNumberEnum::urg {32, "urg"};


}
}

