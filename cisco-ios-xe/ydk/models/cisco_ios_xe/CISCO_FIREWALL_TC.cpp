
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_FIREWALL_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_FIREWALL_TC {

const Enum::YLeaf Cfwnetworkprotocol::none {1, "none"};
const Enum::YLeaf Cfwnetworkprotocol::other {2, "other"};
const Enum::YLeaf Cfwnetworkprotocol::ip {3, "ip"};
const Enum::YLeaf Cfwnetworkprotocol::icmp {4, "icmp"};
const Enum::YLeaf Cfwnetworkprotocol::gre {5, "gre"};
const Enum::YLeaf Cfwnetworkprotocol::udp {6, "udp"};
const Enum::YLeaf Cfwnetworkprotocol::tcp {7, "tcp"};

const Enum::YLeaf Cfwurlfvendorid::other {1, "other"};
const Enum::YLeaf Cfwurlfvendorid::websense {2, "websense"};
const Enum::YLeaf Cfwurlfvendorid::n2h2 {3, "n2h2"};

const Enum::YLeaf Cfwurlserverstatus::online {1, "online"};
const Enum::YLeaf Cfwurlserverstatus::offline {2, "offline"};
const Enum::YLeaf Cfwurlserverstatus::indeterminate {3, "indeterminate"};

const Enum::YLeaf Cfwapplicationprotocol::none {1, "none"};
const Enum::YLeaf Cfwapplicationprotocol::other {2, "other"};
const Enum::YLeaf Cfwapplicationprotocol::ftp {3, "ftp"};
const Enum::YLeaf Cfwapplicationprotocol::telnet {4, "telnet"};
const Enum::YLeaf Cfwapplicationprotocol::smtp {5, "smtp"};
const Enum::YLeaf Cfwapplicationprotocol::http {6, "http"};
const Enum::YLeaf Cfwapplicationprotocol::tacacs {7, "tacacs"};
const Enum::YLeaf Cfwapplicationprotocol::dns {8, "dns"};
const Enum::YLeaf Cfwapplicationprotocol::sqlnet {9, "sqlnet"};
const Enum::YLeaf Cfwapplicationprotocol::https {10, "https"};
const Enum::YLeaf Cfwapplicationprotocol::tftp {11, "tftp"};
const Enum::YLeaf Cfwapplicationprotocol::gopher {12, "gopher"};
const Enum::YLeaf Cfwapplicationprotocol::finger {13, "finger"};
const Enum::YLeaf Cfwapplicationprotocol::kerberos {14, "kerberos"};
const Enum::YLeaf Cfwapplicationprotocol::pop2 {15, "pop2"};
const Enum::YLeaf Cfwapplicationprotocol::pop3 {16, "pop3"};
const Enum::YLeaf Cfwapplicationprotocol::sunRpc {17, "sunRpc"};
const Enum::YLeaf Cfwapplicationprotocol::msRpc {18, "msRpc"};
const Enum::YLeaf Cfwapplicationprotocol::nntp {19, "nntp"};
const Enum::YLeaf Cfwapplicationprotocol::snmp {20, "snmp"};
const Enum::YLeaf Cfwapplicationprotocol::imap {21, "imap"};
const Enum::YLeaf Cfwapplicationprotocol::ldap {22, "ldap"};
const Enum::YLeaf Cfwapplicationprotocol::exec {23, "exec"};
const Enum::YLeaf Cfwapplicationprotocol::login {24, "login"};
const Enum::YLeaf Cfwapplicationprotocol::shell {25, "shell"};
const Enum::YLeaf Cfwapplicationprotocol::msSql {26, "msSql"};
const Enum::YLeaf Cfwapplicationprotocol::sybaseSql {27, "sybaseSql"};
const Enum::YLeaf Cfwapplicationprotocol::nfs {28, "nfs"};
const Enum::YLeaf Cfwapplicationprotocol::lotusnote {29, "lotusnote"};
const Enum::YLeaf Cfwapplicationprotocol::h323 {30, "h323"};
const Enum::YLeaf Cfwapplicationprotocol::cuseeme {31, "cuseeme"};
const Enum::YLeaf Cfwapplicationprotocol::realmedia {32, "realmedia"};
const Enum::YLeaf Cfwapplicationprotocol::netshow {33, "netshow"};
const Enum::YLeaf Cfwapplicationprotocol::streamworks {34, "streamworks"};
const Enum::YLeaf Cfwapplicationprotocol::vdolive {35, "vdolive"};
const Enum::YLeaf Cfwapplicationprotocol::sap {36, "sap"};
const Enum::YLeaf Cfwapplicationprotocol::sip {37, "sip"};
const Enum::YLeaf Cfwapplicationprotocol::mgcp {38, "mgcp"};
const Enum::YLeaf Cfwapplicationprotocol::rtsp {39, "rtsp"};
const Enum::YLeaf Cfwapplicationprotocol::skinny {40, "skinny"};
const Enum::YLeaf Cfwapplicationprotocol::gtpV0 {41, "gtpV0"};
const Enum::YLeaf Cfwapplicationprotocol::gtpV1 {42, "gtpV1"};
const Enum::YLeaf Cfwapplicationprotocol::echo {43, "echo"};
const Enum::YLeaf Cfwapplicationprotocol::discard {44, "discard"};
const Enum::YLeaf Cfwapplicationprotocol::daytime {45, "daytime"};
const Enum::YLeaf Cfwapplicationprotocol::netstat {46, "netstat"};
const Enum::YLeaf Cfwapplicationprotocol::ssh {47, "ssh"};
const Enum::YLeaf Cfwapplicationprotocol::time {48, "time"};
const Enum::YLeaf Cfwapplicationprotocol::tacacsDs {49, "tacacsDs"};
const Enum::YLeaf Cfwapplicationprotocol::bootps {50, "bootps"};
const Enum::YLeaf Cfwapplicationprotocol::bootpc {51, "bootpc"};
const Enum::YLeaf Cfwapplicationprotocol::dnsix {52, "dnsix"};
const Enum::YLeaf Cfwapplicationprotocol::rtelnet {53, "rtelnet"};
const Enum::YLeaf Cfwapplicationprotocol::ident {54, "ident"};
const Enum::YLeaf Cfwapplicationprotocol::sqlServ {55, "sqlServ"};
const Enum::YLeaf Cfwapplicationprotocol::ntp {56, "ntp"};
const Enum::YLeaf Cfwapplicationprotocol::pwdgen {57, "pwdgen"};
const Enum::YLeaf Cfwapplicationprotocol::ciscoFna {58, "ciscoFna"};
const Enum::YLeaf Cfwapplicationprotocol::ciscoTna {59, "ciscoTna"};
const Enum::YLeaf Cfwapplicationprotocol::ciscoSys {60, "ciscoSys"};
const Enum::YLeaf Cfwapplicationprotocol::netbiosNs {61, "netbiosNs"};
const Enum::YLeaf Cfwapplicationprotocol::netbiosDgm {62, "netbiosDgm"};
const Enum::YLeaf Cfwapplicationprotocol::netbiosSsn {63, "netbiosSsn"};
const Enum::YLeaf Cfwapplicationprotocol::sqlSrv {64, "sqlSrv"};
const Enum::YLeaf Cfwapplicationprotocol::snmpTrap {65, "snmpTrap"};
const Enum::YLeaf Cfwapplicationprotocol::rsvd {66, "rsvd"};
const Enum::YLeaf Cfwapplicationprotocol::send {67, "send"};
const Enum::YLeaf Cfwapplicationprotocol::xdmcp {68, "xdmcp"};
const Enum::YLeaf Cfwapplicationprotocol::bgp {69, "bgp"};
const Enum::YLeaf Cfwapplicationprotocol::irc {70, "irc"};
const Enum::YLeaf Cfwapplicationprotocol::qmtp {71, "qmtp"};
const Enum::YLeaf Cfwapplicationprotocol::ipx {72, "ipx"};
const Enum::YLeaf Cfwapplicationprotocol::dbase {73, "dbase"};
const Enum::YLeaf Cfwapplicationprotocol::imap3 {74, "imap3"};
const Enum::YLeaf Cfwapplicationprotocol::rsvpTunnel {75, "rsvpTunnel"};
const Enum::YLeaf Cfwapplicationprotocol::hpCollector {76, "hpCollector"};
const Enum::YLeaf Cfwapplicationprotocol::hpManagedNode {77, "hpManagedNode"};
const Enum::YLeaf Cfwapplicationprotocol::hpAlarmMgr {78, "hpAlarmMgr"};
const Enum::YLeaf Cfwapplicationprotocol::microsoftDs {79, "microsoftDs"};
const Enum::YLeaf Cfwapplicationprotocol::creativeServer {80, "creativeServer"};
const Enum::YLeaf Cfwapplicationprotocol::creativePartnr {81, "creativePartnr"};
const Enum::YLeaf Cfwapplicationprotocol::appleQtc {82, "appleQtc"};
const Enum::YLeaf Cfwapplicationprotocol::igmpV3Lite {83, "igmpV3Lite"};
const Enum::YLeaf Cfwapplicationprotocol::isakmp {84, "isakmp"};
const Enum::YLeaf Cfwapplicationprotocol::biff {85, "biff"};
const Enum::YLeaf Cfwapplicationprotocol::who {86, "who"};
const Enum::YLeaf Cfwapplicationprotocol::syslog {87, "syslog"};
const Enum::YLeaf Cfwapplicationprotocol::router {88, "router"};
const Enum::YLeaf Cfwapplicationprotocol::ncp {89, "ncp"};
const Enum::YLeaf Cfwapplicationprotocol::timed {90, "timed"};
const Enum::YLeaf Cfwapplicationprotocol::ircServ {91, "ircServ"};
const Enum::YLeaf Cfwapplicationprotocol::uucp {92, "uucp"};
const Enum::YLeaf Cfwapplicationprotocol::syslogConn {93, "syslogConn"};
const Enum::YLeaf Cfwapplicationprotocol::sshell {94, "sshell"};
const Enum::YLeaf Cfwapplicationprotocol::ldaps {95, "ldaps"};
const Enum::YLeaf Cfwapplicationprotocol::dhcpFailover {96, "dhcpFailover"};
const Enum::YLeaf Cfwapplicationprotocol::msexchRouting {97, "msexchRouting"};
const Enum::YLeaf Cfwapplicationprotocol::entrustSvcs {98, "entrustSvcs"};
const Enum::YLeaf Cfwapplicationprotocol::entrustSvcHandler {99, "entrustSvcHandler"};
const Enum::YLeaf Cfwapplicationprotocol::ciscoTdp {100, "ciscoTdp"};
const Enum::YLeaf Cfwapplicationprotocol::webster {101, "webster"};
const Enum::YLeaf Cfwapplicationprotocol::gdoi {102, "gdoi"};
const Enum::YLeaf Cfwapplicationprotocol::iscsi {103, "iscsi"};
const Enum::YLeaf Cfwapplicationprotocol::cddbp {104, "cddbp"};
const Enum::YLeaf Cfwapplicationprotocol::ftps {105, "ftps"};
const Enum::YLeaf Cfwapplicationprotocol::telnets {106, "telnets"};
const Enum::YLeaf Cfwapplicationprotocol::imaps {107, "imaps"};
const Enum::YLeaf Cfwapplicationprotocol::ircs {108, "ircs"};
const Enum::YLeaf Cfwapplicationprotocol::pop3s {109, "pop3s"};
const Enum::YLeaf Cfwapplicationprotocol::socks {110, "socks"};
const Enum::YLeaf Cfwapplicationprotocol::kazaa {111, "kazaa"};
const Enum::YLeaf Cfwapplicationprotocol::msSqlM {112, "msSqlM"};
const Enum::YLeaf Cfwapplicationprotocol::msSna {113, "msSna"};
const Enum::YLeaf Cfwapplicationprotocol::wins {114, "wins"};
const Enum::YLeaf Cfwapplicationprotocol::ica {115, "ica"};
const Enum::YLeaf Cfwapplicationprotocol::orasrv {116, "orasrv"};
const Enum::YLeaf Cfwapplicationprotocol::rdbDbsDisp {117, "rdbDbsDisp"};
const Enum::YLeaf Cfwapplicationprotocol::vqp {118, "vqp"};
const Enum::YLeaf Cfwapplicationprotocol::icabrowser {119, "icabrowser"};
const Enum::YLeaf Cfwapplicationprotocol::kermit {120, "kermit"};
const Enum::YLeaf Cfwapplicationprotocol::rsvpEncap {121, "rsvpEncap"};
const Enum::YLeaf Cfwapplicationprotocol::l2tp {122, "l2tp"};
const Enum::YLeaf Cfwapplicationprotocol::pptp {123, "pptp"};
const Enum::YLeaf Cfwapplicationprotocol::h323Gatestat {124, "h323Gatestat"};
const Enum::YLeaf Cfwapplicationprotocol::rWinsock {125, "rWinsock"};
const Enum::YLeaf Cfwapplicationprotocol::radius {126, "radius"};
const Enum::YLeaf Cfwapplicationprotocol::hsrp {127, "hsrp"};
const Enum::YLeaf Cfwapplicationprotocol::net8Cman {128, "net8Cman"};
const Enum::YLeaf Cfwapplicationprotocol::oracleEmVp {129, "oracleEmVp"};
const Enum::YLeaf Cfwapplicationprotocol::oracleNames {130, "oracleNames"};
const Enum::YLeaf Cfwapplicationprotocol::oracle {131, "oracle"};
const Enum::YLeaf Cfwapplicationprotocol::ciscoSvcs {132, "ciscoSvcs"};
const Enum::YLeaf Cfwapplicationprotocol::ciscoNetMgmt {133, "ciscoNetMgmt"};
const Enum::YLeaf Cfwapplicationprotocol::stun {134, "stun"};
const Enum::YLeaf Cfwapplicationprotocol::trRsrb {135, "trRsrb"};
const Enum::YLeaf Cfwapplicationprotocol::ddnsV3 {136, "ddnsV3"};
const Enum::YLeaf Cfwapplicationprotocol::aceSvr {137, "aceSvr"};
const Enum::YLeaf Cfwapplicationprotocol::giop {138, "giop"};
const Enum::YLeaf Cfwapplicationprotocol::ttc {139, "ttc"};
const Enum::YLeaf Cfwapplicationprotocol::ipass {140, "ipass"};
const Enum::YLeaf Cfwapplicationprotocol::clp {141, "clp"};
const Enum::YLeaf Cfwapplicationprotocol::citrixImaClient {142, "citrixImaClient"};
const Enum::YLeaf Cfwapplicationprotocol::sms {143, "sms"};
const Enum::YLeaf Cfwapplicationprotocol::citrix {144, "citrix"};
const Enum::YLeaf Cfwapplicationprotocol::realSecure {145, "realSecure"};
const Enum::YLeaf Cfwapplicationprotocol::lotusMtap {146, "lotusMtap"};
const Enum::YLeaf Cfwapplicationprotocol::cifs {147, "cifs"};
const Enum::YLeaf Cfwapplicationprotocol::msDotnetster {148, "msDotnetster"};
const Enum::YLeaf Cfwapplicationprotocol::tarantella {149, "tarantella"};
const Enum::YLeaf Cfwapplicationprotocol::fcipPort {150, "fcipPort"};
const Enum::YLeaf Cfwapplicationprotocol::ssp {151, "ssp"};
const Enum::YLeaf Cfwapplicationprotocol::iscsiTarget {152, "iscsiTarget"};
const Enum::YLeaf Cfwapplicationprotocol::mySql {153, "mySql"};
const Enum::YLeaf Cfwapplicationprotocol::msClusterNet {154, "msClusterNet"};
const Enum::YLeaf Cfwapplicationprotocol::ldapAdmin {155, "ldapAdmin"};
const Enum::YLeaf Cfwapplicationprotocol::ieee80211Iapp {156, "ieee80211Iapp"};
const Enum::YLeaf Cfwapplicationprotocol::oemAgent {157, "oemAgent"};
const Enum::YLeaf Cfwapplicationprotocol::rtcPmPort {158, "rtcPmPort"};
const Enum::YLeaf Cfwapplicationprotocol::dbControlAgent {159, "dbControlAgent"};
const Enum::YLeaf Cfwapplicationprotocol::ipsecMsft {160, "ipsecMsft"};
const Enum::YLeaf Cfwapplicationprotocol::sipTls {161, "sipTls"};
const Enum::YLeaf Cfwapplicationprotocol::aim {162, "aim"};
const Enum::YLeaf Cfwapplicationprotocol::pcAnyWhereData {163, "pcAnyWhereData"};
const Enum::YLeaf Cfwapplicationprotocol::pcAnyWhereStat {164, "pcAnyWhereStat"};
const Enum::YLeaf Cfwapplicationprotocol::x11 {165, "x11"};
const Enum::YLeaf Cfwapplicationprotocol::ircu {166, "ircu"};
const Enum::YLeaf Cfwapplicationprotocol::n2h2Server {167, "n2h2Server"};
const Enum::YLeaf Cfwapplicationprotocol::h323CallSigAlt {168, "h323CallSigAlt"};
const Enum::YLeaf Cfwapplicationprotocol::yahooMsgr {169, "yahooMsgr"};
const Enum::YLeaf Cfwapplicationprotocol::msnMsgr {170, "msnMsgr"};

const Enum::YLeaf Cfwpolicytargettype::all {1, "all"};
const Enum::YLeaf Cfwpolicytargettype::other {2, "other"};
const Enum::YLeaf Cfwpolicytargettype::interface {3, "interface"};
const Enum::YLeaf Cfwpolicytargettype::zone {4, "zone"};
const Enum::YLeaf Cfwpolicytargettype::zonepair {5, "zonepair"};
const Enum::YLeaf Cfwpolicytargettype::user {6, "user"};
const Enum::YLeaf Cfwpolicytargettype::usergroup {7, "usergroup"};
const Enum::YLeaf Cfwpolicytargettype::context {8, "context"};


}
}

