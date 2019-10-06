
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_FIREWALL_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_FIREWALL_TC {

const Enum::YLeaf CFWUrlServerStatus::online {1, "online"};
const Enum::YLeaf CFWUrlServerStatus::offline {2, "offline"};
const Enum::YLeaf CFWUrlServerStatus::indeterminate {3, "indeterminate"};

const Enum::YLeaf CFWNetworkProtocol::none {1, "none"};
const Enum::YLeaf CFWNetworkProtocol::other {2, "other"};
const Enum::YLeaf CFWNetworkProtocol::ip {3, "ip"};
const Enum::YLeaf CFWNetworkProtocol::icmp {4, "icmp"};
const Enum::YLeaf CFWNetworkProtocol::gre {5, "gre"};
const Enum::YLeaf CFWNetworkProtocol::udp {6, "udp"};
const Enum::YLeaf CFWNetworkProtocol::tcp {7, "tcp"};

const Enum::YLeaf CFWUrlfVendorId::other {1, "other"};
const Enum::YLeaf CFWUrlfVendorId::websense {2, "websense"};
const Enum::YLeaf CFWUrlfVendorId::n2h2 {3, "n2h2"};

const Enum::YLeaf CFWApplicationProtocol::none {1, "none"};
const Enum::YLeaf CFWApplicationProtocol::other {2, "other"};
const Enum::YLeaf CFWApplicationProtocol::ftp {3, "ftp"};
const Enum::YLeaf CFWApplicationProtocol::telnet {4, "telnet"};
const Enum::YLeaf CFWApplicationProtocol::smtp {5, "smtp"};
const Enum::YLeaf CFWApplicationProtocol::http {6, "http"};
const Enum::YLeaf CFWApplicationProtocol::tacacs {7, "tacacs"};
const Enum::YLeaf CFWApplicationProtocol::dns {8, "dns"};
const Enum::YLeaf CFWApplicationProtocol::sqlnet {9, "sqlnet"};
const Enum::YLeaf CFWApplicationProtocol::https {10, "https"};
const Enum::YLeaf CFWApplicationProtocol::tftp {11, "tftp"};
const Enum::YLeaf CFWApplicationProtocol::gopher {12, "gopher"};
const Enum::YLeaf CFWApplicationProtocol::finger {13, "finger"};
const Enum::YLeaf CFWApplicationProtocol::kerberos {14, "kerberos"};
const Enum::YLeaf CFWApplicationProtocol::pop2 {15, "pop2"};
const Enum::YLeaf CFWApplicationProtocol::pop3 {16, "pop3"};
const Enum::YLeaf CFWApplicationProtocol::sunRpc {17, "sunRpc"};
const Enum::YLeaf CFWApplicationProtocol::msRpc {18, "msRpc"};
const Enum::YLeaf CFWApplicationProtocol::nntp {19, "nntp"};
const Enum::YLeaf CFWApplicationProtocol::snmp {20, "snmp"};
const Enum::YLeaf CFWApplicationProtocol::imap {21, "imap"};
const Enum::YLeaf CFWApplicationProtocol::ldap {22, "ldap"};
const Enum::YLeaf CFWApplicationProtocol::exec {23, "exec"};
const Enum::YLeaf CFWApplicationProtocol::login {24, "login"};
const Enum::YLeaf CFWApplicationProtocol::shell {25, "shell"};
const Enum::YLeaf CFWApplicationProtocol::msSql {26, "msSql"};
const Enum::YLeaf CFWApplicationProtocol::sybaseSql {27, "sybaseSql"};
const Enum::YLeaf CFWApplicationProtocol::nfs {28, "nfs"};
const Enum::YLeaf CFWApplicationProtocol::lotusnote {29, "lotusnote"};
const Enum::YLeaf CFWApplicationProtocol::h323 {30, "h323"};
const Enum::YLeaf CFWApplicationProtocol::cuseeme {31, "cuseeme"};
const Enum::YLeaf CFWApplicationProtocol::realmedia {32, "realmedia"};
const Enum::YLeaf CFWApplicationProtocol::netshow {33, "netshow"};
const Enum::YLeaf CFWApplicationProtocol::streamworks {34, "streamworks"};
const Enum::YLeaf CFWApplicationProtocol::vdolive {35, "vdolive"};
const Enum::YLeaf CFWApplicationProtocol::sap {36, "sap"};
const Enum::YLeaf CFWApplicationProtocol::sip {37, "sip"};
const Enum::YLeaf CFWApplicationProtocol::mgcp {38, "mgcp"};
const Enum::YLeaf CFWApplicationProtocol::rtsp {39, "rtsp"};
const Enum::YLeaf CFWApplicationProtocol::skinny {40, "skinny"};
const Enum::YLeaf CFWApplicationProtocol::gtpV0 {41, "gtpV0"};
const Enum::YLeaf CFWApplicationProtocol::gtpV1 {42, "gtpV1"};
const Enum::YLeaf CFWApplicationProtocol::echo {43, "echo"};
const Enum::YLeaf CFWApplicationProtocol::discard {44, "discard"};
const Enum::YLeaf CFWApplicationProtocol::daytime {45, "daytime"};
const Enum::YLeaf CFWApplicationProtocol::netstat {46, "netstat"};
const Enum::YLeaf CFWApplicationProtocol::ssh {47, "ssh"};
const Enum::YLeaf CFWApplicationProtocol::time {48, "time"};
const Enum::YLeaf CFWApplicationProtocol::tacacsDs {49, "tacacsDs"};
const Enum::YLeaf CFWApplicationProtocol::bootps {50, "bootps"};
const Enum::YLeaf CFWApplicationProtocol::bootpc {51, "bootpc"};
const Enum::YLeaf CFWApplicationProtocol::dnsix {52, "dnsix"};
const Enum::YLeaf CFWApplicationProtocol::rtelnet {53, "rtelnet"};
const Enum::YLeaf CFWApplicationProtocol::ident {54, "ident"};
const Enum::YLeaf CFWApplicationProtocol::sqlServ {55, "sqlServ"};
const Enum::YLeaf CFWApplicationProtocol::ntp {56, "ntp"};
const Enum::YLeaf CFWApplicationProtocol::pwdgen {57, "pwdgen"};
const Enum::YLeaf CFWApplicationProtocol::ciscoFna {58, "ciscoFna"};
const Enum::YLeaf CFWApplicationProtocol::ciscoTna {59, "ciscoTna"};
const Enum::YLeaf CFWApplicationProtocol::ciscoSys {60, "ciscoSys"};
const Enum::YLeaf CFWApplicationProtocol::netbiosNs {61, "netbiosNs"};
const Enum::YLeaf CFWApplicationProtocol::netbiosDgm {62, "netbiosDgm"};
const Enum::YLeaf CFWApplicationProtocol::netbiosSsn {63, "netbiosSsn"};
const Enum::YLeaf CFWApplicationProtocol::sqlSrv {64, "sqlSrv"};
const Enum::YLeaf CFWApplicationProtocol::snmpTrap {65, "snmpTrap"};
const Enum::YLeaf CFWApplicationProtocol::rsvd {66, "rsvd"};
const Enum::YLeaf CFWApplicationProtocol::send {67, "send"};
const Enum::YLeaf CFWApplicationProtocol::xdmcp {68, "xdmcp"};
const Enum::YLeaf CFWApplicationProtocol::bgp {69, "bgp"};
const Enum::YLeaf CFWApplicationProtocol::irc {70, "irc"};
const Enum::YLeaf CFWApplicationProtocol::qmtp {71, "qmtp"};
const Enum::YLeaf CFWApplicationProtocol::ipx {72, "ipx"};
const Enum::YLeaf CFWApplicationProtocol::dbase {73, "dbase"};
const Enum::YLeaf CFWApplicationProtocol::imap3 {74, "imap3"};
const Enum::YLeaf CFWApplicationProtocol::rsvpTunnel {75, "rsvpTunnel"};
const Enum::YLeaf CFWApplicationProtocol::hpCollector {76, "hpCollector"};
const Enum::YLeaf CFWApplicationProtocol::hpManagedNode {77, "hpManagedNode"};
const Enum::YLeaf CFWApplicationProtocol::hpAlarmMgr {78, "hpAlarmMgr"};
const Enum::YLeaf CFWApplicationProtocol::microsoftDs {79, "microsoftDs"};
const Enum::YLeaf CFWApplicationProtocol::creativeServer {80, "creativeServer"};
const Enum::YLeaf CFWApplicationProtocol::creativePartnr {81, "creativePartnr"};
const Enum::YLeaf CFWApplicationProtocol::appleQtc {82, "appleQtc"};
const Enum::YLeaf CFWApplicationProtocol::igmpV3Lite {83, "igmpV3Lite"};
const Enum::YLeaf CFWApplicationProtocol::isakmp {84, "isakmp"};
const Enum::YLeaf CFWApplicationProtocol::biff {85, "biff"};
const Enum::YLeaf CFWApplicationProtocol::who {86, "who"};
const Enum::YLeaf CFWApplicationProtocol::syslog {87, "syslog"};
const Enum::YLeaf CFWApplicationProtocol::router {88, "router"};
const Enum::YLeaf CFWApplicationProtocol::ncp {89, "ncp"};
const Enum::YLeaf CFWApplicationProtocol::timed {90, "timed"};
const Enum::YLeaf CFWApplicationProtocol::ircServ {91, "ircServ"};
const Enum::YLeaf CFWApplicationProtocol::uucp {92, "uucp"};
const Enum::YLeaf CFWApplicationProtocol::syslogConn {93, "syslogConn"};
const Enum::YLeaf CFWApplicationProtocol::sshell {94, "sshell"};
const Enum::YLeaf CFWApplicationProtocol::ldaps {95, "ldaps"};
const Enum::YLeaf CFWApplicationProtocol::dhcpFailover {96, "dhcpFailover"};
const Enum::YLeaf CFWApplicationProtocol::msexchRouting {97, "msexchRouting"};
const Enum::YLeaf CFWApplicationProtocol::entrustSvcs {98, "entrustSvcs"};
const Enum::YLeaf CFWApplicationProtocol::entrustSvcHandler {99, "entrustSvcHandler"};
const Enum::YLeaf CFWApplicationProtocol::ciscoTdp {100, "ciscoTdp"};
const Enum::YLeaf CFWApplicationProtocol::webster {101, "webster"};
const Enum::YLeaf CFWApplicationProtocol::gdoi {102, "gdoi"};
const Enum::YLeaf CFWApplicationProtocol::iscsi {103, "iscsi"};
const Enum::YLeaf CFWApplicationProtocol::cddbp {104, "cddbp"};
const Enum::YLeaf CFWApplicationProtocol::ftps {105, "ftps"};
const Enum::YLeaf CFWApplicationProtocol::telnets {106, "telnets"};
const Enum::YLeaf CFWApplicationProtocol::imaps {107, "imaps"};
const Enum::YLeaf CFWApplicationProtocol::ircs {108, "ircs"};
const Enum::YLeaf CFWApplicationProtocol::pop3s {109, "pop3s"};
const Enum::YLeaf CFWApplicationProtocol::socks {110, "socks"};
const Enum::YLeaf CFWApplicationProtocol::kazaa {111, "kazaa"};
const Enum::YLeaf CFWApplicationProtocol::msSqlM {112, "msSqlM"};
const Enum::YLeaf CFWApplicationProtocol::msSna {113, "msSna"};
const Enum::YLeaf CFWApplicationProtocol::wins {114, "wins"};
const Enum::YLeaf CFWApplicationProtocol::ica {115, "ica"};
const Enum::YLeaf CFWApplicationProtocol::orasrv {116, "orasrv"};
const Enum::YLeaf CFWApplicationProtocol::rdbDbsDisp {117, "rdbDbsDisp"};
const Enum::YLeaf CFWApplicationProtocol::vqp {118, "vqp"};
const Enum::YLeaf CFWApplicationProtocol::icabrowser {119, "icabrowser"};
const Enum::YLeaf CFWApplicationProtocol::kermit {120, "kermit"};
const Enum::YLeaf CFWApplicationProtocol::rsvpEncap {121, "rsvpEncap"};
const Enum::YLeaf CFWApplicationProtocol::l2tp {122, "l2tp"};
const Enum::YLeaf CFWApplicationProtocol::pptp {123, "pptp"};
const Enum::YLeaf CFWApplicationProtocol::h323Gatestat {124, "h323Gatestat"};
const Enum::YLeaf CFWApplicationProtocol::rWinsock {125, "rWinsock"};
const Enum::YLeaf CFWApplicationProtocol::radius {126, "radius"};
const Enum::YLeaf CFWApplicationProtocol::hsrp {127, "hsrp"};
const Enum::YLeaf CFWApplicationProtocol::net8Cman {128, "net8Cman"};
const Enum::YLeaf CFWApplicationProtocol::oracleEmVp {129, "oracleEmVp"};
const Enum::YLeaf CFWApplicationProtocol::oracleNames {130, "oracleNames"};
const Enum::YLeaf CFWApplicationProtocol::oracle {131, "oracle"};
const Enum::YLeaf CFWApplicationProtocol::ciscoSvcs {132, "ciscoSvcs"};
const Enum::YLeaf CFWApplicationProtocol::ciscoNetMgmt {133, "ciscoNetMgmt"};
const Enum::YLeaf CFWApplicationProtocol::stun {134, "stun"};
const Enum::YLeaf CFWApplicationProtocol::trRsrb {135, "trRsrb"};
const Enum::YLeaf CFWApplicationProtocol::ddnsV3 {136, "ddnsV3"};
const Enum::YLeaf CFWApplicationProtocol::aceSvr {137, "aceSvr"};
const Enum::YLeaf CFWApplicationProtocol::giop {138, "giop"};
const Enum::YLeaf CFWApplicationProtocol::ttc {139, "ttc"};
const Enum::YLeaf CFWApplicationProtocol::ipass {140, "ipass"};
const Enum::YLeaf CFWApplicationProtocol::clp {141, "clp"};
const Enum::YLeaf CFWApplicationProtocol::citrixImaClient {142, "citrixImaClient"};
const Enum::YLeaf CFWApplicationProtocol::sms {143, "sms"};
const Enum::YLeaf CFWApplicationProtocol::citrix {144, "citrix"};
const Enum::YLeaf CFWApplicationProtocol::realSecure {145, "realSecure"};
const Enum::YLeaf CFWApplicationProtocol::lotusMtap {146, "lotusMtap"};
const Enum::YLeaf CFWApplicationProtocol::cifs {147, "cifs"};
const Enum::YLeaf CFWApplicationProtocol::msDotnetster {148, "msDotnetster"};
const Enum::YLeaf CFWApplicationProtocol::tarantella {149, "tarantella"};
const Enum::YLeaf CFWApplicationProtocol::fcipPort {150, "fcipPort"};
const Enum::YLeaf CFWApplicationProtocol::ssp {151, "ssp"};
const Enum::YLeaf CFWApplicationProtocol::iscsiTarget {152, "iscsiTarget"};
const Enum::YLeaf CFWApplicationProtocol::mySql {153, "mySql"};
const Enum::YLeaf CFWApplicationProtocol::msClusterNet {154, "msClusterNet"};
const Enum::YLeaf CFWApplicationProtocol::ldapAdmin {155, "ldapAdmin"};
const Enum::YLeaf CFWApplicationProtocol::ieee80211Iapp {156, "ieee80211Iapp"};
const Enum::YLeaf CFWApplicationProtocol::oemAgent {157, "oemAgent"};
const Enum::YLeaf CFWApplicationProtocol::rtcPmPort {158, "rtcPmPort"};
const Enum::YLeaf CFWApplicationProtocol::dbControlAgent {159, "dbControlAgent"};
const Enum::YLeaf CFWApplicationProtocol::ipsecMsft {160, "ipsecMsft"};
const Enum::YLeaf CFWApplicationProtocol::sipTls {161, "sipTls"};
const Enum::YLeaf CFWApplicationProtocol::aim {162, "aim"};
const Enum::YLeaf CFWApplicationProtocol::pcAnyWhereData {163, "pcAnyWhereData"};
const Enum::YLeaf CFWApplicationProtocol::pcAnyWhereStat {164, "pcAnyWhereStat"};
const Enum::YLeaf CFWApplicationProtocol::x11 {165, "x11"};
const Enum::YLeaf CFWApplicationProtocol::ircu {166, "ircu"};
const Enum::YLeaf CFWApplicationProtocol::n2h2Server {167, "n2h2Server"};
const Enum::YLeaf CFWApplicationProtocol::h323CallSigAlt {168, "h323CallSigAlt"};
const Enum::YLeaf CFWApplicationProtocol::yahooMsgr {169, "yahooMsgr"};
const Enum::YLeaf CFWApplicationProtocol::msnMsgr {170, "msnMsgr"};

const Enum::YLeaf CFWPolicyTargetType::all {1, "all"};
const Enum::YLeaf CFWPolicyTargetType::other {2, "other"};
const Enum::YLeaf CFWPolicyTargetType::interface {3, "interface"};
const Enum::YLeaf CFWPolicyTargetType::zone {4, "zone"};
const Enum::YLeaf CFWPolicyTargetType::zonepair {5, "zonepair"};
const Enum::YLeaf CFWPolicyTargetType::user {6, "user"};
const Enum::YLeaf CFWPolicyTargetType::usergroup {7, "usergroup"};
const Enum::YLeaf CFWPolicyTargetType::context {8, "context"};


}
}

