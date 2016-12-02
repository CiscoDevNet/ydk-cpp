#ifndef _CISCO_IOS_XR_IPV4_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV4_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_datatypes {


class Ipv4AclDscpNumberEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value af11;
        static const Enum::Value af12;
        static const Enum::Value af13;
        static const Enum::Value af21;
        static const Enum::Value af22;
        static const Enum::Value af23;
        static const Enum::Value af31;
        static const Enum::Value af32;
        static const Enum::Value af33;
        static const Enum::Value af41;
        static const Enum::Value af42;
        static const Enum::Value af43;
        static const Enum::Value cs1;
        static const Enum::Value cs2;
        static const Enum::Value cs3;
        static const Enum::Value cs4;
        static const Enum::Value cs5;
        static const Enum::Value cs6;
        static const Enum::Value cs7;
        static const Enum::Value ef;

};

class Ipv4AclTcpBitsNumberEnum : public Enum
{
    public:
        static const Enum::Value established;
        static const Enum::Value ack;
        static const Enum::Value rst;
        static const Enum::Value fin;
        static const Enum::Value psh;
        static const Enum::Value syn;
        static const Enum::Value urg;

};

class Ipv4AclTcpMatchOperatorEnumEnum : public Enum
{
    public:
        static const Enum::Value match_all;
        static const Enum::Value match_any;

};

class Ipv4AclLoggingEnumEnum : public Enum
{
    public:
        static const Enum::Value log;
        static const Enum::Value log_input;

};

class Ipv4AclPrecedenceNumberEnum : public Enum
{
    public:
        static const Enum::Value critical;
        static const Enum::Value flash;
        static const Enum::Value flash_override;
        static const Enum::Value immediate;
        static const Enum::Value internet;
        static const Enum::Value network;
        static const Enum::Value priority;
        static const Enum::Value routine;

};

class Ipv4AclProtocolNumberEnum : public Enum
{
    public:
        static const Enum::Value ip;
        static const Enum::Value icmp;
        static const Enum::Value igmp;
        static const Enum::Value ip_in_ip;
        static const Enum::Value tcp;
        static const Enum::Value igrp;
        static const Enum::Value udp;
        static const Enum::Value gre;
        static const Enum::Value esp;
        static const Enum::Value ahp;
        static const Enum::Value eigrp;
        static const Enum::Value ospf;
        static const Enum::Value nos;
        static const Enum::Value pim;
        static const Enum::Value pcp;
        static const Enum::Value sctp;

};

class Ipv4AclGrantEnumEnum : public Enum
{
    public:
        static const Enum::Value deny;
        static const Enum::Value permit;

};

class Ipv4AclPortNumberEnum : public Enum
{
    public:
        static const Enum::Value echo;
        static const Enum::Value discard;
        static const Enum::Value daytime;
        static const Enum::Value char_gen;
        static const Enum::Value ftp_data;
        static const Enum::Value ftp;
        static const Enum::Value telnet;
        static const Enum::Value smtp;
        static const Enum::Value time;
        static const Enum::Value name_server;
        static const Enum::Value who_is;
        static const Enum::Value tacacs;
        static const Enum::Value dns;
        static const Enum::Value boot_ps;
        static const Enum::Value boot_pc;
        static const Enum::Value tftp;
        static const Enum::Value gopher;
        static const Enum::Value finger;
        static const Enum::Value www;
        static const Enum::Value host_name;
        static const Enum::Value pop2;
        static const Enum::Value pop3;
        static const Enum::Value sun_rpc;
        static const Enum::Value ident;
        static const Enum::Value nntp;
        static const Enum::Value ntp;
        static const Enum::Value net_bios_ns;
        static const Enum::Value net_bios_dgs;
        static const Enum::Value net_bios_ss;
        static const Enum::Value snmp;
        static const Enum::Value snmp_trap;
        static const Enum::Value xdmcp;
        static const Enum::Value bgp;
        static const Enum::Value irc;
        static const Enum::Value dnsix;
        static const Enum::Value mobile_ip;
        static const Enum::Value pim_auto_rp;
        static const Enum::Value isakmp;
        static const Enum::Value exec_or_biff;
        static const Enum::Value login_or_who;
        static const Enum::Value cmd_or_syslog;
        static const Enum::Value lpd;
        static const Enum::Value talk;
        static const Enum::Value rip;
        static const Enum::Value uucp;
        static const Enum::Value klogin;
        static const Enum::Value kshell;
        static const Enum::Value ldp;

};

class Ipv4AclIcmpTypeCodeEnumEnum : public Enum
{
    public:
        static const Enum::Value echo_reply;
        static const Enum::Value network_unreachable;
        static const Enum::Value host_unreachable;
        static const Enum::Value protocol_unreachable;
        static const Enum::Value port_unreachable;
        static const Enum::Value packet_too_big;
        static const Enum::Value source_route_failed;
        static const Enum::Value network_unknown;
        static const Enum::Value host_unknown;
        static const Enum::Value host_isolated;
        static const Enum::Value dod_net_prohibited;
        static const Enum::Value dod_host_prohibited;
        static const Enum::Value host_tos_unreachable;
        static const Enum::Value net_tos_unreachable;
        static const Enum::Value administratively_prohibited;
        static const Enum::Value host_precedence_unreachable;
        static const Enum::Value precedence_unreachable;
        static const Enum::Value unreachable;
        static const Enum::Value source_quench;
        static const Enum::Value network_redirect;
        static const Enum::Value host_redirect;
        static const Enum::Value net_tos_redirect;
        static const Enum::Value host_tos_redirect;
        static const Enum::Value redirect;
        static const Enum::Value alternate_address;
        static const Enum::Value echo;
        static const Enum::Value router_advertisement;
        static const Enum::Value router_solicitation;
        static const Enum::Value ttl_exceeded;
        static const Enum::Value reassembly_timeout;
        static const Enum::Value time_exceeded;
        static const Enum::Value general_parameter_problem;
        static const Enum::Value option_missing;
        static const Enum::Value no_room_for_option;
        static const Enum::Value parameter_problem;
        static const Enum::Value timestamp_request;
        static const Enum::Value timestamp_reply;
        static const Enum::Value information_request;
        static const Enum::Value information_reply;
        static const Enum::Value mask_request;
        static const Enum::Value mask_reply;
        static const Enum::Value traceroute;
        static const Enum::Value conversion_error;
        static const Enum::Value mobile_redirect;

};

class Ipv4AclOperatorEnumEnum : public Enum
{
    public:
        static const Enum::Value equal;
        static const Enum::Value greater_than;
        static const Enum::Value less_than;
        static const Enum::Value not_equal;
        static const Enum::Value range;

};

class Ipv4AclIgmpNumberEnum : public Enum
{
    public:
        static const Enum::Value host_query;
        static const Enum::Value host_report;
        static const Enum::Value dvmrp;
        static const Enum::Value pim;
        static const Enum::Value trace;
        static const Enum::Value v2_report;
        static const Enum::Value v2_leave;
        static const Enum::Value mtrace_response;
        static const Enum::Value mtrace;
        static const Enum::Value v3_report;

};

class Ipv4AclStatusEnumEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_DATATYPES_ */

