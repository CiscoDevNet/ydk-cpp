
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_types.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_types {

const Enum::YLeaf AccessListInOutType::in {0, "in"};
const Enum::YLeaf AccessListInOutType::out {1, "out"};

const Enum::YLeaf AclUdpPortType::biff {512, "biff"};
const Enum::YLeaf AclUdpPortType::bootpc {68, "bootpc"};
const Enum::YLeaf AclUdpPortType::bootps {67, "bootps"};
const Enum::YLeaf AclUdpPortType::discard {9, "discard"};
const Enum::YLeaf AclUdpPortType::dnsix {195, "dnsix"};
const Enum::YLeaf AclUdpPortType::domain {53, "domain"};
const Enum::YLeaf AclUdpPortType::echo {7, "echo"};
const Enum::YLeaf AclUdpPortType::isakmp {500, "isakmp"};
const Enum::YLeaf AclUdpPortType::mobile_ip {434, "mobile-ip"};
const Enum::YLeaf AclUdpPortType::nameserver {42, "nameserver"};
const Enum::YLeaf AclUdpPortType::netbios_dgm {138, "netbios-dgm"};
const Enum::YLeaf AclUdpPortType::netbios_ns {137, "netbios-ns"};
const Enum::YLeaf AclUdpPortType::netbios_ss {139, "netbios-ss"};
const Enum::YLeaf AclUdpPortType::non500_isakmp {4500, "non500-isakmp"};
const Enum::YLeaf AclUdpPortType::ntp {123, "ntp"};
const Enum::YLeaf AclUdpPortType::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf AclUdpPortType::rip {520, "rip"};
const Enum::YLeaf AclUdpPortType::ripv6 {521, "ripv6"};
const Enum::YLeaf AclUdpPortType::snmp {161, "snmp"};
const Enum::YLeaf AclUdpPortType::snmptrap {162, "snmptrap"};
const Enum::YLeaf AclUdpPortType::sunrpc {111, "sunrpc"};
const Enum::YLeaf AclUdpPortType::syslog {514, "syslog"};
const Enum::YLeaf AclUdpPortType::tacacs {49, "tacacs"};
const Enum::YLeaf AclUdpPortType::talk {517, "talk"};
const Enum::YLeaf AclUdpPortType::tftp {69, "tftp"};
const Enum::YLeaf AclUdpPortType::time {37, "time"};
const Enum::YLeaf AclUdpPortType::who {513, "who"};
const Enum::YLeaf AclUdpPortType::xdmcp {177, "xdmcp"};

const Enum::YLeaf AclTcpPortType::bgp {179, "bgp"};
const Enum::YLeaf AclTcpPortType::chargen {19, "chargen"};
const Enum::YLeaf AclTcpPortType::cmd {514, "cmd"};
const Enum::YLeaf AclTcpPortType::daytime {13, "daytime"};
const Enum::YLeaf AclTcpPortType::discard {9, "discard"};
const Enum::YLeaf AclTcpPortType::domain {53, "domain"};
const Enum::YLeaf AclTcpPortType::echo {7, "echo"};
const Enum::YLeaf AclTcpPortType::exec {512, "exec"};
const Enum::YLeaf AclTcpPortType::finger {79, "finger"};
const Enum::YLeaf AclTcpPortType::ftp {21, "ftp"};
const Enum::YLeaf AclTcpPortType::ftp_data {20, "ftp-data"};
const Enum::YLeaf AclTcpPortType::gopher {70, "gopher"};
const Enum::YLeaf AclTcpPortType::hostname {101, "hostname"};
const Enum::YLeaf AclTcpPortType::ident {113, "ident"};
const Enum::YLeaf AclTcpPortType::irc {194, "irc"};
const Enum::YLeaf AclTcpPortType::klogin {543, "klogin"};
const Enum::YLeaf AclTcpPortType::kshell {544, "kshell"};
const Enum::YLeaf AclTcpPortType::login {513, "login"};
const Enum::YLeaf AclTcpPortType::lpd {515, "lpd"};
const Enum::YLeaf AclTcpPortType::msrpc {135, "msrpc"};
const Enum::YLeaf AclTcpPortType::nntp {119, "nntp"};
const Enum::YLeaf AclTcpPortType::pim_auto_rp {496, "pim-auto-rp"};
const Enum::YLeaf AclTcpPortType::pop2 {109, "pop2"};
const Enum::YLeaf AclTcpPortType::pop3 {110, "pop3"};
const Enum::YLeaf AclTcpPortType::smtp {25, "smtp"};
const Enum::YLeaf AclTcpPortType::sunrpc {111, "sunrpc"};
const Enum::YLeaf AclTcpPortType::tacacs {49, "tacacs"};
const Enum::YLeaf AclTcpPortType::talk {517, "talk"};
const Enum::YLeaf AclTcpPortType::telnet {23, "telnet"};
const Enum::YLeaf AclTcpPortType::time {37, "time"};
const Enum::YLeaf AclTcpPortType::uucp {540, "uucp"};
const Enum::YLeaf AclTcpPortType::whois {43, "whois"};
const Enum::YLeaf AclTcpPortType::www {80, "www"};

const Enum::YLeaf RedistOspfExternalType::Y_1 {0, "1"};
const Enum::YLeaf RedistOspfExternalType::Y_2 {1, "2"};

const Enum::YLeaf CosValueType::cos {0, "cos"};
const Enum::YLeaf CosValueType::dscp {1, "dscp"};
const Enum::YLeaf CosValueType::exp {2, "exp"};
const Enum::YLeaf CosValueType::precedence {3, "precedence"};

const Enum::YLeaf DscpType::af11 {10, "af11"};
const Enum::YLeaf DscpType::af12 {12, "af12"};
const Enum::YLeaf DscpType::af13 {14, "af13"};
const Enum::YLeaf DscpType::af21 {18, "af21"};
const Enum::YLeaf DscpType::af22 {20, "af22"};
const Enum::YLeaf DscpType::af23 {22, "af23"};
const Enum::YLeaf DscpType::af31 {26, "af31"};
const Enum::YLeaf DscpType::af32 {28, "af32"};
const Enum::YLeaf DscpType::af33 {30, "af33"};
const Enum::YLeaf DscpType::af41 {34, "af41"};
const Enum::YLeaf DscpType::af42 {36, "af42"};
const Enum::YLeaf DscpType::af43 {38, "af43"};
const Enum::YLeaf DscpType::cs1 {8, "cs1"};
const Enum::YLeaf DscpType::cs2 {16, "cs2"};
const Enum::YLeaf DscpType::cs3 {24, "cs3"};
const Enum::YLeaf DscpType::cs4 {32, "cs4"};
const Enum::YLeaf DscpType::cs5 {40, "cs5"};
const Enum::YLeaf DscpType::cs6 {48, "cs6"};
const Enum::YLeaf DscpType::cs7 {56, "cs7"};
const Enum::YLeaf DscpType::default_ {0, "default"};
const Enum::YLeaf DscpType::dscp {57, "dscp"};
const Enum::YLeaf DscpType::ef {46, "ef"};
const Enum::YLeaf DscpType::precedence {58, "precedence"};

const Enum::YLeaf ExpValueType::cos {0, "cos"};
const Enum::YLeaf ExpValueType::dscp {1, "dscp"};
const Enum::YLeaf ExpValueType::exp {2, "exp"};
const Enum::YLeaf ExpValueType::precedence {3, "precedence"};

const Enum::YLeaf InterfaceType::BDI {0, "BDI"};
const Enum::YLeaf InterfaceType::FastEthernet {1, "FastEthernet"};
const Enum::YLeaf InterfaceType::GigabitEthernet {2, "GigabitEthernet"};
const Enum::YLeaf InterfaceType::Loopback {3, "Loopback"};
const Enum::YLeaf InterfaceType::Port_channel {4, "Port-channel"};
const Enum::YLeaf InterfaceType::Serial {5, "Serial"};
const Enum::YLeaf InterfaceType::TenGigabitEthernet {6, "TenGigabitEthernet"};
const Enum::YLeaf InterfaceType::Vlan {7, "Vlan"};
const Enum::YLeaf InterfaceType::FiveGigabitEthernet {8, "FiveGigabitEthernet"};
const Enum::YLeaf InterfaceType::TwentyFiveGigE {9, "TwentyFiveGigE"};
const Enum::YLeaf InterfaceType::TwoGigabitEthernet {10, "TwoGigabitEthernet"};

const Enum::YLeaf MobilityType::bind_acknowledgement {0, "bind-acknowledgement"};
const Enum::YLeaf MobilityType::bind_error {1, "bind-error"};
const Enum::YLeaf MobilityType::bind_refresh {2, "bind-refresh"};
const Enum::YLeaf MobilityType::bind_update {3, "bind-update"};
const Enum::YLeaf MobilityType::cot {4, "cot"};
const Enum::YLeaf MobilityType::coti {5, "coti"};
const Enum::YLeaf MobilityType::hot {6, "hot"};
const Enum::YLeaf MobilityType::hoti {7, "hoti"};

const Enum::YLeaf PrecValueType::cos {0, "cos"};
const Enum::YLeaf PrecValueType::dscp {1, "dscp"};
const Enum::YLeaf PrecValueType::exp {2, "exp"};
const Enum::YLeaf PrecValueType::precedence {3, "precedence"};

const Enum::YLeaf PrecedenceType::critical {0, "critical"};
const Enum::YLeaf PrecedenceType::flash {1, "flash"};
const Enum::YLeaf PrecedenceType::flash_override {2, "flash-override"};
const Enum::YLeaf PrecedenceType::immediate {3, "immediate"};
const Enum::YLeaf PrecedenceType::internet {4, "internet"};
const Enum::YLeaf PrecedenceType::network {5, "network"};
const Enum::YLeaf PrecedenceType::priority {6, "priority"};
const Enum::YLeaf PrecedenceType::routine {7, "routine"};

const Enum::YLeaf LimitDcNonDcType::disable {0, "disable"};

const Enum::YLeaf QosValueType::cos {0, "cos"};
const Enum::YLeaf QosValueType::dscp {1, "dscp"};
const Enum::YLeaf QosValueType::exp {2, "exp"};
const Enum::YLeaf QosValueType::precedence {3, "precedence"};

const Enum::YLeaf WeekdayType::Mon {0, "Mon"};
const Enum::YLeaf WeekdayType::Tue {1, "Tue"};
const Enum::YLeaf WeekdayType::Wed {2, "Wed"};
const Enum::YLeaf WeekdayType::Thu {3, "Thu"};
const Enum::YLeaf WeekdayType::Fri {4, "Fri"};
const Enum::YLeaf WeekdayType::Sat {5, "Sat"};
const Enum::YLeaf WeekdayType::Sun {6, "Sun"};

const Enum::YLeaf BgpIpv4AfType::unicast {0, "unicast"};
const Enum::YLeaf BgpIpv4AfType::multicast {1, "multicast"};
const Enum::YLeaf BgpIpv4AfType::mdt {2, "mdt"};
const Enum::YLeaf BgpIpv4AfType::tunnel {3, "tunnel"};
const Enum::YLeaf BgpIpv4AfType::labeled_unicast {4, "labeled-unicast"};
const Enum::YLeaf BgpIpv4AfType::flowspec {5, "flowspec"};
const Enum::YLeaf BgpIpv4AfType::mvpn {6, "mvpn"};

const Enum::YLeaf BgpIpv6AfType::unicast {0, "unicast"};
const Enum::YLeaf BgpIpv6AfType::multicast {1, "multicast"};
const Enum::YLeaf BgpIpv6AfType::mdt {2, "mdt"};
const Enum::YLeaf BgpIpv6AfType::flowspec {3, "flowspec"};
const Enum::YLeaf BgpIpv6AfType::mvpn {4, "mvpn"};

const Enum::YLeaf CommunityWellKnownType::gshut {0, "gshut"};
const Enum::YLeaf CommunityWellKnownType::internet {1, "internet"};
const Enum::YLeaf CommunityWellKnownType::local_AS {2, "local-AS"};
const Enum::YLeaf CommunityWellKnownType::no_advertise {3, "no-advertise"};
const Enum::YLeaf CommunityWellKnownType::no_export {4, "no-export"};

const Enum::YLeaf CommunityWellKnownAddType::gshut {0, "gshut"};
const Enum::YLeaf CommunityWellKnownAddType::internet {1, "internet"};
const Enum::YLeaf CommunityWellKnownAddType::local_AS {2, "local-AS"};
const Enum::YLeaf CommunityWellKnownAddType::no_advertise {3, "no-advertise"};
const Enum::YLeaf CommunityWellKnownAddType::no_export {4, "no-export"};
const Enum::YLeaf CommunityWellKnownAddType::additive {5, "additive"};

const Enum::YLeaf MonthType::Jan {0, "Jan"};
const Enum::YLeaf MonthType::Feb {1, "Feb"};
const Enum::YLeaf MonthType::Mar {2, "Mar"};
const Enum::YLeaf MonthType::Apr {3, "Apr"};
const Enum::YLeaf MonthType::May {4, "May"};
const Enum::YLeaf MonthType::Jun {5, "Jun"};
const Enum::YLeaf MonthType::Jul {6, "Jul"};
const Enum::YLeaf MonthType::Aug {7, "Aug"};
const Enum::YLeaf MonthType::Sep {8, "Sep"};
const Enum::YLeaf MonthType::Oct {9, "Oct"};
const Enum::YLeaf MonthType::Nov {10, "Nov"};
const Enum::YLeaf MonthType::Dec {11, "Dec"};


}
}

