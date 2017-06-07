
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_types.hpp"

namespace ydk {
namespace Cisco_IOS_XE_types {

const Enum::YLeaf Cos_ValueTypeEnum::cos {0, "cos"};
const Enum::YLeaf Cos_ValueTypeEnum::dscp {1, "dscp"};
const Enum::YLeaf Cos_ValueTypeEnum::exp {2, "exp"};
const Enum::YLeaf Cos_ValueTypeEnum::precedence {3, "precedence"};

const Enum::YLeaf Exp_ValueTypeEnum::cos {0, "cos"};
const Enum::YLeaf Exp_ValueTypeEnum::dscp {1, "dscp"};
const Enum::YLeaf Exp_ValueTypeEnum::exp {2, "exp"};
const Enum::YLeaf Exp_ValueTypeEnum::precedence {3, "precedence"};

const Enum::YLeaf InterfaceTypeEnum::BDI {0, "BDI"};
const Enum::YLeaf InterfaceTypeEnum::FastEthernet {1, "FastEthernet"};
const Enum::YLeaf InterfaceTypeEnum::GigabitEthernet {2, "GigabitEthernet"};
const Enum::YLeaf InterfaceTypeEnum::Loopback {3, "Loopback"};
const Enum::YLeaf InterfaceTypeEnum::Port_channel {4, "Port-channel"};
const Enum::YLeaf InterfaceTypeEnum::Serial {5, "Serial"};
const Enum::YLeaf InterfaceTypeEnum::TenGigabitEthernet {6, "TenGigabitEthernet"};
const Enum::YLeaf InterfaceTypeEnum::Vlan {7, "Vlan"};

const Enum::YLeaf PrecedenceTypeEnum::critical {0, "critical"};
const Enum::YLeaf PrecedenceTypeEnum::flash {1, "flash"};
const Enum::YLeaf PrecedenceTypeEnum::flash_override {2, "flash-override"};
const Enum::YLeaf PrecedenceTypeEnum::immediate {3, "immediate"};
const Enum::YLeaf PrecedenceTypeEnum::internet {4, "internet"};
const Enum::YLeaf PrecedenceTypeEnum::network {5, "network"};
const Enum::YLeaf PrecedenceTypeEnum::priority {6, "priority"};
const Enum::YLeaf PrecedenceTypeEnum::routine {7, "routine"};

const Enum::YLeaf Qos_ValueTypeEnum::cos {0, "cos"};
const Enum::YLeaf Qos_ValueTypeEnum::dscp {1, "dscp"};
const Enum::YLeaf Qos_ValueTypeEnum::exp {2, "exp"};
const Enum::YLeaf Qos_ValueTypeEnum::precedence {3, "precedence"};

const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::unicast {0, "unicast"};
const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::multicast {1, "multicast"};
const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::mdt {2, "mdt"};
const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::tunnel {3, "tunnel"};
const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::labeled_unicast {4, "labeled-unicast"};
const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::flowspec {5, "flowspec"};
const Enum::YLeaf Bgp_Ipv4_Af_TypeEnum::mvpn {6, "mvpn"};

const Enum::YLeaf DscpTypeEnum::af11 {10, "af11"};
const Enum::YLeaf DscpTypeEnum::af12 {12, "af12"};
const Enum::YLeaf DscpTypeEnum::af13 {14, "af13"};
const Enum::YLeaf DscpTypeEnum::af21 {18, "af21"};
const Enum::YLeaf DscpTypeEnum::af22 {20, "af22"};
const Enum::YLeaf DscpTypeEnum::af23 {22, "af23"};
const Enum::YLeaf DscpTypeEnum::af31 {26, "af31"};
const Enum::YLeaf DscpTypeEnum::af32 {28, "af32"};
const Enum::YLeaf DscpTypeEnum::af33 {30, "af33"};
const Enum::YLeaf DscpTypeEnum::af41 {34, "af41"};
const Enum::YLeaf DscpTypeEnum::af42 {36, "af42"};
const Enum::YLeaf DscpTypeEnum::af43 {38, "af43"};
const Enum::YLeaf DscpTypeEnum::cs1 {8, "cs1"};
const Enum::YLeaf DscpTypeEnum::cs2 {16, "cs2"};
const Enum::YLeaf DscpTypeEnum::cs3 {24, "cs3"};
const Enum::YLeaf DscpTypeEnum::cs4 {32, "cs4"};
const Enum::YLeaf DscpTypeEnum::cs5 {40, "cs5"};
const Enum::YLeaf DscpTypeEnum::cs6 {48, "cs6"};
const Enum::YLeaf DscpTypeEnum::cs7 {56, "cs7"};
const Enum::YLeaf DscpTypeEnum::default_ {0, "default"};
const Enum::YLeaf DscpTypeEnum::dscp {57, "dscp"};
const Enum::YLeaf DscpTypeEnum::ef {46, "ef"};
const Enum::YLeaf DscpTypeEnum::precedence {58, "precedence"};

const Enum::YLeaf AclTcpPortTypeEnum::bgp {0, "bgp"};
const Enum::YLeaf AclTcpPortTypeEnum::chargen {1, "chargen"};
const Enum::YLeaf AclTcpPortTypeEnum::cmd {2, "cmd"};
const Enum::YLeaf AclTcpPortTypeEnum::connectedapps_plain {3, "connectedapps-plain"};
const Enum::YLeaf AclTcpPortTypeEnum::connectedapps_tls {4, "connectedapps-tls"};
const Enum::YLeaf AclTcpPortTypeEnum::daytime {5, "daytime"};
const Enum::YLeaf AclTcpPortTypeEnum::discard {6, "discard"};
const Enum::YLeaf AclTcpPortTypeEnum::domain {7, "domain"};
const Enum::YLeaf AclTcpPortTypeEnum::echo {8, "echo"};
const Enum::YLeaf AclTcpPortTypeEnum::exec {9, "exec"};
const Enum::YLeaf AclTcpPortTypeEnum::finger {10, "finger"};
const Enum::YLeaf AclTcpPortTypeEnum::ftp {11, "ftp"};
const Enum::YLeaf AclTcpPortTypeEnum::ftp_data {12, "ftp-data"};
const Enum::YLeaf AclTcpPortTypeEnum::gopher {13, "gopher"};
const Enum::YLeaf AclTcpPortTypeEnum::hostname {14, "hostname"};
const Enum::YLeaf AclTcpPortTypeEnum::ident {15, "ident"};
const Enum::YLeaf AclTcpPortTypeEnum::irc {16, "irc"};
const Enum::YLeaf AclTcpPortTypeEnum::klogin {17, "klogin"};
const Enum::YLeaf AclTcpPortTypeEnum::kshell {18, "kshell"};
const Enum::YLeaf AclTcpPortTypeEnum::login {19, "login"};
const Enum::YLeaf AclTcpPortTypeEnum::lpd {20, "lpd"};
const Enum::YLeaf AclTcpPortTypeEnum::msrpc {21, "msrpc"};
const Enum::YLeaf AclTcpPortTypeEnum::nntp {22, "nntp"};
const Enum::YLeaf AclTcpPortTypeEnum::pim_auto_rp {23, "pim-auto-rp"};
const Enum::YLeaf AclTcpPortTypeEnum::pop2 {24, "pop2"};
const Enum::YLeaf AclTcpPortTypeEnum::pop3 {25, "pop3"};
const Enum::YLeaf AclTcpPortTypeEnum::smtp {26, "smtp"};
const Enum::YLeaf AclTcpPortTypeEnum::sunrpc {27, "sunrpc"};
const Enum::YLeaf AclTcpPortTypeEnum::syslog {28, "syslog"};
const Enum::YLeaf AclTcpPortTypeEnum::tacacs {29, "tacacs"};
const Enum::YLeaf AclTcpPortTypeEnum::talk {30, "talk"};
const Enum::YLeaf AclTcpPortTypeEnum::telnet {31, "telnet"};
const Enum::YLeaf AclTcpPortTypeEnum::time {32, "time"};
const Enum::YLeaf AclTcpPortTypeEnum::uucp {33, "uucp"};
const Enum::YLeaf AclTcpPortTypeEnum::whois {34, "whois"};
const Enum::YLeaf AclTcpPortTypeEnum::www {35, "www"};

const Enum::YLeaf MonthTypeEnum::Jan {0, "Jan"};
const Enum::YLeaf MonthTypeEnum::Feb {1, "Feb"};
const Enum::YLeaf MonthTypeEnum::Mar {2, "Mar"};
const Enum::YLeaf MonthTypeEnum::Apr {3, "Apr"};
const Enum::YLeaf MonthTypeEnum::May {4, "May"};
const Enum::YLeaf MonthTypeEnum::Jun {5, "Jun"};
const Enum::YLeaf MonthTypeEnum::Jul {6, "Jul"};
const Enum::YLeaf MonthTypeEnum::Aug {7, "Aug"};
const Enum::YLeaf MonthTypeEnum::Sep {8, "Sep"};
const Enum::YLeaf MonthTypeEnum::Oct {9, "Oct"};
const Enum::YLeaf MonthTypeEnum::Nov {10, "Nov"};
const Enum::YLeaf MonthTypeEnum::Dec {11, "Dec"};

const Enum::YLeaf Prec_ValueTypeEnum::cos {0, "cos"};
const Enum::YLeaf Prec_ValueTypeEnum::dscp {1, "dscp"};
const Enum::YLeaf Prec_ValueTypeEnum::exp {2, "exp"};
const Enum::YLeaf Prec_ValueTypeEnum::precedence {3, "precedence"};

const Enum::YLeaf MobilityTypeEnum::bind_acknowledgement {0, "bind-acknowledgement"};
const Enum::YLeaf MobilityTypeEnum::bind_error {1, "bind-error"};
const Enum::YLeaf MobilityTypeEnum::bind_refresh {2, "bind-refresh"};
const Enum::YLeaf MobilityTypeEnum::bind_update {3, "bind-update"};
const Enum::YLeaf MobilityTypeEnum::cot {4, "cot"};
const Enum::YLeaf MobilityTypeEnum::coti {5, "coti"};
const Enum::YLeaf MobilityTypeEnum::hot {6, "hot"};
const Enum::YLeaf MobilityTypeEnum::hoti {7, "hoti"};

const Enum::YLeaf Bgp_Ipv6_Af_TypeEnum::unicast {0, "unicast"};
const Enum::YLeaf Bgp_Ipv6_Af_TypeEnum::multicast {1, "multicast"};
const Enum::YLeaf Bgp_Ipv6_Af_TypeEnum::mdt {2, "mdt"};
const Enum::YLeaf Bgp_Ipv6_Af_TypeEnum::flowspec {3, "flowspec"};
const Enum::YLeaf Bgp_Ipv6_Af_TypeEnum::mvpn {4, "mvpn"};

const Enum::YLeaf RedistOspfExternalTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf RedistOspfExternalTypeEnum::Y_2 {1, "2"};

const Enum::YLeaf LimitDcNonDcTypeEnum::disable {0, "disable"};

const Enum::YLeaf WeekdayTypeEnum::Mon {0, "Mon"};
const Enum::YLeaf WeekdayTypeEnum::Tue {1, "Tue"};
const Enum::YLeaf WeekdayTypeEnum::Wed {2, "Wed"};
const Enum::YLeaf WeekdayTypeEnum::Thu {3, "Thu"};
const Enum::YLeaf WeekdayTypeEnum::Fri {4, "Fri"};
const Enum::YLeaf WeekdayTypeEnum::Sat {5, "Sat"};
const Enum::YLeaf WeekdayTypeEnum::Sun {6, "Sun"};

const Enum::YLeaf AccessListInOutTypeEnum::in {0, "in"};
const Enum::YLeaf AccessListInOutTypeEnum::out {1, "out"};

const Enum::YLeaf AclUdpPortTypeEnum::biff {0, "biff"};
const Enum::YLeaf AclUdpPortTypeEnum::bootpc {1, "bootpc"};
const Enum::YLeaf AclUdpPortTypeEnum::bootps {2, "bootps"};
const Enum::YLeaf AclUdpPortTypeEnum::discard {3, "discard"};
const Enum::YLeaf AclUdpPortTypeEnum::dnsix {4, "dnsix"};
const Enum::YLeaf AclUdpPortTypeEnum::domain {5, "domain"};
const Enum::YLeaf AclUdpPortTypeEnum::echo {6, "echo"};
const Enum::YLeaf AclUdpPortTypeEnum::isakmp {7, "isakmp"};
const Enum::YLeaf AclUdpPortTypeEnum::mobile_ip {8, "mobile-ip"};
const Enum::YLeaf AclUdpPortTypeEnum::nameserver {9, "nameserver"};
const Enum::YLeaf AclUdpPortTypeEnum::netbios_dgm {10, "netbios-dgm"};
const Enum::YLeaf AclUdpPortTypeEnum::netbios_ns {11, "netbios-ns"};
const Enum::YLeaf AclUdpPortTypeEnum::netbios_ss {12, "netbios-ss"};
const Enum::YLeaf AclUdpPortTypeEnum::non500_isakmp {13, "non500-isakmp"};
const Enum::YLeaf AclUdpPortTypeEnum::ntp {14, "ntp"};
const Enum::YLeaf AclUdpPortTypeEnum::pim_auto_rp {15, "pim-auto-rp"};
const Enum::YLeaf AclUdpPortTypeEnum::rip {16, "rip"};
const Enum::YLeaf AclUdpPortTypeEnum::ripv6 {17, "ripv6"};
const Enum::YLeaf AclUdpPortTypeEnum::snmp {18, "snmp"};
const Enum::YLeaf AclUdpPortTypeEnum::snmptrap {19, "snmptrap"};
const Enum::YLeaf AclUdpPortTypeEnum::sunrpc {20, "sunrpc"};
const Enum::YLeaf AclUdpPortTypeEnum::syslog {21, "syslog"};
const Enum::YLeaf AclUdpPortTypeEnum::tacacs {22, "tacacs"};
const Enum::YLeaf AclUdpPortTypeEnum::talk {23, "talk"};
const Enum::YLeaf AclUdpPortTypeEnum::tftp {24, "tftp"};
const Enum::YLeaf AclUdpPortTypeEnum::time {25, "time"};
const Enum::YLeaf AclUdpPortTypeEnum::who {26, "who"};
const Enum::YLeaf AclUdpPortTypeEnum::xdmcp {27, "xdmcp"};

const Enum::YLeaf CommunityWellKnownTypeEnum::gshut {0, "gshut"};
const Enum::YLeaf CommunityWellKnownTypeEnum::internet {1, "internet"};
const Enum::YLeaf CommunityWellKnownTypeEnum::local_AS {2, "local-AS"};
const Enum::YLeaf CommunityWellKnownTypeEnum::no_advertise {3, "no-advertise"};
const Enum::YLeaf CommunityWellKnownTypeEnum::no_export {4, "no-export"};


}
}

