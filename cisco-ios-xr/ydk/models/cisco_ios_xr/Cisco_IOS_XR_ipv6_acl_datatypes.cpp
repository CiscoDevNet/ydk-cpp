
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_acl_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_datatypes {

const Enum::YLeaf Ipv6AclTcpMatchOperatorEnum::match_all {1, "match-all"};
const Enum::YLeaf Ipv6AclTcpMatchOperatorEnum::match_any {3, "match-any"};

const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::no_route_to_destination {65536, "no-route-to-destination"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::administratively_prohibited {65537, "administratively-prohibited"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::beyond_scope_of_source_address {65538, "beyond-scope-of-source-address"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::host_unreachable {65539, "host-unreachable"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::port_unreachable {65540, "port-unreachable"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::unreachable {131071, "unreachable"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::packet_too_big {131072, "packet-too-big"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::ttl_exceeded {196608, "ttl-exceeded"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::reassembly_timeout {196609, "reassembly-timeout"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::time_exceeded {262143, "time-exceeded"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::erronenous_header_field {262144, "erronenous-header-field"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::option_missing {262145, "option-missing"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::no_room_for_option {262146, "no-room-for-option"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::parameter_problem {327679, "parameter-problem"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::echo {8388608, "echo"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::echo_reply {8454144, "echo-reply"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::group_membership_query {8585215, "group-membership-query"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::group_membership_report {8650751, "group-membership-report"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::group_membership_reduction {8716287, "group-membership-reduction"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::router_solicitation {8716288, "router-solicitation"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::router_advertisement {8781824, "router-advertisement"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::neighbor_solicitation {8847360, "neighbor-solicitation"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::neighbor_advertisement {8912896, "neighbor-advertisement"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::redirect {8978432, "redirect"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::rr_command {9043968, "rr-command"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::rr_result {9043969, "rr-result"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::rr_seqnum_reset {9044223, "rr-seqnum-reset"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::router_renumbering {9109503, "router-renumbering"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::query_subject_is_ipv6_address {9109504, "query-subject-is-ipv6-address"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::query_subject_is_domain_name {9109505, "query-subject-is-domain-name"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::query_subject_is_ipv4_address {9109506, "query-subject-is-ipv4-address"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::who_are_you_request {9175039, "who-are-you-request"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::node_information_successful_reply {9175040, "node-information-successful-reply"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::node_information_request_is_refused {9175041, "node-information-request-is-refused"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::unknown_query_type {9175042, "unknown-query-type"};
const Enum::YLeaf Ipv6AclIcmpTypeCodeEnum::who_are_you_reply {9240575, "who-are-you-reply"};

const Enum::YLeaf Ipv6AclProtocolNumber::ip {0, "ip"};
const Enum::YLeaf Ipv6AclProtocolNumber::icmp {1, "icmp"};
const Enum::YLeaf Ipv6AclProtocolNumber::igmp {2, "igmp"};
const Enum::YLeaf Ipv6AclProtocolNumber::ip_in_ip {4, "ip-in-ip"};
const Enum::YLeaf Ipv6AclProtocolNumber::tcp {6, "tcp"};
const Enum::YLeaf Ipv6AclProtocolNumber::igrp {9, "igrp"};
const Enum::YLeaf Ipv6AclProtocolNumber::udp {17, "udp"};
const Enum::YLeaf Ipv6AclProtocolNumber::gre {47, "gre"};
const Enum::YLeaf Ipv6AclProtocolNumber::esp {50, "esp"};
const Enum::YLeaf Ipv6AclProtocolNumber::ahp {51, "ahp"};
const Enum::YLeaf Ipv6AclProtocolNumber::icmpv6 {58, "icmpv6"};
const Enum::YLeaf Ipv6AclProtocolNumber::eigrp {88, "eigrp"};
const Enum::YLeaf Ipv6AclProtocolNumber::ospf {89, "ospf"};
const Enum::YLeaf Ipv6AclProtocolNumber::nos {94, "nos"};
const Enum::YLeaf Ipv6AclProtocolNumber::pim {103, "pim"};
const Enum::YLeaf Ipv6AclProtocolNumber::pcp {108, "pcp"};
const Enum::YLeaf Ipv6AclProtocolNumber::sctp {132, "sctp"};

const Enum::YLeaf Ipv6PrefixMatchMinLength::match_min_length {2, "match-min-length"};

const Enum::YLeaf Ipv6AclGrantEnum::deny {0, "deny"};
const Enum::YLeaf Ipv6AclGrantEnum::permit {1, "permit"};

const Enum::YLeaf Ipv6PrefixMatchMaxLength::match_max_length {3, "match-max-length"};

const Enum::YLeaf Ipv6AclPrecedenceNumber::critical {5, "critical"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::flash {3, "flash"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::flash_override {4, "flash-override"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::immediate {2, "immediate"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::internet {6, "internet"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::network {7, "network"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::priority {1, "priority"};
const Enum::YLeaf Ipv6AclPrecedenceNumber::routine {0, "routine"};

const Enum::YLeaf Ipv6AclOperatorEnum::equal {1, "equal"};
const Enum::YLeaf Ipv6AclOperatorEnum::greater_than {2, "greater-than"};
const Enum::YLeaf Ipv6AclOperatorEnum::less_than {3, "less-than"};
const Enum::YLeaf Ipv6AclOperatorEnum::not_equal {4, "not-equal"};
const Enum::YLeaf Ipv6AclOperatorEnum::range {5, "range"};

const Enum::YLeaf Ipv6AclDscpNumber::default_ {0, "default"};
const Enum::YLeaf Ipv6AclDscpNumber::af11 {10, "af11"};
const Enum::YLeaf Ipv6AclDscpNumber::af12 {12, "af12"};
const Enum::YLeaf Ipv6AclDscpNumber::af13 {14, "af13"};
const Enum::YLeaf Ipv6AclDscpNumber::af21 {18, "af21"};
const Enum::YLeaf Ipv6AclDscpNumber::af22 {20, "af22"};
const Enum::YLeaf Ipv6AclDscpNumber::af23 {22, "af23"};
const Enum::YLeaf Ipv6AclDscpNumber::af31 {26, "af31"};
const Enum::YLeaf Ipv6AclDscpNumber::af32 {28, "af32"};
const Enum::YLeaf Ipv6AclDscpNumber::af33 {30, "af33"};
const Enum::YLeaf Ipv6AclDscpNumber::af41 {34, "af41"};
const Enum::YLeaf Ipv6AclDscpNumber::af42 {36, "af42"};
const Enum::YLeaf Ipv6AclDscpNumber::af43 {38, "af43"};
const Enum::YLeaf Ipv6AclDscpNumber::cs1 {8, "cs1"};
const Enum::YLeaf Ipv6AclDscpNumber::cs2 {16, "cs2"};
const Enum::YLeaf Ipv6AclDscpNumber::cs3 {24, "cs3"};
const Enum::YLeaf Ipv6AclDscpNumber::cs4 {32, "cs4"};
const Enum::YLeaf Ipv6AclDscpNumber::cs5 {40, "cs5"};
const Enum::YLeaf Ipv6AclDscpNumber::cs6 {48, "cs6"};
const Enum::YLeaf Ipv6AclDscpNumber::cs7 {56, "cs7"};
const Enum::YLeaf Ipv6AclDscpNumber::ef {46, "ef"};

const Enum::YLeaf Ipv6PrefixMatchExactLength::match_exact_length {1, "match-exact-length"};

const Enum::YLeaf Ipv6AclPortNumber::echo {7, "echo"};
const Enum::YLeaf Ipv6AclPortNumber::discard {9, "discard"};
const Enum::YLeaf Ipv6AclPortNumber::daytime {13, "daytime"};
const Enum::YLeaf Ipv6AclPortNumber::char_gen {19, "char-gen"};
const Enum::YLeaf Ipv6AclPortNumber::ftp_data {20, "ftp-data"};
const Enum::YLeaf Ipv6AclPortNumber::ftp {21, "ftp"};
const Enum::YLeaf Ipv6AclPortNumber::telnet {23, "telnet"};
const Enum::YLeaf Ipv6AclPortNumber::smtp {25, "smtp"};
const Enum::YLeaf Ipv6AclPortNumber::time {37, "time"};
const Enum::YLeaf Ipv6AclPortNumber::name_server {42, "name-server"};
const Enum::YLeaf Ipv6AclPortNumber::who_is {43, "who-is"};
const Enum::YLeaf Ipv6AclPortNumber::tacacs {49, "tacacs"};
const Enum::YLeaf Ipv6AclPortNumber::dns {53, "dns"};
const Enum::YLeaf Ipv6AclPortNumber::boot_ps {67, "boot-ps"};
const Enum::YLeaf Ipv6AclPortNumber::boot_pc {68, "boot-pc"};
const Enum::YLeaf Ipv6AclPortNumber::tftp {69, "tftp"};
const Enum::YLeaf Ipv6AclPortNumber::gopher {70, "gopher"};
const Enum::YLeaf Ipv6AclPortNumber::finger {79, "finger"};
const Enum::YLeaf Ipv6AclPortNumber::www {80, "www"};
const Enum::YLeaf Ipv6AclPortNumber::host_name {101, "host-name"};
const Enum::YLeaf Ipv6AclPortNumber::pop2 {109, "pop2"};
const Enum::YLeaf Ipv6AclPortNumber::pop3 {110, "pop3"};
const Enum::YLeaf Ipv6AclPortNumber::sun_rpc {111, "sun-rpc"};
const Enum::YLeaf Ipv6AclPortNumber::ident {113, "ident"};
const Enum::YLeaf Ipv6AclPortNumber::nntp {119, "nntp"};
const Enum::YLeaf Ipv6AclPortNumber::ntp {123, "ntp"};
const Enum::YLeaf Ipv6AclPortNumber::net_bios_ns {137, "net-bios-ns"};
const Enum::YLeaf Ipv6AclPortNumber::net_bios_dgs {138, "net-bios-dgs"};
const Enum::YLeaf Ipv6AclPortNumber::net_bios_ss {139, "net-bios-ss"};
const Enum::YLeaf Ipv6AclPortNumber::snmp {161, "snmp"};
const Enum::YLeaf Ipv6AclPortNumber::snmp_trap {162, "snmp-trap"};
const Enum::YLeaf Ipv6AclPortNumber::xdmcp {177, "xdmcp"};
const Enum::YLeaf Ipv6AclPortNumber::bgp {179, "bgp"};
const Enum::YLeaf Ipv6AclPortNumber::irc {194, "irc"};
const Enum::YLeaf Ipv6AclPortNumber::dnsix {195, "dnsix"};
const Enum::YLeaf Ipv6AclPortNumber::mobile_ip {434, "mobile-ip"};
const Enum::YLeaf Ipv6AclPortNumber::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf Ipv6AclPortNumber::isakmp {500, "isakmp"};
const Enum::YLeaf Ipv6AclPortNumber::exec_or_biff {512, "exec-or-biff"};
const Enum::YLeaf Ipv6AclPortNumber::login_or_who {513, "login-or-who"};
const Enum::YLeaf Ipv6AclPortNumber::cmd_or_syslog {514, "cmd-or-syslog"};
const Enum::YLeaf Ipv6AclPortNumber::lpd {515, "lpd"};
const Enum::YLeaf Ipv6AclPortNumber::talk {517, "talk"};
const Enum::YLeaf Ipv6AclPortNumber::rip {520, "rip"};
const Enum::YLeaf Ipv6AclPortNumber::uucp {540, "uucp"};
const Enum::YLeaf Ipv6AclPortNumber::klogin {543, "klogin"};
const Enum::YLeaf Ipv6AclPortNumber::kshell {544, "kshell"};
const Enum::YLeaf Ipv6AclPortNumber::ldp {646, "ldp"};

const Enum::YLeaf Ipv6AclLoggingEnum::log {1, "log"};
const Enum::YLeaf Ipv6AclLoggingEnum::log_input {2, "log-input"};

const Enum::YLeaf Ipv6AclTypeEnum::acl {1, "acl"};
const Enum::YLeaf Ipv6AclTypeEnum::prefix_list {2, "prefix-list"};

const Enum::YLeaf Ipv6AclStatusEnum::disabled {0, "disabled"};
const Enum::YLeaf Ipv6AclStatusEnum::enabled {1, "enabled"};

const Enum::YLeaf Ipv6AclTcpBitsNumber::established {20, "established"};
const Enum::YLeaf Ipv6AclTcpBitsNumber::ack {16, "ack"};
const Enum::YLeaf Ipv6AclTcpBitsNumber::rst {4, "rst"};
const Enum::YLeaf Ipv6AclTcpBitsNumber::fin {1, "fin"};
const Enum::YLeaf Ipv6AclTcpBitsNumber::psh {8, "psh"};
const Enum::YLeaf Ipv6AclTcpBitsNumber::syn {2, "syn"};
const Enum::YLeaf Ipv6AclTcpBitsNumber::urg {32, "urg"};


}
}

