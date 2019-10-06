#ifndef _CISCO_IOS_XR_IPV6_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV6_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_datatypes {

class Ipv6AclTcpMatchOperatorEnum : public ydk::Enum
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

class Ipv6AclIcmpTypeCodeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_route_to_destination;
        static const ydk::Enum::YLeaf administratively_prohibited;
        static const ydk::Enum::YLeaf beyond_scope_of_source_address;
        static const ydk::Enum::YLeaf host_unreachable;
        static const ydk::Enum::YLeaf port_unreachable;
        static const ydk::Enum::YLeaf unreachable;
        static const ydk::Enum::YLeaf packet_too_big;
        static const ydk::Enum::YLeaf ttl_exceeded;
        static const ydk::Enum::YLeaf reassembly_timeout;
        static const ydk::Enum::YLeaf time_exceeded;
        static const ydk::Enum::YLeaf erronenous_header_field;
        static const ydk::Enum::YLeaf option_missing;
        static const ydk::Enum::YLeaf no_room_for_option;
        static const ydk::Enum::YLeaf parameter_problem;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf echo_reply;
        static const ydk::Enum::YLeaf group_membership_query;
        static const ydk::Enum::YLeaf group_membership_report;
        static const ydk::Enum::YLeaf group_membership_reduction;
        static const ydk::Enum::YLeaf router_solicitation;
        static const ydk::Enum::YLeaf router_advertisement;
        static const ydk::Enum::YLeaf neighbor_solicitation;
        static const ydk::Enum::YLeaf neighbor_advertisement;
        static const ydk::Enum::YLeaf redirect;
        static const ydk::Enum::YLeaf rr_command;
        static const ydk::Enum::YLeaf rr_result;
        static const ydk::Enum::YLeaf rr_seqnum_reset;
        static const ydk::Enum::YLeaf router_renumbering;
        static const ydk::Enum::YLeaf query_subject_is_ipv6_address;
        static const ydk::Enum::YLeaf query_subject_is_domain_name;
        static const ydk::Enum::YLeaf query_subject_is_ipv4_address;
        static const ydk::Enum::YLeaf who_are_you_request;
        static const ydk::Enum::YLeaf node_information_successful_reply;
        static const ydk::Enum::YLeaf node_information_request_is_refused;
        static const ydk::Enum::YLeaf unknown_query_type;
        static const ydk::Enum::YLeaf who_are_you_reply;

        static int get_enum_value(const std::string & name) {
            if (name == "no-route-to-destination") return 65536;
            if (name == "administratively-prohibited") return 65537;
            if (name == "beyond-scope-of-source-address") return 65538;
            if (name == "host-unreachable") return 65539;
            if (name == "port-unreachable") return 65540;
            if (name == "unreachable") return 131071;
            if (name == "packet-too-big") return 131072;
            if (name == "ttl-exceeded") return 196608;
            if (name == "reassembly-timeout") return 196609;
            if (name == "time-exceeded") return 262143;
            if (name == "erronenous-header-field") return 262144;
            if (name == "option-missing") return 262145;
            if (name == "no-room-for-option") return 262146;
            if (name == "parameter-problem") return 327679;
            if (name == "echo") return 8388608;
            if (name == "echo-reply") return 8454144;
            if (name == "group-membership-query") return 8585215;
            if (name == "group-membership-report") return 8650751;
            if (name == "group-membership-reduction") return 8716287;
            if (name == "router-solicitation") return 8716288;
            if (name == "router-advertisement") return 8781824;
            if (name == "neighbor-solicitation") return 8847360;
            if (name == "neighbor-advertisement") return 8912896;
            if (name == "redirect") return 8978432;
            if (name == "rr-command") return 9043968;
            if (name == "rr-result") return 9043969;
            if (name == "rr-seqnum-reset") return 9044223;
            if (name == "router-renumbering") return 9109503;
            if (name == "query-subject-is-ipv6-address") return 9109504;
            if (name == "query-subject-is-domain-name") return 9109505;
            if (name == "query-subject-is-ipv4-address") return 9109506;
            if (name == "who-are-you-request") return 9175039;
            if (name == "node-information-successful-reply") return 9175040;
            if (name == "node-information-request-is-refused") return 9175041;
            if (name == "unknown-query-type") return 9175042;
            if (name == "who-are-you-reply") return 9240575;
            return -1;
        }
};

class Ipv6AclProtocolNumber : public ydk::Enum
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
        static const ydk::Enum::YLeaf icmpv6;
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
            if (name == "icmpv6") return 58;
            if (name == "eigrp") return 88;
            if (name == "ospf") return 89;
            if (name == "nos") return 94;
            if (name == "pim") return 103;
            if (name == "pcp") return 108;
            if (name == "sctp") return 132;
            return -1;
        }
};

class Ipv6PrefixMatchMinLength : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_min_length;

        static int get_enum_value(const std::string & name) {
            if (name == "match-min-length") return 2;
            return -1;
        }
};

class Ipv6AclGrantEnum : public ydk::Enum
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

class Ipv6PrefixMatchMaxLength : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_max_length;

        static int get_enum_value(const std::string & name) {
            if (name == "match-max-length") return 3;
            return -1;
        }
};

class Ipv6AclPrecedenceNumber : public ydk::Enum
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

class Ipv6AclOperatorEnum : public ydk::Enum
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

class Ipv6AclDscpNumber : public ydk::Enum
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

class Ipv6PrefixMatchExactLength : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_exact_length;

        static int get_enum_value(const std::string & name) {
            if (name == "match-exact-length") return 1;
            return -1;
        }
};

class Ipv6AclPortNumber : public ydk::Enum
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

class Ipv6AclLoggingEnum : public ydk::Enum
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

class Ipv6AclTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acl;
        static const ydk::Enum::YLeaf prefix_list;

        static int get_enum_value(const std::string & name) {
            if (name == "acl") return 1;
            if (name == "prefix-list") return 2;
            return -1;
        }
};

class Ipv6AclStatusEnum : public ydk::Enum
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


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_DATATYPES_ */

