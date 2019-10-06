#ifndef _CISCO_IOS_XR_IPV4_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV4_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_acl_datatypes {

class Ipv4AclLoggingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf log_input;

        static int get_enum_value(const std::string & name) {
            if (name == "log") return 1;
            if (name == "log-input") return 2;
            return -1;
        }
};

class Ipv4AclDscpNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;
        static const ydk::Enum::YLeaf ef;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "af11") return 10;
            if (name == "af12") return 12;
            if (name == "af13") return 14;
            if (name == "af21") return 18;
            if (name == "af22") return 20;
            if (name == "af23") return 22;
            if (name == "af31") return 26;
            if (name == "af32") return 28;
            if (name == "af33") return 30;
            if (name == "af41") return 34;
            if (name == "af42") return 36;
            if (name == "af43") return 38;
            if (name == "cs1") return 8;
            if (name == "cs2") return 16;
            if (name == "cs3") return 24;
            if (name == "cs4") return 32;
            if (name == "cs5") return 40;
            if (name == "cs6") return 48;
            if (name == "cs7") return 56;
            if (name == "ef") return 46;
            return -1;
        }
};

class Ipv4AclOperatorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf greater_than;
        static const ydk::Enum::YLeaf less_than;
        static const ydk::Enum::YLeaf not_equal;
        static const ydk::Enum::YLeaf range;

        static int get_enum_value(const std::string & name) {
            if (name == "equal") return 1;
            if (name == "greater-than") return 2;
            if (name == "less-than") return 3;
            if (name == "not-equal") return 4;
            if (name == "range") return 5;
            return -1;
        }
};

class Ipv4AclStatusEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class Ipv4AclPortNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf char_gen;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf name_server;
        static const ydk::Enum::YLeaf who_is;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf boot_ps;
        static const ydk::Enum::YLeaf boot_pc;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf www;
        static const ydk::Enum::YLeaf host_name;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf sun_rpc;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf net_bios_ns;
        static const ydk::Enum::YLeaf net_bios_dgs;
        static const ydk::Enum::YLeaf net_bios_ss;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf snmp_trap;
        static const ydk::Enum::YLeaf xdmcp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf mobile_ip;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf exec_or_biff;
        static const ydk::Enum::YLeaf login_or_who;
        static const ydk::Enum::YLeaf cmd_or_syslog;
        static const ydk::Enum::YLeaf lpd;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
        static const ydk::Enum::YLeaf ldp;

        static int get_enum_value(const std::string & name) {
            if (name == "echo") return 7;
            if (name == "discard") return 9;
            if (name == "daytime") return 13;
            if (name == "char-gen") return 19;
            if (name == "ftp-data") return 20;
            if (name == "ftp") return 21;
            if (name == "telnet") return 23;
            if (name == "smtp") return 25;
            if (name == "time") return 37;
            if (name == "name-server") return 42;
            if (name == "who-is") return 43;
            if (name == "tacacs") return 49;
            if (name == "dns") return 53;
            if (name == "boot-ps") return 67;
            if (name == "boot-pc") return 68;
            if (name == "tftp") return 69;
            if (name == "gopher") return 70;
            if (name == "finger") return 79;
            if (name == "www") return 80;
            if (name == "host-name") return 101;
            if (name == "pop2") return 109;
            if (name == "pop3") return 110;
            if (name == "sun-rpc") return 111;
            if (name == "ident") return 113;
            if (name == "nntp") return 119;
            if (name == "ntp") return 123;
            if (name == "net-bios-ns") return 137;
            if (name == "net-bios-dgs") return 138;
            if (name == "net-bios-ss") return 139;
            if (name == "snmp") return 161;
            if (name == "snmp-trap") return 162;
            if (name == "xdmcp") return 177;
            if (name == "bgp") return 179;
            if (name == "irc") return 194;
            if (name == "dnsix") return 195;
            if (name == "mobile-ip") return 434;
            if (name == "pim-auto-rp") return 496;
            if (name == "isakmp") return 500;
            if (name == "exec-or-biff") return 512;
            if (name == "login-or-who") return 513;
            if (name == "cmd-or-syslog") return 514;
            if (name == "lpd") return 515;
            if (name == "talk") return 517;
            if (name == "rip") return 520;
            if (name == "uucp") return 540;
            if (name == "klogin") return 543;
            if (name == "kshell") return 544;
            if (name == "ldp") return 646;
            return -1;
        }
};

class Ipv4AclPrecedenceNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 5;
            if (name == "flash") return 3;
            if (name == "flash-override") return 4;
            if (name == "immediate") return 2;
            if (name == "internet") return 6;
            if (name == "network") return 7;
            if (name == "priority") return 1;
            if (name == "routine") return 0;
            return -1;
        }
};

class Ipv4AclIgmpNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf host_query;
        static const ydk::Enum::YLeaf host_report;
        static const ydk::Enum::YLeaf dvmrp;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf trace;
        static const ydk::Enum::YLeaf v2_report;
        static const ydk::Enum::YLeaf v2_leave;
        static const ydk::Enum::YLeaf mtrace_response;
        static const ydk::Enum::YLeaf mtrace;
        static const ydk::Enum::YLeaf v3_report;

        static int get_enum_value(const std::string & name) {
            if (name == "host-query") return 17;
            if (name == "host-report") return 18;
            if (name == "dvmrp") return 19;
            if (name == "pim") return 20;
            if (name == "trace") return 21;
            if (name == "v2-report") return 22;
            if (name == "v2-leave") return 23;
            if (name == "mtrace-response") return 30;
            if (name == "mtrace") return 31;
            if (name == "v3-report") return 34;
            return -1;
        }
};

class Ipv4AclGrantEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            return -1;
        }
};

class Ipv4AclTcpMatchOperatorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;

        static int get_enum_value(const std::string & name) {
            if (name == "match-all") return 1;
            if (name == "match-any") return 3;
            return -1;
        }
};

class Ipv4AclProtocolNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ip_in_ip;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf igrp;
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf ahp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf nos;
        static const ydk::Enum::YLeaf pim;
        static const ydk::Enum::YLeaf pcp;
        static const ydk::Enum::YLeaf sctp;

        static int get_enum_value(const std::string & name) {
            if (name == "ip") return 0;
            if (name == "icmp") return 1;
            if (name == "igmp") return 2;
            if (name == "ip-in-ip") return 4;
            if (name == "tcp") return 6;
            if (name == "igrp") return 9;
            if (name == "udp") return 17;
            if (name == "gre") return 47;
            if (name == "esp") return 50;
            if (name == "ahp") return 51;
            if (name == "eigrp") return 88;
            if (name == "ospf") return 89;
            if (name == "nos") return 94;
            if (name == "pim") return 103;
            if (name == "pcp") return 108;
            if (name == "sctp") return 132;
            return -1;
        }
};

class Ipv4AclFragFlags : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dont_fragment;
        static const ydk::Enum::YLeaf is_fragment;
        static const ydk::Enum::YLeaf first_fragment;
        static const ydk::Enum::YLeaf last_fragment;
        static const ydk::Enum::YLeaf dont_fragment_is_fragment;
        static const ydk::Enum::YLeaf dont_fragment_first_fragment;
        static const ydk::Enum::YLeaf dont_fragment_last_fragment;

        static int get_enum_value(const std::string & name) {
            if (name == "dont-fragment") return 1;
            if (name == "is-fragment") return 2;
            if (name == "first-fragment") return 4;
            if (name == "last-fragment") return 8;
            if (name == "dont-fragment-is-fragment") return 3;
            if (name == "dont-fragment-first-fragment") return 5;
            if (name == "dont-fragment-last-fragment") return 9;
            return -1;
        }
};

class Ipv4AclIcmpTypeCodeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf network_unreachable;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf protocol_unreachable;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf source_route_failed;
        static const ydk::Enum::YLeaf network_unknown;
        static const ydk::Enum::YLeaf host_unknown;
        static const ydk::Enum::YLeaf host_isolated;
        static const ydk::Enum::YLeaf dod_net_prohibited;
        static const ydk::Enum::YLeaf dod_host_prohibited;
        static const ydk::Enum::YLeaf host_tos_unreachable;
        static const ydk::Enum::YLeaf net_tos_unreachable;
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf host_precedence_unreachable;
        static const ydk::Enum::YLeaf precedence_unreachable;
        static const ydk::Enum::YLeaf unreachable;
        static const ydk::Enum::YLeaf source_quench;
        static const ydk::Enum::YLeaf network_redirect;
        static const ydk::Enum::YLeaf host_redirect;
        static const ydk::Enum::YLeaf net_tos_redirect;
        static const ydk::Enum::YLeaf host_tos_redirect;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf alternate_address;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf general_parameter_problem;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf timestamp_request;
        static const ydk::Enum::YLeaf timestamp_reply;
        static const ydk::Enum::YLeaf information_request;
        static const ydk::Enum::YLeaf information_reply;
        static const ydk::Enum::YLeaf mask_request;
        static const ydk::Enum::YLeaf mask_reply;
        static const ydk::Enum::YLeaf traceroute;
        static const ydk::Enum::YLeaf conversion_error;
        static const ydk::Enum::YLeaf mobile_redirect;

        static int get_enum_value(const std::string & name) {
            if (name == "echo-reply") return 65535;
            if (name == "network-unreachable") return 196608;
            if (name == "host-unreachable") return 196609;
            if (name == "protocol-unreachable") return 196610;
            if (name == "port-unreachable") return 196611;
            if (name == "packet-too-big") return 196612;
            if (name == "source-route-failed") return 196613;
            if (name == "network-unknown") return 196614;
            if (name == "host-unknown") return 196615;
            if (name == "host-isolated") return 196616;
            if (name == "dod-net-prohibited") return 196617;
            if (name == "dod-host-prohibited") return 196618;
            if (name == "host-tos-unreachable") return 196619;
            if (name == "net-tos-unreachable") return 196620;
            if (name == "administratively-prohibited") return 196621;
            if (name == "host-precedence-unreachable") return 196622;
            if (name == "precedence-unreachable") return 196623;
            if (name == "unreachable") return 262143;
            if (name == "source-quench") return 327679;
            if (name == "network-redirect") return 327680;
            if (name == "host-redirect") return 327681;
            if (name == "net-tos-redirect") return 327682;
            if (name == "host-tos-redirect") return 327683;
            if (name == "redirect") return 393215;
            if (name == "alternate-address") return 458751;
            if (name == "echo") return 589823;
            if (name == "router-advertisement") return 655359;
            if (name == "router-solicitation") return 720895;
            if (name == "ttl-exceeded") return 720896;
            if (name == "reassembly-timeout") return 720897;
            if (name == "time-exceeded") return 786431;
            if (name == "general-parameter-problem") return 786432;
            if (name == "option-missing") return 786433;
            if (name == "no-room-for-option") return 786434;
            if (name == "parameter-problem") return 851967;
            if (name == "timestamp-request") return 917503;
            if (name == "timestamp-reply") return 983039;
            if (name == "information-request") return 1048575;
            if (name == "information-reply") return 1114111;
            if (name == "mask-request") return 1179647;
            if (name == "mask-reply") return 1245183;
            if (name == "traceroute") return 2031615;
            if (name == "conversion-error") return 2097151;
            if (name == "mobile-redirect") return 2162687;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_DATATYPES_ */

